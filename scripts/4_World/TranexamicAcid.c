class Epinephrine: Inventory_Base;
class TranexamicAcid: Epinephrine
{
 
	override void OnApply(PlayerBase player)
	{

        if (player.GetModifiersManager().IsModifierActive(eModifiers1.MDF_TXA)) //effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier(eModifiers1.MDF_TXA);
            
		}

		player.GetModifiersManager().ActivateModifier(eModifiers1.MDF_TXA);
       
    }
        	
};