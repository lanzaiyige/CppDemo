//
//  Wine.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/3/24.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Wine.h"

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) {
    label = string(l);
    year = y;
    yearBottles = new Pair<int, int>[1];
    for (int i = 0; i < y; i++) {
        yearBottles[i].setFirst(yr[i]);
        yearBottles[i].setSecond(bot[i]);
    }
}

Wine::Wine(const char *l, int y) {
    label = string(l);
    year = y;
    for (int i = 0; i < y; i++) {
        yearBottles[i].setFirst(0);
        yearBottles[i].setSecond(0);
    }
}

void Wine::GetBottles() {
    int year, bottle;
    std::cout << "Enter the Years: ";
    std::cin >> year;
    yearBottles = new Pair<int, int>[year];
    std::cout << "Enter the year of manufacture and the corresponding number of bottles.\n";
    for (int in = 0; in < year; in++)
    {
        std::cout << "The manufacture year: ";
        std::cin >> year;
        std::cout << "The number of bottles: ";
        std::cin >> bottle;
        yearBottles[in].setFirst(year);
        yearBottles[in].setSecond(bottle);
    }
}

string &Wine::Label() {
    return label;
}

int Wine::sum() {
    int sum = 0;
    for (int i = 0; i < year; i++) {
        sum += yearBottles[i].second();
    }
    return sum;
}

void Wine::Show() {
    std::cout << "FullName: " << label << std::endl;
    std::cout << "Years: " << year << std::endl;
    for (int in = 0; in < year; in++)
        std::cout << yearBottles[in].first() << ",  " << yearBottles[in].second() << std::endl;
}

Wine::~Wine() {
    delete [] yearBottles;
}
