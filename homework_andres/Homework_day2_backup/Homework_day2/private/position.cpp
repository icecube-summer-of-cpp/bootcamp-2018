#include "position.h"
#include <vector>

position::position( double& x , double& y , double& z)
  : x_(x) , y_(y) , z_(z)
{
  pos.push_back(x_);
  pos.push_back(y_);
  pos.push_back(z_);
}

position::~position(){}

double operator* ( position& vector1 , position& vector2 )
{
  double result = 0;
  for( int i = 0 ; i < 3 ; i++){
    result += vector1.pos[i] * vector2.pos[i];
      }
  return result;
    }

std::vector<double> operator+ ( position& vector1 , position& vector2 )
{
  std::vector<double> result;
  double x_component = vector1.pos[0] + vector2.pos[0];
  double y_component = vector1.pos[1] + vector2.pos[1];
  double z_component = vector1.pos[2] + vector2.pos[2];
  result.push_back(x_component);
  result.push_back(y_component);
  result.push_back(z_component);

  return result;
    }
