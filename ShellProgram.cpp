#include "ShellProgram.h"

ShellProgram::ShellProgram(const char* name) {
    //TODO
    this->name = name;
}

ShellCommand* ShellProgram::getCommands() {
    //TODO
    return nullptr;
}

int ShellProgram::getCommandCount() {
    //TODO
    return this->commandCount;
}

ShellCommand* ShellProgram::getCommand(char* input) {
    //TODO
    return nullptr;
}

void ShellProgram::addCommand(ShellCommand command) {
    //TODO
}

const char* ShellProgram::getName() {
    return this->name;
}