#include "Deque.h"

void RoboCommander::AddCommand(CommandType cmd)
{
    _commands.push_back(cmd);
}

void RoboCommander::UndoCommand()
{
    if (_commands.size() != 0)
    {
        _commands.pop_back();
    }
}

void RoboCommander::Execute()
{
    for (auto cmd : _commands)
        switch (cmd)
        {
            case CommandType::MoveLeft:
                cout << "Moving left" << endl;
                break;
            case CommandType::MoveRight:
                cout << "Moving right" << endl;
                break;
            case CommandType::MoveForward:
                cout << "Moving forward" << endl;
                break;
            case CommandType::MoveBackward:
                cout << "Moving backward" << endl;
                break;
            default:
                cout << "Invalid command" << endl;
        }
    cout << "Ready" << endl;
}

void lab_deque_1_2_1_19()
{
    RoboCommander commander;
    commander.AddCommand(MoveLeft);
    commander.AddCommand(MoveRight);
    commander.UndoCommand();
    commander.UndoCommand();
    commander.UndoCommand();
    commander.AddCommand(MoveLeft);
    commander.AddCommand(MoveForward);
    commander.AddCommand(MoveLeft);
    commander.AddCommand(MoveForward);
    commander.AddCommand(MoveRight);
    commander.AddCommand(MoveBackward);
    commander.Execute();
    commander.UndoCommand();
    commander.UndoCommand();
    commander.UndoCommand();
    commander.UndoCommand();
    commander.AddCommand(MoveForward);
    commander.Execute();
}