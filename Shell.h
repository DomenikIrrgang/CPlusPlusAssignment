#ifndef SHELL_H
#define SHELL_H

#include "ShellProgram.h"
#include "ShellCommandExecuter.h"

class Shell {
private:
    char* input;
    bool running;
    ShellProgram* program;
    ShellCommandExecuter* commandExecuter;
public:
    Shell(ShellProgram* program, ShellCommandExecuter* commandExecuter);
    ~Shell();
    void printLine(const char* line);
    char* getInput();
    void writeInput(char* input);
    bool isRunning();
    void run();
    void stop();
};

#endif