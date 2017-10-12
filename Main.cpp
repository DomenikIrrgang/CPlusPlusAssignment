#include "Shell.h"
#include "ExitCommand.h"

int main(void) {
    ShellProgram program("Testprogram");
    ShellCommandExecuter executer(10);
    Shell shell(&program, &executer);
    program.addCommand(ExitCommand(&shell));
    shell.run();
    return 0;
}