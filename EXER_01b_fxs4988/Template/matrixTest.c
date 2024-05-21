// Soepangat, Faris
// fxs4988
// 2024-02-13
//----------------------------------------------------------------
#include <stdio.h>

#include "matrix.h"

//----------------------------------------------------------------
int main()
{
  Point p = { 2, 7, 1, 8 };
  Point pTmp;

  Matrix m = {
    {  3,  1,  4,  1 },
    {  5,  9,  2,  6 },
    {  5,  3,  5,  8 },
    {  9,  7,  9,  3 } };
  Matrix mTmp;

  printf( "//-----------------------------------------------------------------\n" );
  printf( "//-- p ----------\n" );
  dumpPoint( p );

  scalarMultPoint( 3, p, pTmp );
  printf( "\n//-- 3 · p ------\n" );
  dumpPoint( pTmp );

  printf( "\n//-- Z4 ---------\n" );
  dumpMatrix( Z4 );

  printf( "\n//-- I4 ---------\n" );
  dumpMatrix( I4 );

  printf( "\n//-- m ----------\n" );
  dumpMatrix( m );

  printf( "\n//-----------------------------------------------------------------\n" );
  matrixMultPoint( I4, p, pTmp );
  printf( "//-- I4 · p -----\n" );
  dumpPoint( pTmp );

  matrixMultPoint( m, p, pTmp );
  printf( "\n//-- m · p ------\n" );
  dumpPoint( pTmp );

  printf( "\n//-----------------------------------------------------------------\n" );
  matrixPlusMatrix( m, m, mTmp );
  printf( "//-- m + m ------\n" );
  dumpMatrix( mTmp );

  scalarMultMatrix( 3, m, mTmp );
  printf( "\n//-- 3 · m ------\n" );
  dumpMatrix( mTmp );

  matrixMultMatrix( I4, m, mTmp );
  printf( "\n//-- I4 · m -----\n" );
  dumpMatrix( mTmp );

  matrixMultMatrix( m, I4, mTmp );
  printf( "\n//-- m · I4 -----\n" );
  dumpMatrix( mTmp );

  matrixMultMatrix( m, m, mTmp );
  printf( "\n//-- m · m ------\n" );
  dumpMatrix( mTmp );

  printf( "\n//-----------------------------------------------------------------\n" );
  Vector i = { 1, 0, 0, 0 };
  Vector j = { 0, 1, 0, 0 };
  Vector k = { 0, 0, 1, 0 };
  Vector *sbv[] = { &i, &j, &k };
  Vector vTmp;

  char *sbvName = "ijk";

  for ( int left=0; left < 3; left++ ) {
    for ( int right=0; right < 3; right++ ) {
      vectorCrossVector( *sbv[left], *sbv[right], vTmp );
      printf( "//-- %c × %c ------\n", sbvName[left], sbvName[right] );
      dumpVector( vTmp );
      printf( "\n" );
    }
  }

  printf( "//-----------------------------------------------------------------\n" );

  return 0;
}

//----------------------------------------------------------------
