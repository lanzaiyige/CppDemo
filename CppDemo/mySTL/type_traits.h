//
//  type_traits.h
//  CppDemo
//
//  Created by tanzhikang on 2022/5/9.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef type_traits_h
#define type_traits_h

#include <type_traits>
#include <iterator>

namespace mystl {
template <typename T, T v>
struct m_integral_constant {
    static constexpr T value = v;
};

template <bool b>
using m_bool_constant = m_integral_constant<bool, b>;

typedef m_bool_constant<true> m_true_type;
typedef m_bool_constant<false> m_false_type;

template <class T1, class T2>
struct pair;

template <class T>
struct is_pair : mystl::m_false_type { };

template <class T1, class T2>
struct is_pair<mystl::pair<T1, T2>> : mystl::m_true_type { };
}

#endif /* type_traits_h */
