/**
 * @file engine.hpp
 * @brief Declarația clasei Engine care coordonează jocul Pac-Man.
 * @author 
 * Chiril Andreev
 * @date 2025
 */

#pragma once
#include <memory>
#include <vector>
#include "player.hpp"
#include "enemy.hpp"
#include "reward.hpp"
#include "map.hpp"

/**
 * @class Engine
 * @brief Clasă responsabilă pentru logica principală a jocului.
 *
 * Engine controlează jucătorul, inamicii, recompensele și harta.
 * Initializează obiectele și rulează bucla principală a jocului.
 */
class Engine {
    std::shared_ptr<Player> player;     ///< Jucătorul principal.
    std::vector<Enemy> enemies;         ///< Lista de inamici.
    std::vector<Reward> rewards;        ///< Lista de recompense.
    Map map;                            ///< Harta jocului.

public:
    /**
     * @brief Constructor implicit. Creează jucătorul.
     */
    Engine();

    /**
     * @brief Inițializează lumea jocului (harta, inamicii, recompensele).
     */
    void Init();

    /**
     * @brief Rulează logica principală a jocului.
     */
    void Run();
};
