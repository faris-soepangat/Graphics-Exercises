// Soepangat, Faris
// fxs4988
// 2024-02-01
//----------------------------------------------------------------
#include <math.h>
#include <stdio.h>

#include "transforms.h"

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
  // TODO : Compute the Y rotation matrix from theta, putting the
  //          result into xform.
}

void rotateZMatrix( const FLOAT64 theta, Matrix xform )
{
  // TODO : Compute the Z rotation matrix from theta, putting the
  //          result into xform.
}

//----------------------------------------------------------------
void scaleMatrix( const FLOAT64 sx, const FLOAT64 sy, const FLOAT64 sz, Matrix xform )
{
  // TODO : Construct the scaling matrix from sx, sy, and sz,
  //          putting the result into xform.
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
  // TODO : Construct the Y shearing matrix from hyz and hyz,
  //          putting the result into xform.
}

void shearZMatrix( const FLOAT64 hzx, const FLOAT64 hzy, Matrix xform )
{
  // TODO : Construct the Z shearing matrix from hzx and hzy,
  //          putting the result into xform.
}

void shearMatrix( const FLOAT64 hxy, const FLOAT64 hxz, const FLOAT64 hyx, const FLOAT64 hyz, const FLOAT64 hzx, const FLOAT64 hzy, Matrix xform )
{
  // TODO : Construct the complete shearing matrix from hxy, hxz,
  //          hyx, hyz, hzx, and hzy, putting the result into
  //          xform.
}

//----------------------------------------------------------------
void translateMatrix( const FLOAT64 tx, const FLOAT64 ty, const FLOAT64 tz, Matrix xform )
{
  // TODO : Construct the translation matrix from tx, ty, and tz,
  //          putting the result into xform.
}

//----------------------------------------------------------------
