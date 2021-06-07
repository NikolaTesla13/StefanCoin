// Copyright (c) 2021 Asandei Stefan Alexandru
// Distributed under the MIT software license, see the accompanying
// file LICENSE or http://www.opensource.org/licenses/mit-license.php.

#include "stefancoin.h"
#include "transaction.h"
#include "block.h"

namespace StefanCoin
{
    std::string Block::getHash()
    {
        std::string block_str = prevHash + " " + transaction.toString() + " " + std::to_string(ts.time_since_epoch().count()) + " " + std::to_string(nonce); 
    }
}