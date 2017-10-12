#include "Shell.h"
#include <iostream>

Shell::Shell(ShellProgram* program, ShellCommandExecuter* commandExecuter) {
    this->program = program;
    this->commandExecuter = commandExecuter;
    this->input = new char[255];
    this->running = false;
}

Shell::~Shell() {
    delete [] input;
}

void Shell::printLine(const char* line) {
    std::cout << "> " << line << std::endl;
}

void Shell::writeInput(char* input) {
    std::cout << "> ";
    std::cin >> input;
}

char* Shell::getInput() {
    Shell::writeInput(input);
    return input;
}

bool Shell::isRunning() {
    return running;
}

void Shell::stop() {
    running = false;
}

void Shell::run() {
    running = true;
    printLine(program->getName());
    while(running) {
        writeInput(input);
        if (!commandExecuter->executeCommand(program->getCommand(input))) {
            printLine("Command not found!");
        }
    }
}