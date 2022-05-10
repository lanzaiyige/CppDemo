//
//  iterator.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/5/10.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef iterator_hpp
#define iterator_hpp

#include <cstddef>
#include "type_traits.h"

namespace mysql {

struct input_iterator_tag {};
struct output_iterator_tag {};
struct forward_iterator_tag : public input_iterator_tag {};
struct bidirectional_iterator_tag : public forward_iterator_tag {};
struct random_access_iterator_tag : public bidirectional_iterator_tag {};

template <class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
struct iterator
{
    typedef Category    iterator_category;
    
};
}

#endif /* iterator_hpp */
