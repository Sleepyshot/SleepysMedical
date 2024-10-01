class Epinephrine: Inventory_Base;
class MethInjector: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
		if (!player)
			return;

		//EPINEPHRINE
		if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
		}
		player.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
	

		//MORPHINE
		if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_MORPHINE ) )//effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_MORPHINE );
		}
		player.GetModifiersManager().ActivateModifier( eModifiers.MDF_MORPHINE );

        //REGEN
        if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_HEALTH_REGEN ) )//effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_HEALTH_REGEN);
		}
		player.GetModifiersManager().ActivateModifier( eModifiers.MDF_HEALTH_REGEN );
	}
	
};