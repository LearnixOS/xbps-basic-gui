#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//backend of sdas

void install(char *pkg) {
    char command[100]; 
    char xinstall[120] = "xbps-install -S"; // i think its the correct command idk
// char xinstall[1000] = "echo "; //placeholder cause i dont have xbps-install command
    strcat(xinstall, pkg);
    int returnCode = system(xinstall); 

    if (returnCode == 0) {
        printf("Installed! You may now close this window!"); //i think it opens a window atleast i hope it does!
    
    }

    else {
        printf("Install failed! Returned code: %d", returnCode); //hope this work frfr
    } 
}

void uninstall(char *pkg) {

    char command[100]; 
    char xuninstall[120] = "xbps-remove -R"; // i think its the correct command idk
//     char xuninstall[1000] = "echo "; //placeholder cause i dont have xbps-install command
    strcat(xuninstall, pkg);
    int returnCode = system(xuninstall); 


    if (returnCode == 0) {
        printf("Uninstalled Sucessfully"); 

        int returnCode = system(command);
    }

    else {
        printf("Uninstall failed! Returned code: %d", returnCode); //hope this work frfrfr
    } 
}

void cleanup() {
    //stuff 
}

void update() {
    //stuff
}


int main(int argc, char* argv[]){

    if (argc != 3){
        printf("help text");
        return 1;
    }

    if (strcmp(argv[1], "install") == 0) {
        install(argv[2]);
        return 0;
    }
    if (strcmp(argv[1], "uninstall") == 0) {
        printf("uninstall");
        return 0;
    }
    else {
        printf("print help text idk");
        return 1;
    }
}
