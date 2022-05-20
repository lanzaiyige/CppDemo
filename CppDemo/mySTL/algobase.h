//
//  algobase.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/5/20.
//

#ifndef algobase_hpp
#define algobase_hpp

#include <stdio.h>
#include "iterator.h"
#include "util.h"

namespace mystl {
#ifdef max
#pragma message("#undefing marco max")
#undef max
#endif // max

#ifdef min
#pragma message("#undefing marco min")
#undef min
#endif // min

template <class T>
const T& max(const T& lhs, const T& rhs)
{
    return lhs > rhs ? lhs : rhs;
}

template <class T, class Compare>
const T& max(const T& lhs, const T& rhs, Compare comp)
{
    return comp(lhs, rhs) ? rhs : lhs;
}

template <class T>
const T& min(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}

template <class T, class Compare>
const T& min(const T& lhs, const T& rhs, Compare comp)
{
    return comp(lhs, rhs) ? rhs : lhs;
}

template <class Iter1, class Iter2>
void iter_swap(Iter1 lhs, Iter2 rhs)
{
    mystl::swap(lhs, rhs);
}

template <class InputIter, class OutputIter>
OutputIter unchecked_copy_cat(InputIter first, InputIter last, OutputIter result, mystl::input_iterator_tag)
{
    for (; first != last; ++first, ++result) {
        *result = *first;
    }
    return result;
}

template <class InputIter, class OutputIter>
OutputIter unchecked_copy(InputIter first, InputIter last, OutputIter result)
{
    return unchecked_copy_cat(first, last, result, iterator_category(first));
}

// 为 trivially_copy_assignable 类型提供特化版本
template <class T, class U>
typename std::enable_if<is_same<typename remove_const<T>::type, U>::value &&
is_trivially_copy_assignable<U>::value, U*>::type
unchecked_copy(T* first, T* last, U* result)
{
    const auto n = static_cast<size_t>(last - first);
    if (n != 0) {
        memmove(result, first, n * sizeof(U));
    }
    return result + n;
}

template <class InputIter, class OutputIter>
OutputIter copy(InputIter first, InputIter last, OutputIter result)
{
    return unchecked_copy(first, last, result);
}



}

#endif /* algobase_hpp */
