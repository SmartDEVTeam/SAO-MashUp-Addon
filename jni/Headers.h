#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include "Substrate.h"

#include "com/smartdev/saomc/items/CardinalItems.h"
#include "com/smartdev/saomc/blocks/CardinalBlocks.h"
#include "com/smartdev/saomc/recipes/CardinalRecipes.h"
#include "com/smartdev/saomc/levelgen/CardinalDecorator.h"
#include "com/smartdev/saomc/client/screens/DeathScreen/CardinalDeathScreen.h"

#include "com/mojang/minecraftpe/Common.h"
#include "com/mojang/minecraftpe/locale/Localization.h"
#include "com/mojang/minecraftpe/world/entity/Mob.h"
#include "com/mojang/minecraftpe/world/level/Level.h"
#include "com/mojang/minecraftpe/world/level/LevelListener.h"
#include "com/mojang/minecraftpe/world/item/Item.h"
#include "com/mojang/minecraftpe/world/level/block/Block.h"
#include "com/mojang/minecraftpe/world/item/BlockItem.h"
#include "com/mojang/minecraftpe/world/item/recipes/Recipes.h"
#include "com/mojang/minecraftpe/world/item/recipes/FurnaceRecipes.h"
#include "com/mojang/minecraftpe/world/material/Material.h"
#include "com/mojang/minecraftpe/world/level/biome/BiomeDecorator.h"
#include "com/mojang/minecraftpe/client/gui/Gui.h"
#include "com/mojang/minecraftpe/client/gui/screen/DeathScreen.h"