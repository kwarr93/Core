#ifndef _PLAYERBOT_H
#define _PLAYERBOT_H

#include "Common.h"
#include "ObjectGuid.h"

class WorldSession;
class Player;

class PlayerBot
{
    private:
        WorldSession* m_session;

        void InitializeSession(uint32 accountId);

    public:
        PlayerBot(uint32 accountId);
        ~PlayerBot();

        bool Login(ObjectGuid characterGuid);
        bool Logout();

        bool IsLoggedIn() const;

        Player* GetPlayer() const;
};

#endif
