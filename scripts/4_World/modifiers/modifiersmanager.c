modded class ModifiersManager
{
    override void Init()
    {
        super.Init();
        
        AddModifier(new FoodSupplementMdfr);
        AddModifier(new BioStimMdfr);
        AddModifier(new EnergyDrinkMdfr);
        AddModifier(new DextroseMdfr);
        AddModifier(new BreakAidMdfr);
    }
}