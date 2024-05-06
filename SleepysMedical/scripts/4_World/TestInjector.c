class Epinephrine: Inventory_Base;
class TestInjector: Epinephrine
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

	}
	
};