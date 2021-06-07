// Copyright (c) 2021 Asandei Stefan Alexandru
// Distributed under the MIT software license, see the accompanying
// file LICENSE or http://www.opensource.org/licenses/mit-license.php.

#include "stefancoin.h"
#include "transaction.h"

namespace StefanCoin
{
    std::string Transaction::toString()
    {
        return std::to_string(amount) + " " + payer + " " + payee; //TODO improve using std::format once we move to C++20
    }
}