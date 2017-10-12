#ifndef EXITCOMMAND_H
#define EXITCOMMAND_H

#include "ShellCommand.h"
#include "Shell.h"

class ExitCommand: public ShellCommand {
private:
    Shell* shell;
public:    
    ExitCommand(Shell* shell);
    void execute() override;
};

#endif