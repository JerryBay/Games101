#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>
using namespace std;
using namespace Eigen;



int main()
{
    Eigen::Vector3f column1(1.0f,2.0f,3.0f);
    Eigen::Vector3f column2(1.0f,2.0f,3.0f);
    Eigen::Vector3f column3(1.0f,2.0f,3.0f);

    Eigen::Matrix3f transition;
    transition<<column1,column2,column3;
    Eigen::Vector3f color;

    color<<3.0f,1.0f,-1.0f;
    //Eigen::Vector3f result=transition.;

    Vector3f res=color.cwiseProduct(color);

    std::cout<<color.norm()<<std::endl;

    //std::cout<<color.value();
}