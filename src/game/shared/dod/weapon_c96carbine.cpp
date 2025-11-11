//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#include "cbase.h"
#include "weapon_dodsemiauto.h"

#if defined( CLIENT_DLL )

	#define CWeaponC96Carbine C_WeaponC96Carbine

#endif


class CWeaponC96Carbine : public CDODSemiAutoWeapon
{
public:
	DECLARE_CLASS( CWeaponC96Carbine, CDODSemiAutoWeapon );
	DECLARE_NETWORKCLASS(); 
	DECLARE_PREDICTABLE();
	DECLARE_ACTTABLE();
	
	CWeaponC96Carbine()  {}

	virtual DODWeaponID GetWeaponID( void ) const		{ return WEAPON_C96CARBINE; }

	virtual float GetRecoil( void ) { return 1.4f; }

private:
	CWeaponC96Carbine( const CWeaponC96Carbine & );
};

IMPLEMENT_NETWORKCLASS_ALIASED( WeaponC96Carbine, DT_WeaponC96Carbine )

BEGIN_NETWORK_TABLE( CWeaponC96Carbine, DT_WeaponC96Carbine )
END_NETWORK_TABLE()

BEGIN_PREDICTION_DATA( CWeaponC96Carbine )
END_PREDICTION_DATA()

LINK_ENTITY_TO_CLASS( weapon_c96carbine, CWeaponC96Carbine );
PRECACHE_WEAPON_REGISTER( weapon_c96carbine );

acttable_t CWeaponC96Carbine::m_acttable[] =
{
	{ ACT_DOD_STAND_AIM,					ACT_DOD_STAND_AIM_C96,			false },
	{ ACT_DOD_CROUCH_AIM,					ACT_DOD_CROUCH_AIM_C96,			false },
	{ ACT_DOD_CROUCHWALK_AIM,				ACT_DOD_CROUCHWALK_AIM_C96,		false },
	{ ACT_DOD_WALK_AIM,						ACT_DOD_WALK_AIM_C96,			false },
	{ ACT_DOD_RUN_AIM,						ACT_DOD_RUN_AIM_C96,			false },
	{ ACT_PRONE_IDLE,						ACT_DOD_PRONE_AIM_C96,			false },
	{ ACT_PRONE_FORWARD,					ACT_DOD_PRONEWALK_IDLE_C96,		false },
	{ ACT_DOD_STAND_IDLE,					ACT_DOD_STAND_IDLE_C96,			false },
	{ ACT_DOD_CROUCH_IDLE,					ACT_DOD_CROUCH_IDLE_C96,		false },
	{ ACT_DOD_CROUCHWALK_IDLE,				ACT_DOD_CROUCHWALK_IDLE_C96,	false },
	{ ACT_DOD_WALK_IDLE,					ACT_DOD_WALK_IDLE_C96,			false },
	{ ACT_DOD_RUN_IDLE,						ACT_DOD_RUN_IDLE_C96,			false },
	{ ACT_SPRINT,							ACT_DOD_SPRINT_IDLE_C96,		false },

	// Attack ( prone? )
	{ ACT_RANGE_ATTACK1,					ACT_DOD_PRIMARYATTACK_C96,		false },
	{ ACT_DOD_PRIMARYATTACK_CROUCH,			ACT_DOD_PRIMARYATTACK_C96,		false },
	{ ACT_DOD_PRIMARYATTACK_PRONE,			ACT_DOD_PRIMARYATTACK_PRONE_C96,false },

	// Reload ( prone? )
	{ ACT_RELOAD,							ACT_DOD_RELOAD_C96,				false },
	{ ACT_DOD_RELOAD_CROUCH,				ACT_DOD_RELOAD_CROUCH_C96,		false },
	{ ACT_DOD_RELOAD_PRONE,					ACT_DOD_RELOAD_PRONE_C96,		false },

	// Hand Signals
	{ ACT_DOD_HS_IDLE,						ACT_DOD_HS_IDLE_MP44,			false },
	{ ACT_DOD_HS_CROUCH,					ACT_DOD_HS_CROUCH_MP44,			false },
};


IMPLEMENT_ACTTABLE( CWeaponC96Carbine );