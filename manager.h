//+------------------------------------------------------------------+
//|                  EA31337 - multi-strategy advanced trading robot |
//|                                 Copyright 2016-2023, EA31337 Ltd |
//|                                       https://github.com/EA31337 |
//+------------------------------------------------------------------+

/*
 *  This file is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// Prevents processing this includes file multiple times.
#ifndef STRATEGIES_MANAGER_H
#define STRATEGIES_MANAGER_H

class StrategiesManager {
 protected:
  DictStruct<long, Ref<Strategy>> strats;

 public:
  /**
   * Initialize strategy with the specific timeframe.
   *
   * @param
   *   _tf - timeframe to initialize
   *
   * @return
   *   Returns strategy pointer on successful initialization, otherwise NULL.
   */
  template <typename SClass>
  static Strategy* StrategyInit(ENUM_TIMEFRAMES _tf) {
    return ((SClass*)NULL).Init(_tf);
  }
};

#endif  // STRATEGIES_MANAGER_H
