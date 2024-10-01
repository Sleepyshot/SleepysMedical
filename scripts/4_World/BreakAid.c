class Epinephrine: Inventory_Base;
class BreakAid: Epinephrine
{
	override void OnApply(PlayerBase player)
	{

        if (player.GetModifiersManager().IsModifierActive(eModifiers1.MDF_BREAK_AID)) //effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier(eModifiers1.MDF_BREAK_AID);
            
		}

		player.GetModifiersManager().ActivateModifier(eModifiers1.MDF_BREAK_AID);
       
    }
};