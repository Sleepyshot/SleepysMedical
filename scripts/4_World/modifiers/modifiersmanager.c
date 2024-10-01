modded class ModifiersManager
{
    override void Init()
    {
        super.Init();

        AddModifier(new TestMdfr);
        AddModifier(new FoodSupplementMdfr);
        AddModifier(new BioStimMdfr);
        AddModifier(new TranexamicAcidMdfr);
        AddModifier(new EnergyDrinkMdfr);
        AddModifier(new DextroseMdfr);
        AddModifier(new BreakAidMdfr);
    }
}