#include "ExitCommand.h"

ExitCommand::ExitCommand(Shell* shell) : ShellCommand("exit") {
    this->shell = shell;
}

void ExitCommand::execute() {
    shell->printLine("Cya!");
    shell->stop();    
}