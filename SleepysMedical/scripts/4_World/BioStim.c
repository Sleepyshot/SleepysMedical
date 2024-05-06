class Epinephrine: Inventory_Base;
class BioStim: Epinephrine
{
 
	override void OnApply(PlayerBase player)
	{

        if (player.GetModifiersManager().IsModifierActive(eModifiers1.MDF_BIOSTIM)) //effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier(eModifiers1.MDF_BIOSTIM);
            
		}

		player.GetModifiersManager().ActivateModifier(eModifiers1.MDF_BIOSTIM);
       
    }
        	
};