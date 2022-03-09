#ifndef UE4SS_SDK_Lobby_HPP
#define UE4SS_SDK_Lobby_HPP

#include "Lobby_enums.hpp"

class ALobbyBeaconClient : public AOnlineBeaconClient
{
    class ALobbyBeaconState* LobbyState;                                              // 0x02B0 (size: 0x8)
    class ALobbyBeaconPlayerState* PlayerState;                                       // 0x02B8 (size: 0x8)
    ELobbyBeaconJoinState LobbyJoinServerState;                                       // 0x02C1 (size: 0x1)

    void ServerSetPartyOwner(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& InPartyOwnerId);
    void ServerNotifyJoiningServer();
    void ServerLoginPlayer(FString InSessionId, const FUniqueNetIdRepl& InUniqueId, FString UrlString);
    void ServerKickPlayer(const FUniqueNetIdRepl& PlayerToKick, const FText& Reason);
    void ServerDisconnectFromLobby();
    void ServerCheat(FString Msg);
    void ClientWasKicked(const FText& KickReason);
    void ClientSetInviteFlags(const FJoinabilitySettings& Settings);
    void ClientPlayerLeft(const FUniqueNetIdRepl& InUniqueId);
    void ClientPlayerJoined(const FText& NewPlayerName, const FUniqueNetIdRepl& InUniqueId);
    void ClientLoginComplete(const FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
    void ClientJoinGame();
    void ClientAckJoiningServer();
}; // Size: 0x338

class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
    TSoftClassPtr<ALobbyBeaconState> LobbyStateClass;                                 // 0x0250 (size: 0x28)
    class ALobbyBeaconState* LobbyState;                                              // 0x0278 (size: 0x8)

}; // Size: 0x280

class ALobbyBeaconPlayerState : public AInfo
{
    FText DisplayName;                                                                // 0x0220 (size: 0x18)
    FUniqueNetIdRepl UniqueId;                                                        // 0x0238 (size: 0x28)
    FUniqueNetIdRepl PartyOwnerUniqueId;                                              // 0x0260 (size: 0x28)
    bool bInLobby;                                                                    // 0x0288 (size: 0x1)
    class AOnlineBeaconClient* ClientActor;                                           // 0x0290 (size: 0x8)

    void OnRep_UniqueId();
    void OnRep_PartyOwner();
    void OnRep_InLobby();
}; // Size: 0x2E0

struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
    class ALobbyBeaconPlayerState* LobbyPlayerState;                                  // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
    TArray<FLobbyPlayerStateActorInfo> Players;                                       // 0x0108 (size: 0x10)
    class ALobbyBeaconState* ParentState;                                             // 0x0118 (size: 0x8)

}; // Size: 0x120

class ALobbyBeaconState : public AInfo
{
    int32 MaxPlayers;                                                                 // 0x0220 (size: 0x4)
    TSubclassOf<class ALobbyBeaconPlayerState> LobbyBeaconPlayerStateClass;           // 0x0228 (size: 0x8)
    bool bLobbyStarted;                                                               // 0x0238 (size: 0x1)
    float WaitForPlayersTimeRemaining;                                                // 0x023C (size: 0x4)
    FLobbyPlayerStateInfoArray Players;                                               // 0x0240 (size: 0x120)

    void OnRep_WaitForPlayersTimeRemaining();
    void OnRep_LobbyStarted();
}; // Size: 0x3C8

#endif
