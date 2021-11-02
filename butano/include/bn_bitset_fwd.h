/*
 * Copyright (c) 2020-2021 Gustavo Valiente gustavo.valiente@protonmail.com
 * zlib License, see LICENSE file.
 */

#ifndef BN_BITSET_FWD_H
#define BN_BITSET_FWD_H

/**
 * @file
 * bn::bitset declaration header file.
 *
 * @ingroup bitset
 */

#include "bn_common.h"

namespace bn
{
    class ibitset;

    /**
     * @brief bitset implementation which manages its own elements array.
     *
     * @tparam Size Number of stored bits. It must be a multiple of 8.
     *
     * @ingroup bitset
     */
    template<int Size>
    class bitset;

    class bitset_ref;
}

#endif
