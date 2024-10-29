#include <stdio.h>
#include "backend.c"

int main(int argc, char *argv[]) {
    printf("\nTESTING-CLI-XBPS-> ");
    if (argc != 3){
        printf("Need More"); // or print help
        return 1;
    }
    if (argv[1] = "install") {
        char *pkg = argv[2];
        install(pkg);

    }
//    if (cmd == "uninstall") {
//        printf("\nWhat package? (CaSe SeNsItIvE) ");
//        char *pkgu;
//        scanf("%s", pkgu);
//        unstall(pkgu);
//
//    }
//    if (cmd == "help") {
//        printf("\nTESTING CLI FOR XBPS THESE COMMANDS MAY NOT WORK!\nCommands:\ninstall - installs a package\nuninstall - uninstalls a package\nTESTING CLI FOR XBPS THESE COMMANDS MAY NOT WORK!");
//    }
    else {
        printf("invalid command, try help");
    }
}
