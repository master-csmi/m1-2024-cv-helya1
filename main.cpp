#include <Eigen/Dense>
#include <iostream>

int main()
{
    Eigen::MatrixXd m(2,2);
    m << 1, 2,
         3, 4;
    std::cout << m << std::endl;
}