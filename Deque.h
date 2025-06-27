#pragma once
#include <iostream>
#include <deque>

using namespace std;

void lab_deque_1_2_1_19();

enum CommandType
{
    MoveLeft,
    MoveRight,
    MoveForward,
    MoveBackward
};

//your code
class RoboCommander
{
    deque<CommandType> _commands;

public:
    void AddCommand(CommandType cmd);
    void UndoCommand();
    void Execute();
};
