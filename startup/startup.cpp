/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#include "startup.h"
#include "fork_exec.h"


Startup::Startup(){
    
}

Startup::~Startup(){
    
}

int Startup::StartupApp(){
    ForkExec fork_exec = ForkExec::getInstance();

    char path[] = "/home/app";    // exe path
    char *args[3] = {(char*)"emit",(char*)"start_app",NULL};
    
    fork_exec.ForkAndExec("/sbin/initctl", args);
    
    return 0;
}
