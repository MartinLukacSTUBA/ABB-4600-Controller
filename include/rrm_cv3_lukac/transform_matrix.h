#ifndef TRANSFORM_MATRIX_H
#define TRANSFORM_MATRIX_H

#include <eigen3/Eigen/Dense>
#include <cmath>

namespace matrix {
    Eigen::MatrixXd createRz(double angle);
    Eigen::MatrixXd createRy(double angle);
    Eigen::MatrixXd createTz(double l);
}

#endif //TRANSFORM_MATRIX_H
