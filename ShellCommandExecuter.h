#ifndef SHELLCOMMANDEXECUTER_H
#define SHELLCOMMANDEXECUTER_H

#include "ShellCommand.h"

class ShellCommandExecuter {
private:
    ShellCommand* previousCommands;
public:
    ShellCommandExecuter(int rememberCommands);
    ~ShellCommandExecuter();
    bool executeCommand(ShellCommand* command);
    void undoCommand();
};

#endif
