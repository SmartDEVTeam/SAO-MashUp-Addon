#pragma once

#include "minecraftpe/world/item/Item.h"
#include "minecraftpe/world/level/block/Block.h"

class Kagemitsu: public Item
{
public:
    Kagemitsu(const std::string &name, short id);
	
	virtual std::string buildDescriptionName(const ItemInstance&) const;	
	virtual std::string buildEffectDescriptionName(const ItemInstance&) const;	
	virtual bool canDestroyInCreative() const;
	virtual int getAttackDamage();
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual void hurtEnemy(ItemInstance*, Mob*, Mob*);
	virtual bool mineBlock(ItemInstance*, BlockID, int, int, int, Entity*);
};

