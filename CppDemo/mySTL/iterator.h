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
    typedef T           value_type;
    typedef Pointer     pointer;
    typedef Reference   reference;
    typedef Distance    difference_type;
};

template <class T>
struct has_iterator_cat
{
private:
    struct two { char a; char b;};
    template <class U> static two test(...);
    template <class U> static char test(typename U::iterator_category* = 0);
public:
    static const bool value = sizeof(test<T>(0)) == sizeof(char);
};

template <class Iterator, bool>
struct iterator_traits_impl {};

template <class Iterator>
struct iterator_traits_impl<Iterator, true>
{
    typedef typename Iterator::iterator_category    iterator_category;
    typedef typename Iterator::value_type           value_type;
    typedef typename Iterator::pointer              pointer;
    typedef typename Iterator::reference            reference;
    typedef typename Iterator::difference_type      difference_type;
};

template <class Iterator, bool>
struct iterator_traits_helper {};

template <class Iterator>
struct iterator_traits_helper<Iterator, true> :
public iterator_traits_impl<Iterator,
std::is_convertible<typename Iterator::iterator_category, input_iterator_tag>::value ||
std::is_convertible<typename Iterator::iterator_category, output_iterator_tag>::value>
{
};

template <class Iterator>
struct iterator_traits : public iterator_traits_helper<Iterator, has_iterator_cat<Iterator>::value> {};


}

#endif /* iterator_hpp */
