//Player.h
#pragma once
#ifndef RPG_PLAYER_H
#define RPG_PLAYER_H
#include "../Character/Character.h"
#include "../Enemy/Enemy.h"
#include "../Combat/Action.h"
#include <vector>
#include <fstream>

class Enemy;

class Player: public Character {
private:
    int level;
    int experience;

    void levelUp();
    void saveStats();
    void loadStats();
public:
    Player(char _name[], int _health, int _attack, int _defense, int _speed);
    ~Player(); // Destructor para guardar las estadísticas al destruir el jugador
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    Character* selectTarget(vector<Enemy*> possibleTargets);
    Action takeAction(vector<Enemy*> enemies);

    void gainExperience(int exp);

    //TODO: Implement use object
};

#endif //RPG_PLAYER_H