#ifndef SHELLPROGRAM_H
#define SHELLPROGRAM_H

#include "ShellCommand.h"

class ShellProgram {
private:
    ShellCommand* commands;
    const char* name;
    int commandCount;
public:
    ShellProgram(const char* name);
    ShellCommand* getCommands();
    int getCommandCount();
    ShellCommand* getCommand(char* input);
    void addCommand(ShellCommand command);
    const char* getName();
};

#endif