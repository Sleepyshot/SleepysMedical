class VitaminBottle : Edible_Base;
class FoodSupplement : VitaminBottle
{
	//Specify this item can only be combined but not split
	override void InitItemVariables()
	{
		super.InitItemVariables();

		can_this_be_combined = true;
	}
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer.GetModifiersManager().IsModifierActive(eModifiers1.MDF_FOOD_SUPPLEMENT)) //effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier(eModifiers1.MDF_FOOD_SUPPLEMENT);
		}

		consumer.GetModifiersManager().ActivateModifier(eModifiers1.MDF_FOOD_SUPPLEMENT);

    
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceConsumeSingle);
		AddAction(ActionEatPillFromBottle);
	}
}