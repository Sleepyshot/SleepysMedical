class SodaCan_ColorBase : Edible_Base;
class EnergyDrink : SodaCan_ColorBase
{
    
    override void OnConsume(float amount, PlayerBase consumer)
	{



        //energy boost
		if (consumer.GetModifiersManager().IsModifierActive(eModifiers1.MDF_ENERGY_DRINK)) //effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier(eModifiers1.MDF_ENERGY_DRINK);
		}

		consumer.GetModifiersManager().ActivateModifier(eModifiers1.MDF_ENERGY_DRINK);

	}

    override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceDrink);
		AddAction(ActionDrinkCan);
	}
}