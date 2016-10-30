/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   startup.h
 * Author: gocho
 *
 * Created on 2016/10/08, 20:06
 */

#ifndef STARTUP_H
#define STARTUP_H

class Startup {
public:
    Startup();
    ~Startup();

    static Startup& getInstance(void) {
        static Startup startup;
        return startup;
    }
    
    int StartupApp(void);
    
private:
    
};

#endif /* STARTUP_H */

