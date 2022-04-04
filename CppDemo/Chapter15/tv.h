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

class TV;

class Remote {
public:
    enum State{Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {Tv, DVD};
private:
    int mode;
public:
    Remote(int m = Tv) : mode(m) {}
    bool volup(TV &t);
    bool voldown(TV &t);
    void onoff(TV &t);
    void chanup(TV &t);
    void chandown(TV &t);
    void set_chan(TV &t, int c);
    void set_mode(TV &t);
    void set_input(TV &t);
};

class TV {
private:
    int state; // on or off
    int volume;
    int maxchannel;
    int channel;
    int mode; // boardcast or cable
    int input;
    
public:
//    friend class Remote;
    friend void Remote::set_chan(TV &t, int c);
    enum State{Off, On};
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

inline bool Remote::volup(TV &t) { return t.volup(); }
inline bool Remote::voldown(TV &t) { return t.voldown(); }
inline void Remote::onoff(TV &t) { t.onoff(); }
inline void Remote::chanup(TV &t) { t.chanup(); }
inline void Remote::chandown(TV &t) { t.chandown(); }
inline void Remote::set_chan(TV &t, int c) { t.channel = c; }
inline void Remote::set_mode(TV &t) { t.set_mode(); }
inline void Remote::set_input(TV &t) { t.set_input(); }

#endif /* tv_hpp */
