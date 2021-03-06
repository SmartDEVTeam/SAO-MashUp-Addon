#pragma once 

#include "minecraftpe/world/item/recipes/Recipes.h" 
#include "minecraftpe/world/item/recipes/FurnaceRecipes.h" 

class CardinalRecipes
{ 
public: 
	static void initRecipes(Recipes*);
	static void initFurnaceRecipes(FurnaceRecipes*);
private: 	
	static Recipes* _Instance; 	
	static std::vector<Recipes::Type> _ingredients; 	 	
	static void pushIngredient(int, int, char); 
	static void addRecipe(int, int, int, const std::vector<std::string>&); 
};

