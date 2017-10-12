#ifndef SHELLCOMMAND_H
#define SHELLCOMMAND_H

class ShellCommand {
    const char* name;
public:
    ShellCommand(const char* name);
    char* getName();
    virtual void execute() {}
    virtual void undo() {}
};

#endif