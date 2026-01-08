/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: HAlEM - Hybrid Along Edges Movement method
Module: _Problems-NetLib-LP.h (Problems from the NETLIB LP Test Problem Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h

LP problems are available in https://github.com/leonid-sokolinsky/Set-of-LP-Problems/tree/main/NetLib-LP
================================================================================*/
#pragma once

#define PP_MPS_FORMAT

//========================== Compilation Modes =================================
#define PP_GRADIENT
#define PP_NORMALIZATION
//==============================================================================

/*============================== adlittle LP problem ===========================*
// Number of equations: 15
// Subspace dimension: 82
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 56	// Number of constraints in mps-file
#define PP_N 97	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 		-225494.96316238038228101176621492
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-10	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+13	// Length of Objective Vector
#define PP_MIN_COS				0.15	// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-9	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR				1E+3		// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//------------------------------------------------------------------------------
// Elapsed time: 2.1870543      (HAlEM)
// Number of iterations: 67
// Computed objective value: -225494.963162380357971415
// Maximal objective value:  -225494.963162380387075245
// Relative error = 1.29e-16
// Distance to polytope: 1.7349601e-14
//------------------------------------------------------------------------------

/*============================== afiro LP problem ==============================*
// Number of equations : 8
// Subspace dimension : 24
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27			// Number of constraints in mps-file
#define PP_N 32			// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 464.75314285714285714285714285714
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-8	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+8	// Length of Objective Vector
#define PP_MIN_COS				0.05	// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR					1E+6		// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//------------------------------------------------------------------------------
// Elapsed time: 0      (HAlEM no MPI)
// Number of iterations: 6
// Computed objective value: 464.753142857142847788054
// Maximal objective value:  464.753142857142847788054
// Relative error = 0
// Distance to polytope: 2.6110149e-14
//------------------------------------------------------------------------------

/*============================== agg LP problem ================================*
// Number of equations : 36
// Subspace dimension : 127
#define PP_PROBLEM_NAME		"agg"
#define PP_M 488	// Number of constraints in mps-file
#define PP_N 163	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 		35991767.286576506712640824319636
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-7	// Accuracy for comparison with zero
#define PP_EPS_INVERSE			1E-10	// Accuracy for comparison with zero when calculating inverse matrix
#define PP_EPS_ON_HYPERPLANE	1E-7	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+10	// Length of Objective Vector
#define PP_MIN_COS				0.2		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+1	// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- Compilation Modes ---------------------------------
#define PP_RND_SEED 0
//------------------------------------------------------------------------------
// Elapsed time: 6.4863581      (HAlEM)
// Number of iterations: 29
// Computed objective value: 35991767.2865764871239662
// Maximal objective value:  35991767.286576509475708
// Relative error = 6.21e-16
// Distance to polytope: 1.2445839e-11
//------------------------------------------------------------------------------

/*============================== agg2 LP problem ===============================*
// Number of equations : 60
// Subspace dimension : 242
#define PP_PROBLEM_NAME		"agg2"
#define PP_M 516	// Number of constraints in mps-file
#define PP_N 302	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 		20239252.355977109024317661926133
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-5	// Accuracy for comparison with zero
#define PP_EPS_INVERSE			1E-10	// Accuracy for comparison with zero when calculating inverse matrix
#define PP_EPS_ON_HYPERPLANE	1E-5	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+9	// Length of Objective Vector
#define PP_MIN_COS				0.3		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-9	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+1	// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- Compilation Modes ---------------------------------
#define PP_RND_SEED 6 // Number of iterations: 106
//#define PP_LOAD_BASIS
//------------------------- lp_agg_v2 - VeRSAl.mtx -----------------------------
// Elapsed time: 275.78599      (HAlEM)
// Number of iterations: 81
// Computed objective value: 20239252.3559770993888378
// Maximal objective value:  20239252.3559771105647087
// Relative error = 5.52e-16
// Distance to polytope: 2.636752e-09
//------------------------------------------------------------------------------

/*============================== beaconfd LP problem ===========================*
// Number of equations: 140
// Subspace dimension: 122
#define PP_PROBLEM_NAME		"beaconfd"
#define PP_M 173	// Number of constraints in mps-file
#define PP_N 262	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE -33592.4858072
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-10	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+9	// Length of Objective Vector
#define PP_MIN_COS				0.05		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR					1E+3					// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- Compilation Modes ---------------------------------
//#define PP_RND_SEED 0
//------------------------- beaconfd - VeRSAl.mtx ------------------------------
// Elapsed time: 15.639501      (HAlEM)
// Number of iterations: 15
// Computed objective value: -33592.4858071999988169409
// Maximal objective value:  -33592.4858071999988169409
// Relative error = 0
// Distance to polytope: 2.1473149e-13
//------------------------------------------------------------------------------

/*============================== blend LP problem ==============================*
// Number of equations: 43
// Subspace dimension: 40
#define PP_PROBLEM_NAME		"blend"
#define PP_M 74			// Number of constraints in mps-file
#define PP_N 83			// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 30.812149845828220173774356124984	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-7	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-7	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+8	// Length of Objective Vector
#define PP_MIN_COS				0.15	// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+7	// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- Compilation Modes ---------------------------------
#define PP_RND_SEED 6 // Number of iterations: 106
//#define PP_LOAD_BASIS
//-------------------------- lp_blend_v - zero.mtx -----------------------------
// Elapsed time: 0.4759057      (HAlEM)
// Number of iterations: 35
// Computed objective value: 30.8121498458282303545275
// Maximal objective value:  30.8121498458282196963864
// Relative error = 3.46e-16
// Distance to polytope: 3.1299693e-15
//------------------------------------------------------------------------------

/*============================== e226 LP problem ===============================*
// Number of equations: 33
// Subspace dimension: 249
#define PP_PROBLEM_NAME		"e226"
#define PP_M 223	// Number of constraints in mps-file
#define PP_N 282	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 18.751929066370549102605687681285
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-6	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-5	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+6	// Length of Objective Vector
#define PP_MIN_COS				0.8		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+7	// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_e226_v - VeRSAl.mtx ----------------------------
// Simplex Number of iterations: 246
//------------------------------------------------------------------------------

/*============================== fit1d LP problem ==============================*
// Number of equations : 1
// Subspace dimension : 1025
#define PP_PROBLEM_NAME		"fit1d"
#define PP_M 24		// Number of constraints 
#define PP_N 1026	// Number of variables
#define PP_MAX_OBJ_VALUE 9146.3780924209269467749025024617	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE		1E-4	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+3	// Length of Objective Vector
#define PP_EPS_RELATIVE_ERROR		1E-8		 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR					1E+5					// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//------------------------------------------------------------------------------
// Simplex cycling
//------------------------------------------------------------------------------

/*============================== grow7 LP problem ============================*
// Number of equations: 140
// Subspace dimension: 161
#define PP_PROBLEM_NAME		"grow7"
#define PP_M 140	// Number of equations (after conversion to standard form)
#define PP_N 301	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 47787811.814711502616766956242865	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-7	// Accuracy for comparison with zero
#define PP_EPS_INVERSE			1E-10	// Accuracy for comparison with zero when calculating inverse matrix
#define PP_EPS_ON_HYPERPLANE	1E-4	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+7	// Length of Objective Vector
#define PP_MIN_COS				0.8	// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8				 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+1					// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_grow7_v - zero.mtx -----------------------------
// Simplex cycling
//------------------------------------------------------------------------------

/*============================== grow15 LP problem =============================*
// Number of equations: 300
// Subspace dimension: 345
#define PP_PROBLEM_NAME		"grow15"
#define PP_M 300	// Number of equations (after conversion to standard form)
#define PP_N 645	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 106870941.29357533671604040930313	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO						1E-8	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE			1E-4	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH		1E+7	// Length of Objective Vector
#define PP_EPS_RELATIVE_ERROR			1E-11				 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR					1			// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_grow15_v - zero.mtx -----------------------------
// Simplex cycling
//------------------------------------------------------------------------------

/*============================== israel LP problem =============================*
// Number of equations: 0
#define PP_PROBLEM_NAME		"israel"
#define PP_M 174	// Number of constraints in mps-file
#define PP_N 142	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 896644.82186304572966200464196045	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				3E-7	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-10	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+9	// Length of Objective Vector
#define PP_MIN_COS				0.2		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+3					// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_israel_v - VeRSAl.mtx --------------------------
// Elapsed time: 28.861719      (HAlEM)
// Number of iterations: 177
// Computed objective value: 896644.821863041841425002
// Maximal objective value:  896644.821863045683130622
// Relative error = 4.28e-15
// Distance to polytope: 5.2437781e-12
//------------------------------------------------------------------------------

/*============================== kb2 LP problem ================================*
// Number of equations: 16
// Subspace dimension: 25
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (after conversion to standard form)
#define PP_N 41	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 1749.9001299062057129526866493726
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-7	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-6	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+11	// Length of Objective Vector
#define PP_MIN_COS				0.01	// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR				1E+5					// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- Compilation Modes ---------------------------------
//#define PP_LOAD_BASIS
//-------------------------- lp_kb2_v - zero.mtx -------------------------------
// Elapsed time: 0      (HAlEM no MPI)
// Number of iterations: 21
// Computed objective value: 1749.90012990620562050026
// Maximal objective value:  1749.90012990620562050026
// Relative error = 0
// Distance to polytope: 1.3648519e-14
//------------------------------------------------------------------------------

/*============================== lotfi LP problem ==============================*
// Number of equations: 95
// Subspace dimension: 213
#define PP_PROBLEM_NAME		"lotfi"
#define PP_M 153	// Number of equations (after conversion to standard form)
#define PP_N 308	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 25.26470606188
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-7	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-9	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+6	// Length of Objective Vector
#define PP_MIN_COS				0.8		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+7				// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_lotfi_v -  VeRSAl ------------------------------
// Simplex cycling!
//------------------------------------------------------------------------------

/*============================== recipe LP problem =============================*
// Number of equations: 67
// Subspace dimension: 92 
#define PP_PROBLEM_NAME		"recipe"
#define PP_M 91	// Number of constraints in mps-file
#define PP_N 180	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 266.616 // Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-10	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+6	// Length of Objective Vector
#define PP_MIN_COS				0.15	// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//-------------------------- p_recipe_v - VeRSAl.mtx ---------------------------
// Elapsed time: 3.2350127      (HAlEM)
// Number of iterations: 12
// Computed objective value: 266.616000000000269665179
// Maximal objective value:  266.615999999999985448085
// Relative error = 1.07e-15
// Distance to polytope: 1.0255801e-15
//------------------------------------------------------------------------------

/*============================== sc105 LP problem ==============================*
// Number of equations: 45
// Subspace dimension: 58
#define PP_PROBLEM_NAME		"sc105"
#define PP_M 104	// Number of constraints in mps-file
#define PP_N 103	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 52.202061211707248062628010857689 // Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE		1E-10	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH		1E+6	// Length of Objective Vector
#define PP_MIN_COS					0.03		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR		1E-8	// Termination criteria 
//-------------------------- lp_sc105_v - zero.mtx -----------------------------
// Elapsed time: 0.3065865      (HAlEM)
// Number of iterations: 13
// Computed objective value: 52.2020612117072460023337
// Maximal objective value:  52.2020612117072460023337
// Relative error = 0
// Distance to polytope: 8.0388734e-14
//------------------------------------------------------------------------------

/*============================== sc50a LP problem ==============================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50a"
#define PP_M 49	// Number of constraints
#define PP_N 48	// Number of variables
#define PP_MAX_OBJ_VALUE 64.575077058564509026860413914575	// Exact maximum value of objective function
//-------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-10	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+6	// Length of Objective Vector
#define PP_MIN_COS				0.1		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR				1E+7					// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_sc50a_v - zero.mtx -----------------------------
// Elapsed time: 1      (HAlEM no MPI)
// Number of iterations: 7
// Computed objective value: 64.5750770585645028631916
// Maximal objective value:  64.5750770585645028631916
// Relative error = 0
// Distance to polytope: 3.2818563e-14
//------------------------------------------------------------------------------

/*============================== sc50b LP problem ============================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50b"
#define PP_M 48	// Number of constraints
#define PP_N 48	// Number of variables
#define PP_MAX_OBJ_VALUE 70	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-10	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+8	// Length of Objective Vector
#define PP_MIN_COS				0.15		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+7	// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_sc50b_v - zero.mtx -----------------------------
// Elapsed time: 0      (HAlEM no MPI)
// Number of iterations: 5
// Computed objective value: 70
// Maximal objective value:  70
// Relative error = 0
// Distance to polytope: 7.3114244e-14
//------------------------------------------------------------------------------

/*============================== scagr7 LP problem =============================*
// Number of equations: 84
// Subspace dimension : 56
#define PP_PROBLEM_NAME	"scagr7"
#define PP_M 129		// Number of constraints in mps-file
#define PP_N 140		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 2331389.824330984	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-10	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+8	// Length of Objective Vector
#define PP_MIN_COS				0.2		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+2	// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_scagr7_v - zero.mtx ----------------------------
// Elapsed time: 1.9031987      (HAlEM)
// Number of iterations: 30
// Computed objective value: 2331389.8243309841491282
// Maximal objective value:  2331389.8243309841491282
// Relative error = 0
// Distance to polytope: 2.0711665e-12
//------------------------------------------------------------------------------

/*============================== share2b LP problem ============================*
// Number of equations: 13
// Subspace dimension: 66
#define PP_PROBLEM_NAME		"share2b"
#define PP_M 96		// Number of constraints in *.mps
#define PP_N 79	// Number of variables in *.mps
#define PP_MAX_OBJ_VALUE 415.732240741419486545199108738 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-9	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-9	// Accuracy of belonging to hyperplane
#define PP_LAUNCH_VECTOR_LENGTH	1E+11	// Length of Objective Vector
#define PP_MIN_COS				0.2		// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Acceptable error for optimum of objective function
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+6	// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_share2b_v - VeRSAl.mtx -------------------------
// Elapsed time: 0.4858608      (HAlEM)
// Number of iterations: 27
// Computed objective value: 415.732240741419502683129
// Maximal objective value:  415.732240741419502683129
// Relative error = 0
// Distance to polytope: 1.0150724e-12
//------------------------------------------------------------------------------

/*============================== stocfor1 LP problem ============================*/
// Number of equations: 63
// Subspace dimension: 48
#define PP_PROBLEM_NAME		"stocfor1"	
#define PP_M 117	// Number of constraints in mps-file
#define PP_N 111	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 41131.976219436406065682760731514 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE	1E-10	// Precision for point to be in halfspace
#define PP_LAUNCH_VECTOR_LENGTH	1E+9	// Length of Objective Vector
#define PP_MIN_COS				0.04	// Minimum allowable cosine of angle between launch vector and direction vector
#define PP_EPS_RELATIVE_ERROR	1E-8	// Termination criteria 
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR			1E+6	// #ifdef PP_SAVE_ITER_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- lp_stocfor1_v - VeRSAl.mtx ------------------------
// Elapsed time: 0.9224612      (HAlEM)
// Number of iterations: 29
// Computed objective value: 41131.9762194363283924758
// Maximal objective value:  41131.9762194364084280096
// Relative error = 1.95e-15
// Distance to polytope: 7.4001098e-14
//------------------------------------------------------------------------------

//==============================================================================*/