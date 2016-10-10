/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fork_exec.h
 * Author: gocho
 *
 * Created on 2016/10/08, 20:06
 */

#ifndef FORK_EXEC_H
#define FORK_EXEC_H

class ForkExec {
public:
    ForkExec();
    ~ForkExec();
    
    static ForkExec& getInstance(void) {
        static ForkExec forkexec;
        return forkexec;
    }
    
    int ForkAndExec(const char* path, char* const argv[]);
    
private:
    

};

#endif /* FORK_EXEC_H */

