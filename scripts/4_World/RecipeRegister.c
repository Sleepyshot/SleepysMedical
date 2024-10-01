modded class PluginRecipesManager// we are changing the recipe manager class
{
    override void RegisterRecipies()// override the function with our own. void means we dont return anything from this function
    {
        super.RegisterRecipies();//we call super to execute all the code in the original function
        RegisterRecipe(new CraftBandages)// we now construct the new recipe we want to add.
        RegisterRecipe(new CraftDextroseIV)
    }
}