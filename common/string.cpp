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

#include "string.h"

String::String(){
    
}

String::~String(){
    
}


int String::Strip(std::string in_str, std::string& out_str) {

    printf("in_str = %s\n", in_str.c_str());
    
    int first = in_str.find("(");
    int end = in_str.find(")");
    
    out_str = in_str.substr(first+1,end-first-1);
    
    printf("out_str = %s\n", out_str.c_str());
    
    return 0;
}