#include <iostream>
#include <eigen3/Eigen/Eigen>
using namespace Eigen;

float crossV2(Vector2f first,Vector2f second)
{
    float result=first[0]*second[1]-first[1]*second[0];
    return result;
}

static bool insideTriangle(int x, int y, const Vector3f* _v)
{   
    // TODO : Implement this function to check if the point (x, y) is inside the triangle represented by _v[0], _v[1], _v[2]
    Vector2f p(x,y);
    float res0=crossV2(p-_v[0].head<2>(),(_v[2]-_v[0]).head<2>());
    float res1=crossV2(p-_v[2].head<2>(),(_v[1]-_v[2]).head<2>());
    float res2=crossV2(p-_v[1].head<2>(),(_v[0]-_v[1]).head<2>());
    return res0*res1>=0&&res1*res2>=0&&res2*res0>=0;
}

int main()
{
    Vector3f v[3]={Vector3f(0,0,0),Vector3f(5,0,0),Vector3f(0,5,0)};

    if (insideTriangle(3.98,2,v))
    {
        std::cout<<"yes"<<std::endl;
    }
    else   
    {
        std::cout<<"no"<<std::endl;
    }
    
}