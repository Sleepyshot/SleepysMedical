class FoodSupplementMdfr: ModifierBase
{
    const int LIFETIME = 300;
	protected float	m_EnergyDelta;
	protected float	m_LastEnergyLevel;
	ref HumanMovementState		m_MovementState	= new HumanMovementState();
		
	override void Init()
	{
		m_TrackActivatedTime = true;
        m_IsPersistent = true;
		m_ID 					= eModifiers1.MDF_FOOD_SUPPLEMENT;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 1;
		DisableDeactivateCheck();
	}
	
	override bool ActivateCondition(PlayerBase player)
	{
		return false;
	}

	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if( attached_time >= LIFETIME )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	override void OnReconnect(PlayerBase player)
	{
        OnActivate(player);
	}

    override void OnActivate(PlayerBase player)
	{
		player.IncreaseHealingsCount();
	}

    override void OnDeactivate(PlayerBase player)
	{
		player.DecreaseHealingsCount();
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		
		player.GetStatEnergy().Add( 0.5 );	
	}
};