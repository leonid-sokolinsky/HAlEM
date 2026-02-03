/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: HAlEM - Hybrid Along Edges Movement method (MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Authors: Alexander E. Zhulev & Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
================================================================================*/

/*----------------------------- Problems ---------------------------------------*/

//#define PP_PATH "Problems/"

/**
#include "_Problems10-1.h"
#define PP_PATH "../../Set-of-LP-Problems/Rnd-LP/"

/**
#include "_Problems100_1000-0.h"
#define PP_PATH "../../Set-of-LP-Problems/Rnd-LP/"

/**
#include "_Problems-Klee-Minty-Cube.h"
#define PP_PATH "../../Set-of-LP-Problems/Klee-Minty-Cube/"

/**
#include "_Problems-Miscellaneous.h"
#define PP_PATH "../../Set-of-LP-Problems/Miscellaneous-LP/"

/**/
#include "_Problems-NetLib-LP.h"
#define PP_PATH "../../Set-of-LP-Problems/NetLib-LP/"

/*------------------------------------------------------------------------------*/

#define PP_METHOD_NAME "HAlEM"

//-------------------------- Compilation Modes ---------------------------------
#define PP_NORMALIZATION
//#define PP_SAVE_INITIAL_BASIS
//#define PP_ITER_OUTPUT 
//#define PP_MATRIX_OUTPUT
//#define PP_SAVE_CURRENT_BASIS
//#define PP_SAVE_CURRENT_VERTEX
//#define PP_SAVE_RESULT
//#define PP_BASIS_GAUGE
#define PP_CHECK_MAX_OBJ_VALUE // Exit if relative error of computed maximum of objective function is less than PP_EPS_RELATIVE_ERROR (demands #define PP_MAX_OBJ_VALUE)

#ifndef PP_EPS_INVERSE
#define PP_EPS_INVERSE PP_EPS_ZERO
#endif

#ifndef PP_EPS_ON_HYPERPLANE
#define PP_EPS_ON_HYPERPLANE PP_EPS_ZERO
#endif

#ifndef PP_EPS_RELATIVE_ERROR
#define PP_EPS_RELATIVE_ERROR PP_EPS_ZERO
#endif

//================================ Problem Paramrters ==========================
#define PP_MM							(PP_M+2*PP_N)	// Maximal number of constraints
//-------------------------- Input/Outpoot Parameters --------------------------
#define PP_OUTPUT_LIMIT	30	// Number of Elements to output
#define PP_SETW 16
//------------------------- Matrix format --------------------------------------
#define PP_INFINITY			1E+308		// Highest bound in *_hi.mtx
#define PP_MTX_PREFIX		"lp_"
#define PP_MTX_POSTFIX_A	".mtx"
#define PP_MTX_POSTFIX_B	"_b.mtx"
#define PP_MTX_POSTFIX_C	"_c.mtx"
#define PP_MTX_POSTFIX_HI	"_hi.mtx"
#define PP_MTX_POSTFIX_LO	"_lo.mtx"
#define PP_MTX_POSTFIX_SO	"_so.mtx"	// Solution point
#define PP_MTX_POSTFIX_V	"_v.mtx"	// Starting point
//------------------------- MPS format ----------------
#define PP_MPS_NAME_LENGTH	9
#define PP_MPS_PREFIX		"lp_"
#define PP_MPS_EXTENSION	".mps"
#define PP_MAX_NUMBER_OF_ROWS	(PP_M+3)
#define PP_MAX_NUMBER_OF_COLS	(PP_N*(PP_M+1)+1)
//-------------------------- Jobs  -----------------------
// Not used.