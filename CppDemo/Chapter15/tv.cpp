//
//  tv.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/2.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "tv.h"
#include <iostream>

bool TV::volup() {
    if (volume < MaxVal) {
        volume++;
        return true;
    }
    return false;
}

bool TV::voldown() {
    if (volume > MinVal) {
        volume--;
        return true;
    }
    return false;
}

void TV::chanup() {
    if (channel < maxchannel) {
        channel++;
    } else {
        channel = 1;
    }
}

void TV::chandown() {
    if (channel > 1) {
        channel--;
    } else {
        channel = maxchannel;
    }
}

void TV::settings() const {
    using std::cout;
    using std::endl;
    cout << "Tv is " << (state == Off? "Off" : "On") << endl; if(state == On){
    cout << "Volume setting = " << volume << endl; cout << "Channel setting = " << channel << endl; cout <<"Mode = "
    << (mode == Antenna? "antenna" : "cable") << endl; cout <<"Input="
    << (input == Tv? "TV":"DVD") << endl;
    }
}
