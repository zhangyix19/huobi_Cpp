#ifndef TRADE_H
#define TRADE_H

#include<string>
#include "Enums.h"
#include "Decimal.h"

namespace Huobi {

    /**
     * The trade information with price and amount etc.
     */
    struct Trade {
        /**
         * The unique trade id of this trade.
         */
        std::string tradeId;

        /**
         * The UNIX formatted timestamp generated by server in UTC.
         */
        long timestamp;

        /**
         * The trading price in quote currency.
         */
        Decimal price;

        /**
         * The trading volume in base currency.
         */
        Decimal amount;

        /**
         * The direction of the taker trade: 'buy' or 'sell'.
         */
        TradeDirection direction;

        /**
         * The unique trade id of this trade. (new)
         */
        std::string uniqueTradeId;

    };
}
#endif /* TRADE_H */

