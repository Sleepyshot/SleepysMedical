class Epinephrine : Inventory_Base;
class DextroseBagIV: Epinephrine
{
    override void OnApply(PlayerBase player)
	{

        if (player.GetModifiersManager().IsModifierActive(eModifiers1.MDF_DEXTROSE)) //effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier(eModifiers1.MDF_DEXTROSE);
            
		}

		player.GetModifiersManager().ActivateModifier(eModifiers1.MDF_DEXTROSE);
       
    }
	
};