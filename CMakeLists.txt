cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(wargame-a)
add_executable(wargame-a DemoGame.cpp  doctest.h Board.cpp FootCommander.cpp FootSoldier.cpp Paramedic.cpp ParamedicCommander.cpp Sniper.cpp SniperCommander.cpp Attacker.hpp Healer.cpp Healer.hpp)
