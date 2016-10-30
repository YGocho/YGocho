/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   string.h
 * Author: gocho
 *
 * Created on 2016/10/30, 14:39
 */

#ifndef STRING_H
#define STRING_H

class String {
public:
    String();
    ~String();
    
    static String& getInstance(void) {
        static String forkexec;
        return forkexec;
    }
    
    int Strip(std::string in_str, std::string& out_str);
    
private:
    

};



#endif /* STRING_H */

