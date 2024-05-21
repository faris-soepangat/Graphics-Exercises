// Soepangat, Faris
// fxs4988
// 2024-02-13
//----------------------------------------------------------------
#if !defined( __MATRIX_H__ )
#define __MATRIX_H__

//----------------------------------------------------------------
#include <stdio.h>

#include "primitiveTypes.h"

//----------------------------------------------------------------
typedef FLOAT64 Matrix[4][4];

typedef FLOAT64 Point[4];
typedef FLOAT64 Vector[4];

//----------------------------------------------------------------
extern const Matrix I4;
extern const Matrix Z4;

//----------------------------------------------------------------
extern void matrixPlusMatrix( const Matrix a, const Matrix b, Matrix c );
extern void copyMatrix( const Matrix a, Matrix b );
extern void matrixMultMatrix( const Matrix a, const Matrix b, Matrix c );
extern void matrixMultPoint( const Matrix a, const Point b, Point c );
extern void scalarMultMatrix( const FLOAT64 s, const Matrix a, Matrix b );
extern void scalarMultPoint( const FLOAT64 s, const Point a, Point b );

extern void vectorCrossVector( const Vector a, const Vector b, Vector c );

//----------------------------------------------------------------
#if defined( FLOAT64_IS_DOUBLE )
#define ELEMENT_DEFAULT_FORMAT ("%16g")

#elif defined( FLOAT64_IS_LONG_DOUBLE )
#define ELEMENT_DEFAULT_FORMAT ("%16Lg")

#endif

extern void dumpMatrix( const Matrix m );
extern void dumpfMatrix( const Matrix m, const char *fmt );
extern void fdumpMatrix( FILE *fp, const Matrix m );
extern void fdumpfMatrix( FILE *fp, const Matrix m, const char *fmt );

extern void dumpPoint( const Point p );
extern void dumpfPoint( const Point p, const char *fmt );
extern void fdumpPoint( FILE *fp, const Point p );
extern void fdumpfPoint( FILE *fp, const Point p, const char *fmt );

extern void dumpVector( const Vector v );
extern void dumpfVector( const Vector v, const char *fmt );
extern void fdumpVector( FILE *fp, const Vector v );
extern void fdumpfVector( FILE *fp, const Vector v, const char *fmt );

//----------------------------------------------------------------
#endif
