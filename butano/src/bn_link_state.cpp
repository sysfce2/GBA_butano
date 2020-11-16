/*
 * Copyright (c) 2020 Gustavo Valiente gustavo.valiente@protonmail.com
 * zlib License, see LICENSE file.
 */

#include "bn_link_state.h"

#include "bn_optional.h"
#include "bn_link_manager.h"

namespace bn
{

optional<link_state> link_state::get(int data_to_send)
{
    BN_ASSERT(data_to_send > 0 && data_to_send < 0xFFFF, "Invalid data to send: ", data_to_send);

    optional<link_state> result = link_state();
    link_state& result_value = result.value();

    if(! link_manager::tick(data_to_send, result_value._current_player_id, result_value._other_players))
    {
        result.reset();
    }

    return result;
}

}
