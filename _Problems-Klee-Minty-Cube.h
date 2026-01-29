/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: HAlEM - Hybrid Along Edges Movement method
Module: _Problems-Klee-Minty-Cube.h (Problems from the LP-Klee-Minty-Cube Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h

LP problems were obtained using Klee-Minty-Cube-Generator https://github.com/leonid-sokolinsky/Klee-Minty-Cube-Generator
LP problems are available in https://github.com/leonid-sokolinsky/Set-of-LP-Problems/tree/main/Klee-Minty-Cube
================================================================================*/
#pragma once


//============================== Problem Parameters ============================
// PP_LAUNCH_VECTOR_LENGTH - direct dependence on dimension PD_n.
// P_EPS_ZERO - inverse dependence on PP_LAUNCH_VECTOR_LENGTH.
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-9	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+11	// Length of Objective Vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Used if defined PP_CHECK_MAX_OBJ_VALUE 
//-------------------------- Compilation Modes ---------------------------------
#define PP_GRADIENT
//------------------------------------------------------------------------------

/*============================== Klee-Minty5 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty5"
#define PP_D 5			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 3125
//-------------------------- Compilation Modes ---------------------------------
#define PP_MIN_COS 0.1
//------------------------------------------------------------------------------
// Elapsed time: 0      (HAlEM no MPI)
// Number of iterations: 9
// Computed objective value: 3125.00000000000045474735
// Maximal objective value:  3125
// Relative error = 1.46e-16
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty6 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty6"
#define PP_D 6			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 15625
//-------------------------- Compilation Modes ---------------------------------
#define PP_MIN_COS 0.1
//------------------------------------------------------------------------------
// Elapsed time: 0      (HAlEM no MPI)
// Number of iterations: 11
// Computed objective value: 15625
// Maximal objective value:  15625
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty7 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty7"
#define PP_D 7			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 78125
//-------------------------- Compilation Modes ---------------------------------
#define PP_MIN_COS 0.1
//------------------------------------------------------------------------------
// Elapsed time: 0      (HAlEM no MPI)
// Number of iterations: 13
// Computed objective value: 78124.9999999999854480848
// Maximal objective value:  78125
// Relative error = 1.86e-16
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty8 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty8"
#define PP_D 8			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 390625
//-------------------------- Compilation Modes ---------------------------------
#define PP_MIN_COS 0.2
//------------------------------------------------------------------------------
// Elapsed time: 0      (HAlEM no MPI)
// Number of iterations: 15
// Computed objective value: 390625
// Maximal objective value:  390625
// Relative error = 0
// Distance to polytope: 7.6920415e-16
//------------------------------------------------------------------------------

/*============================== Klee-Minty9 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty9"
#define PP_D 9			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 1953125
//-------------------------- Compilation Modes ---------------------------------
#define PP_MIN_COS 0.1
//------------------------------------------------------------------------------
// Elapsed time: 0      (HAlEM no MPI)
// Number of iterations: 17
// Computed objective value: 1953125
// Maximal objective value:  1953125
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty10 LP problem =======================*/
#define PP_PROBLEM_NAME	"Klee-Minty10"
#define PP_D 10			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 9765625
//-------------------------- Compilation Modes ---------------------------------
#define PP_MIN_COS 0.3
//------------------------------------------------------------------------------
// Elapsed time: 0      (HAlEM no MPI)
// Number of iterations: 19
// Computed objective value: 9765625.0000000111758709
// Maximal objective value:  9765625
// Relative error = 1.14e-15
// Distance to polytope: 7.6918627e-15
//------------------------------------------------------------------------------

/*============================== Klee-Minty20 LP problem =======================*
#define PP_PROBLEM_NAME	"Klee-Minty20"
#define PP_D 20			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 95367431640625
//-------------------------- Compilation Modes ---------------------------------
#define PP_MIN_COS 0.4
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 11
// Computed objective value: 7142388017.05349540710449
// Maximal objective value:  95367431640625
// Relative error = 1
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*==============================================================================*/