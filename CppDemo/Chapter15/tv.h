//
//  tv.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/2.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef tv_hpp
#define tv_hpp

#include <stdio.h>

class TV {
private:
    int state; // on or off
    int volume;
    int maxchannel;
    int channel;
    int mode; // boardcast or cable
    int input;
    
public:
    friend class Remote;
    enum {Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {Tv, DVD};
    
    TV(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(Tv) {}
    void onoff() { state = (state == On) ? Off : On; }
    bool ison() const { return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == Tv) ? DVD : Tv; }
    void settings() const;
};

class Remote {
private:
    int mode;
};

#endif /* tv_hpp */
