
/*
 * Copyright (C) 2000-2001 QuantLib Group
 *
 * This file is part of QuantLib.
 * QuantLib is a C++ open source library for financial quantitative
 * analysts and developers --- http://quantlib.org/
 *
 * QuantLib is free software and you are allowed to use, copy, modify, merge,
 * publish, distribute, and/or sell copies of it under the conditions stated
 * in the QuantLib License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the license for more details.
 *
 * You should have received a copy of the license along with this file;
 * if not, please email quantlib-users@lists.sourceforge.net
 * The license is also available at http://quantlib.org/LICENSE.TXT
 *
 * The members of the QuantLib Group are listed in the Authors.txt file, also
 * available at http://quantlib.org/group.html
*/

/*! \file everestoption.hpp
    \brief Everest-type option pricer

    \fullpath
    ql/Pricers/%everestoption.hpp
*/

// $Id$

#ifndef quantlib_pricers_everest_option_h
#define quantlib_pricers_everest_option_h

#include "ql/MonteCarlo/multifactorpricer.hpp"

namespace QuantLib {

    namespace Pricers {

        //! Everest-type option pricer
        /*! The payoff of an Everest option is simply given by the
            final price / initial price ratio of the worst performer
        */
        class EverestOption : public MultiFactorPricer {
          public:
            EverestOption(const Array& dividendYield,
                          const Math::Matrix& covariance,
                          Rate riskFreeRate,
                          Time residualTime,
                          unsigned int samples,
                          bool antitheticVariance,
                          long seed = 0);
        };

    }

}


#endif
