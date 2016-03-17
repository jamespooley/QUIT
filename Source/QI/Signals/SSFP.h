/*
 *  SSFP.h
 *
 *  Copyright (c) 2016 Tobias Wood.
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef SIGNALS_SSFP_H
#define SIGNALS_SSFP_H

#include "QI/Signals/Common.h"

namespace QI {

Eigen::VectorXcd One_SSFP(carrd &flip, carrd &phi, cdbl TR, cdbl PD, cdbl T1, cdbl T2, cdbl f0, cdbl B1);
Eigen::VectorXcd One_SSFP_Echo(carrd &flip, carrd &phi, cdbl TR, cdbl PD, cdbl T1, cdbl T2, cdbl f0, cdbl B1);
Eigen::VectorXd  One_SSFP_Echo_Magnitude(carrd &flip, carrd &phi, cdbl TR, cdbl PD, cdbl T1, cdbl T2, cdbl f0, cdbl B1);
Eigen::VectorXcd One_SSFP_Finite(carrd &flip, const bool spoil, cdbl TR, cdbl Trf, cdbl TE, cdbl ph,
                                 cdbl PD, cdbl T1, cdbl T2, cdbl f0, cdbl B1);
Eigen::VectorXcd One_SSFP_GS(carrd &flip, cdbl TR, cdbl PD, cdbl T1, cdbl T2, cdbl f0, cdbl B1);

Eigen::MatrixXd One_SSFP_Echo_Derivs(carrd &flip, carrd &phi, cdbl TR, cdbl M0, cdbl T1, cdbl T2, cdbl f0, cdbl B1);

Eigen::VectorXcd Two_SSFP(carrd &flip, carrd &phi, cdbl TR, cdbl PD, cdbl T1_a, cdbl T2_a, cdbl T1_b, cdbl T2_b, cdbl tau_a, cdbl f_a, cdbl f0_a, cdbl f0_b, cdbl B1);
Eigen::VectorXcd Two_SSFP_Echo(carrd &flip, carrd &phi, cdbl TR, cdbl PD, cdbl T1_a, cdbl T2_a, cdbl T1_b, cdbl T2_b, cdbl tau_a, cdbl f_a, cdbl f0_a, cdbl f0_b, cdbl B1);
Eigen::VectorXcd Two_SSFP_Finite(carrd &flip, const bool spoil, cdbl TR, cdbl Trf, cdbl TE, cdbl ph,
                                 cdbl PD, cdbl T1_a, cdbl T2_a, cdbl T1_b, cdbl T2_b,
                                 cdbl tau_a, cdbl f_a, cdbl f0_a, cdbl f0_b, cdbl B1);

Eigen::VectorXcd Three_SSFP(carrd &flip, carrd &phi, cdbl TR, cdbl PD, cdbl T1_a, cdbl T2_a, cdbl T1_b, cdbl T2_b, cdbl T1_c, cdbl T2_c, cdbl tau_a, cdbl f_a, cdbl f_c, cdbl f0_a, cdbl f0_b, cdbl f0_c, cdbl B1);
Eigen::VectorXcd Three_SSFP_Echo(carrd &flip, carrd &phi, cdbl TR, cdbl PD, cdbl T1_a, cdbl T2_a, cdbl T1_b, cdbl T2_b, cdbl T1_c, cdbl T2_c, cdbl tau_a, cdbl f_a, cdbl f_c, cdbl f0_a, cdbl f0_b, cdbl f0_c, cdbl B1);
Eigen::VectorXcd Three_SSFP_Finite(carrd &flip, const bool spoil, cdbl TR, cdbl Trf, cdbl TE, cdbl ph,
                                   cdbl PD, cdbl T1_a, cdbl T2_a, cdbl T1_b, cdbl T2_b, cdbl T1_c, cdbl T2_c,
                                   cdbl tau_a, cdbl f_a, cdbl f_c,
                                   cdbl f0_a, cdbl f0_b, cdbl f0_c, cdbl B1);

} // End namespace QI

#endif // SIGNALS_SSFP_H
