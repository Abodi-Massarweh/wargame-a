//
// Created by abodi on 27/05/2020.
//
#include "doctest.h"
#include "Board.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"

using namespace std;


TEST_CASE("First-Game")
{
    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}
TEST_CASE("Second-Game")
{
    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}
TEST_CASE("Third-Game")
{
    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}
TEST_CASE("Fourth-Game")
{
    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}
TEST_CASE("Fifth-Game")
{

    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}
TEST_CASE("Fifth-Game")
{

    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}

TEST_CASE("Fifth-Game")
{

    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}

TEST_CASE("Fifth-Game")
{

    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}

TEST_CASE("Fifth-Game")
{

    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}

TEST_CASE("Fifth-Game")
{

    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}

TEST_CASE("Fifth-Game")
{

    Board *bo = new Board(8, 8);
    Board &board = *bo;
            CHECK(!board.has_soldiers(1));
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    board[{0, 0}] = new Sniper(1);
    board[{0, 2}] = new SniperCommander(1);
    board[{0, 6}] = new Sniper(1);
    board[{0, 4}] = new ParamedicCommander(1);
    board[{2, 1}] = new Paramedic(1);

            CHECK(board.has_soldiers(1));

    // Add soldiers for player 2:
            CHECK(!board.has_soldiers(2));
    board[{7, 1}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);
    board[{7, 5}] = new FootSoldier(2);
    board[{7, 0}] = new Sniper(2);
    board[{7, 2}] = new SniperCommander(2);
    board[{7, 6}] = new Sniper(2);
    board[{5, 1}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));

    board.move(1, {0, 1}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {0, 3}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {1, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(1, {2, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
}







