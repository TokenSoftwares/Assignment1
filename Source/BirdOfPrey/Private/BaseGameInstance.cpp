#include "BaseGameInstance.h"

void UBaseGameInstance::SetPlayerAgentInfoFor(int32 PlayerControllerID, FSAgentInfo AgentInfo)
{
    if (PlayerControllerID < 0)
    {
        return;
    }

    if (!PlayerAgentInfo.IsValidIndex(PlayerControllerID))
    {
        PlayerAgentInfo.SetNum(PlayerControllerID + 1);
    }

    PlayerAgentInfo[PlayerControllerID] = AgentInfo;
    OnAgentInfoChange.Broadcast(PlayerControllerID, AgentInfo);
}

FSAgentInfo UBaseGameInstance::GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& Result) const
{
    Result = PlayerAgentInfo.IsValidIndex(PlayerControllerID);
    if (Result)
    {
        return PlayerAgentInfo[PlayerControllerID];
    }

    return FSAgentInfo();
}
