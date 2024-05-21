// Soepangat, Faris
// fxs4988
// 2024-02-13
//----------------------------------------------------------------
#include <stdio.h>

#include "matrix.h"

//----------------------------------------------------------------
const Matrix I4 = {
    { 1, 0, 0, 0 },
    { 0, 1, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 0, 1 } };

const Matrix Z4 = {
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 } };

//----------------------------------------------------------------
void matrixPlusMatrix( const Matrix a, const Matrix b, Matrix c )
{
  FLOAT64 *ap = (FLOAT64 *) a;
  FLOAT64 *bp = (FLOAT64 *) b;
  FLOAT64 *cp = (FLOAT64 *) c;

  for ( int i = 0; i < 16; i++ ) {
    *cp++ = *ap++ + *bp++;
  }
}

//----------------------------------------------------------------
void copyMatrix( const Matrix a, Matrix b )
{
  FLOAT64 *ap = (FLOAT64 *) a;
  FLOAT64 *bp = (FLOAT64 *) b;

  for ( int i = 0; i < 16; i++ ) {
    *bp++ = *ap++;
  }
}

//----------------------------------------------------------------
void matrixMultMatrix( const Matrix a, const Matrix b, Matrix c )
{
  for ( int row = 0; row < 4; row++ ) {
    for ( int col = 0; col < 4; col++ ) {
      c[row][col] =
        a[row][0] * b[0][col] +
        a[row][1] * b[1][col] +
        a[row][2] * b[2][col] +
        a[row][3] * b[3][col];
    }
  }
}

//----------------------------------------------------------------
void matrixMultPoint( const Matrix a, const Point b, Point c )
{
  for ( int row = 0; row < 4; row++ ) {
    c[row] =
      a[row][0] * b[0] +
      a[row][1] * b[1] +
      a[row][2] * b[2] +
      a[row][3] * b[3];
  }
}

//----------------------------------------------------------------
void scalarMultMatrix( FLOAT64 s, const Matrix a, Matrix b )
{
  FLOAT64 *ap = (FLOAT64 *) a;
  FLOAT64 *bp = (FLOAT64 *) b;

  for ( int i = 0; i < 16; i++ ) {
    *bp++ = s * *ap++;
  }
}

//----------------------------------------------------------------
void scalarMultPoint( FLOAT64 s, const Point a, Point b )
{
  b[0] = s * a[0];
  b[1] = s * a[1];
  b[2] = s * a[2];
  b[3] = s * a[3];
}

//----------------------------------------------------------------
void vectorCrossVector( const Vector a, const Vector b, Vector c )
{
  // TODO: Compute each of c[0] through c[2] using the a[0]
  //        through a[2] and b[0] through b[2] values.  c[3]
  //        should always be set to 0.0 (for reasons we'll
  //        discuss in class).
  //       Remember that the X, Y, Z elements of a vector are
  //        its v[0], v[1], and v[2] elements respectively.
}

//----------------------------------------------------------------
void dumpMatrix( const Matrix m ) { fdumpfMatrix( stdout, m, ELEMENT_DEFAULT_FORMAT ); }
void dumpfMatrix( const Matrix m, const char *fmt ) { fdumpfMatrix( stdout, m, fmt ); }
void fdumpMatrix( FILE *fp, const Matrix m ) { fdumpfMatrix( fp, m, ELEMENT_DEFAULT_FORMAT ); }

void fdumpfMatrix( FILE *fp, const Matrix m, const char *fmt )
{
  for ( int r = 0; r < 4; r++ ) {
    fprintf( fp, fmt, m[r][0] );
    fputc( ' ', fp );
    fprintf( fp, fmt, m[r][1] );
    fputc( ' ', fp );
    fprintf( fp, fmt, m[r][2] );
    fputc( ' ', fp );
    fprintf( fp, fmt, m[r][3] );
    fputc( '\n', fp );
  }
}

//----------------------------------------------------------------
void dumpPoint( const Point p ) { fdumpfPoint( stdout, p, ELEMENT_DEFAULT_FORMAT ); }
void dumpfPoint( const Point p, const char *fmt ) { fdumpfPoint( stdout, p, fmt ); }
void fdumpPoint( FILE *fp, const Point p ) { fdumpfPoint( fp, p, ELEMENT_DEFAULT_FORMAT ); }

void fdumpfPoint( FILE *fp, const Point p, const char *fmt )
{
  fprintf( fp, fmt, p[0] );
  fputc( '\n', fp );
  fprintf( fp, fmt, p[1] );
  fputc( '\n', fp );
  fprintf( fp, fmt, p[2] );
  fputc( '\n', fp );
  fprintf( fp, fmt, p[3] );
  fputc( '\n', fp );
}

//----------------------------------------------------------------
void dumpVector( const Vector v ) { fdumpfVector( stdout, v, ELEMENT_DEFAULT_FORMAT ); }
void dumpfVector( const Vector v, const char *fmt ) { fdumpfVector( stdout, v, fmt ); }
void fdumpVector( FILE *fp, const Vector v ) { fdumpfVector( fp, v, ELEMENT_DEFAULT_FORMAT ); }

void fdumpfVector( FILE *fp, const Vector v, const char *fmt )
{
  fprintf( fp, fmt, v[0] );
  fputc( '\n', fp );
  fprintf( fp, fmt, v[1] );
  fputc( '\n', fp );
  fprintf( fp, fmt, v[2] );
  fputc( '\n', fp );
  fprintf( fp, fmt, v[3] );
  fputc( '\n', fp );
}

//----------------------------------------------------------------
