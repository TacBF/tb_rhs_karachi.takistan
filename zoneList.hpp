#include "tb_defines.hpp"
//Mission: tb_Anthrakia_Docks
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,    {9}      	, {}    , 1      , {}        , 0    , "SAA Main" },

{ 2, TEAM_BLUE, 	SPAWN_NEVER,    {3,9}      	, {}   	, 1      , {}        , 0    , "Bravo" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {2,4}  		, {}    , 1      , {}        , 0    , "Charlie" },

{ 4, TEAM_NEUTRAL, 	SPAWN_NEVER,    {3,5}      	, {}   	, 1      , {}        , 0    , "Base Karachi" },

{ 5, TEAM_RED, 	SPAWN_NEVER,    {4,6}      	, {}   	, 1      , {}        , 0    , "Oil Drill" },

{ 6, TEAM_RED, 		SPAWN_NEVER,    {5,7}		, {}    , 1      , {}        , 0    , "Delta" },

{ 7, TEAM_RED, 		SPAWN_NEVER,    {6,8}		, {}    , 1      , {}        , 0    , "Echo" },

{ 8, TEAM_RED, 		SPAWN_XRAY ,    {7}      , {}    , 1      , {}        , 0    , "Daesh Main" },

{ 9, TEAM_BLUE, 	SPAWN_NEVER ,    {1,2}     	, {}    , 1      , {}        , 0    , "Alpha" },

{ 10, TEAM_RED, 	SPAWN_INSTANT,    {}		, {}    , 1      , {6,8}        , 2    , "FB1" },

{ 11, TEAM_BLUE, 	SPAWN_INSTANT ,    {}      	, {}    , 1      , {1,2}        , 2    , "FB1" },

{ 12, TEAM_BLUE, 	SPAWN_INSTANT ,    {}      	, {}    , 1      , {1,3}        , 2    , "FB2" },

{ 13, TEAM_RED, 	SPAWN_INSTANT,    {}		, {}    , 1      , {5,8}        , 2    , "FB2" },

{ 14, TEAM_RED, 	SPAWN_INSTANT,    {}		, {}    , 1      , {3,8}        , 2    , "FB3" },

{ 15, TEAM_RED, 	SPAWN_INSTANT,    {}		, {}    , 1      , {6,1}        , 2    , "FB3" }

};
