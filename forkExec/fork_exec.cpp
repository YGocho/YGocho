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
#include <list>
#include <vector>

#include <boost/algorithm/string.hpp>
#include <boost/foreach.hpp>

#include "fork_exec.h"

ForkExec::ForkExec(){
    
}

ForkExec::~ForkExec(){
    
}

#if 0
int ForkExec::ForkAndExec(std::string cmd) {
    pid_t pid;
    
    
    pid = fork();
    if (pid == -1) {
        printf("%s(%d):fork error.",__func__,__LINE__);
        return -1;
    } else if (pid == 0) { // child process
        std::list<std::string> cmd_list;
        
        boost::split(cmd_list,cmd,boost::is_space());

        std::vector<char> arg;
        BOOST_FOREACH(std::string s, cmd_list) {
            arg.push_back(s.c_str());
        }

        //execv(path, argv);
    }
    
    // parent process
    return 0;
}
#endif

int ForkExec::ForkAndExec(const char* path, char* const argv[]) {
    pid_t pid;
    
    pid = fork();
    if (pid == -1) {
        printf("%s(%d):fork error.",__func__,__LINE__);
        return -1;
    } else if (pid == 0) { // child process
        execv(path, argv);
        exit(127);
    }
    
    // parent process
	waitpid
	
    return 0;
}