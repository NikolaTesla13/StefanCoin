// Copyright (c) 2021 Asandei Stefan Alexandru
// Distributed under the MIT software license, see the accompanying
// file LICENSE or http://www.opensource.org/licenses/mit-license.php.

#pragma once

namespace StefanCoin {

    /*
        Block
    */
    class Block
    {
    public:
        /*
            prevHash - the hash of the previous block
            transaction - the transaction within the new block
            ts - time of the block creation
        */
        Block(const std::string& prevHash, const Transaction& transaction, const std::chrono::time_point<std::chrono::system_clock> ts = std::chrono::system_clock::now())
        : prevHash(prevHash), transaction(transaction), ts(ts) 
        {
            std::random_device rd; // obtain a random number from hardware
            std::mt19937 gen(rd()); // seed the generator
            std::uniform_int_distribution<> distr(100000000, 999999999); // define the range
            nonce = distr(gen);
        }

        std::string getHash();

    public:
        std::string prevHash;
        Transaction transaction;
        std::chrono::time_point<std::chrono::system_clock> ts;
        uint32_t nonce;
    };
}