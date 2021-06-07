// Copyright (c) 2021 Asandei Stefan Alexandru
// Distributed under the MIT software license, see the accompanying
// file LICENSE or http://www.opensource.org/licenses/mit-license.php.

#include <iostream>

#include "stefancoin.h"
#include "transaction.h"
#include "block.h"

using namespace StefanCoin;

int main(int argc, char** argv)
{
    Transaction transaction(500, "User1", "User2");
    Block block("", transaction);

    std::cout << block.transaction.toString() << ' ' << block.nonce << ' ' << block.ts.time_since_epoch().count() << '\n';
    return 0;
}