/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gocho
 *
 * Created on 2016/10/08, 20:04
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#include "startup.h"
#include "../common/string.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Startup start = Startup::getInstance();
    
    //start.StartupApp();
    
    String str = String::getInstance();
    
    std::string out_str = "";
    
    str.Strip("abc(1.2.3)bbb", out_str);
    
    
    return 0;
}

