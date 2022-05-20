//
//  util.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/5/17.
//

#ifndef util_hpp
#define util_hpp

#include <stdio.h>
#include <cstddef>
#include "type_traits.h"

using namespace std;

namespace mystl
{

template <class T>
typename remove_reference<T>::type &&move(T&& arg) noexcept
{
    return static_cast<typename remove_reference<T>::type &&>(arg);
}

template <class Iter1, class Iter2>
void swap(Iter1& lhs, Iter2& rhs)
{
    auto tmp(mystl::move(lhs));
    lhs = mystl::move(rhs);
    rhs = mystl::move(tmp);
}

}

#endif /* util_hpp */
