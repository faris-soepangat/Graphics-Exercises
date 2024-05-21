// Soepangat, Faris
// fxs4988
// 2024-02-01
//----------------------------------------------------------------
#include <math.h>
#include <stdio.h>

#include "transforms.h"

//----------------------------------------------------------------
void eulerRotateMatrix( const Point center, const FLOAT64 phi, const FLOAT64 theta, const FLOAT64 psi, Matrix xform )
{
  //-- Declare some local matrix variables to hold the individual
  //    transforms.

  // TODO : Five lines of code.  (Well, in the reference solution
  //          anyway.  You don't have to use EXACTLY this many
  //          LOC, but think hard if you're "way" off.  (All five
  //          lines were declarations.)

  //-- Create the five required transform matrices ---------------

  // TODO : Five lines of code.  (Five function calls.)

  //-- Multiply the five transform matrices together -- IN THE
  //    CORRECT ORDER -- to get the combined transform matrix.

  // TODO : Six lines of code.  (Two declarations and four
  //        function calls.)
}

//----------------------------------------------------------------
void rotateXMatrix( const FLOAT64 theta, Matrix xform )
{
  copyMatrix( I4, xform );

  FLOAT64 cth = cos( theta );
  FLOAT64 sth = sin( theta );

  xform[1][1] =  cth;
  xform[1][2] = -sth;
  xform[2][1] =  sth;
  xform[2][2] =  cth;
}

void rotateYMatrix( const FLOAT64 theta, Matrix xform )
{
  copyMatrix( I4, xform );

  FLOAT64 cth = cos( theta );
  FLOAT64 sth = sin( theta );

  xform[0][0] =  cth;
  xform[0][2] =  sth;
  xform[2][0] = -sth;
  xform[2][2] =  cth;
}

void rotateZMatrix( const FLOAT64 theta, Matrix xform )
{
  copyMatrix( I4, xform );

  FLOAT64 cth = cos( theta );
  FLOAT64 sth = sin( theta );

  xform[0][0] =  cth;
  xform[0][1] = -sth;
  xform[1][0] =  sth;
  xform[1][1] =  cth;
}

//----------------------------------------------------------------
void scaleMatrix( const FLOAT64 sx, const FLOAT64 sy, const FLOAT64 sz, Matrix xform )
{
  copyMatrix( I4, xform );

  xform[0][0] = sx;
  xform[1][1] = sy;
  xform[2][2] = sz;
}

//----------------------------------------------------------------
void shearXMatrix( const FLOAT64 hxy, const FLOAT64 hxz, Matrix xform )
{
  copyMatrix( I4, xform );

  xform[0][1] = hxy;
  xform[0][2] = hxz;
}

void shearYMatrix( const FLOAT64 hyx, const FLOAT64 hyz, Matrix xform )
{
  copyMatrix( I4, xform );

  xform[1][0] = hyx;
  xform[1][2] = hyz;
}

void shearZMatrix( const FLOAT64 hzx, const FLOAT64 hzy, Matrix xform )
{
  copyMatrix( I4, xform );

  xform[2][0] = hzx;
  xform[2][1] = hzy;
}

void shearMatrix( const FLOAT64 hxy, const FLOAT64 hxz, const FLOAT64 hyx, const FLOAT64 hyz, const FLOAT64 hzx, const FLOAT64 hzy, Matrix xform )
{
  copyMatrix( I4, xform );

  xform[0][1] = hxy;
  xform[0][2] = hxz;
  xform[1][0] = hyx;
  xform[1][2] = hyz;
  xform[2][0] = hzx;
  xform[2][1] = hzy;
}

//----------------------------------------------------------------
void translateMatrix( const FLOAT64 tx, const FLOAT64 ty, const FLOAT64 tz, Matrix xform )
{
  copyMatrix( I4, xform );

  xform[0][3] = tx;
  xform[1][3] = ty;
  xform[2][3] = tz;
}

//----------------------------------------------------------------
