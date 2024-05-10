#ifndef RPG_ENEMY_H
#define RPG_ENEMY_H

#pragma once
#include "../Character/Character.h"
#include "../Player/Player.h"
#include <vector>
#include "../Combat/Action.h"

class Player;

class Enemy: public Character{
private:
    int experience;
    int totalHealth;
public:
    Enemy(char _name[], int _health, int _attack, int _defense, int _speed, int _experience);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    Character* selectTarget(vector<Player*> possibleTargets);
    Action takeAction(vector<Player*> partyMembers);

    int getExperience();

    int getTotalHealth() const;

    static int selectActionForIA();

    static int getRandBetweenRange(int i, int i1);
};


#endif //RPG_ENEMY_H
