modded class ModifiersManager
{
    override void Init()
    {
        super.Init();

        AddModifier(new TestMdfr);
        AddModifier(new FoodSupplementMdfr);
        AddModifier(new BioStimMdfr);
    }
}