//
//  Student.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/3/6.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Student.h"

using namespace std;

double Student::Average() const {
    if (ArrayDB::size() > 0) {
        return ArrayDB::sum() / ArrayDB::size();
    } else {
        return 0;
    }
}

const string &Student::Name() const {
    return (const string &)*this;
}

double &Student::operator[](int i) {
    return ArrayDB::operator[](i);
}

double Student::operator[](int i) const {
    return ArrayDB::operator[](i);
}
