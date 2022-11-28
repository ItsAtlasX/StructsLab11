#pragma once
class IRace
{
public:
	IRace(int HullPointMods, int  gunMods, int  dmgPerGunMod) :m_HullPointMods(HullPointMods),
		m_gunMods(gunMods),
		m_dmgPerGunMod(dmgPerGunMod)
	{}

	virtual int GetHullPointMods() { return m_HullPointMods; }

    ~IRace() {}
protected:
	int m_HullPointMods;
	int m_gunMods;
	int m_dmgPerGunMod;
};

#pragma once

class race
{
    public:
    race(int HealthMod, int StrengthMod, int ArmorMod) :m_HealthMod(HealthMod),
    m_StrengthMod(StrengthMod),
    m_ArmorMod(ArmorMod)
    {}

    virtual int GetHealthPoints()
    {
        return m_HealthMod;
    }
    ~race(){}
    protected:
    int m_HealthMod;
    int m_StrengthMod;
    int m_ArmorMod;
};