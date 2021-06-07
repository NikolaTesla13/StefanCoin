// Copyright (c) 2021 Asandei Stefan Alexandru
// Distributed under the MIT software license, see the accompanying
// file LICENSE or http://www.opensource.org/licenses/mit-license.php.

#pragma once

namespace StefanCoin {

    /*
        Transaction is a data structure used to define coin transfers between two users 
    */
    class Transaction 
    {
    public:
        Transaction(uint32_t amount, const std::string& payer, const std::string& payee) : amount(amount), payer(payer), payee(payee) {}

        std::string toString();

    private:
        uint32_t amount; 
        std::string payer, payee;
    };
}