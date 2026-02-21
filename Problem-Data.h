/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: HAlEM - Hybrid Along Edges Movement method (MPI)
Module: Problem-Data.h (Problem Data)
Prefix: PD
Authors: Alexander E. Zhulev & Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
================================================================================*/
#include "Problem-Types.h"		// Problem Parameters 
using namespace std;
//========================== Algorithm-independent data ========================
static int PD_m;					// Total number of constraints
static int PD_n;					// Space dimension
static PT_matrix_T PD_A;			// Matrix of constraint coefficients
static PT_bitscale_T PD_isEquation;	// Constraint is equation
static PT_column_T PD_b;			// Column of constant terms (right-hand parts)
static PT_vector_T PD_c;			// Gradient of Objective Function
//========================== Algorithm data ====================================
static int PD_subspaceDim;			// Dimension of of support subspace (PD_n = PD_subspaceDim + PD_meq_basis)
static int PD_iterNo;				// Number of iterations

static PT_vector_T PD_v;			// Current vertex
static PT_vector_T PD_v_nex;		// Next vertex
static double PD_objF_nex;			// Maximum of ojective function in v_nex

static PT_vector_T PD_hi;			// Higher bound
static PT_vector_T PD_lo;			// Lower bound
static PT_column_T PD_norm_a;		// Column of norms of matrix rows
static PT_vector_T PD_launchVector;	// Used for projecting

static int PD_eqHyperplanes[PP_MM];		// Index of all base hyperplanes (correcpond to equations)
static int PD_meq;						// Number of all base hyperplanes (correcpond to inequalities)
static int PD_meq_basis;				// Number of base hyperplanes included into basis 

static int PD_neHyperplanes[PP_MM];		// Index of all boundary hyperplanes
static int PD_mne;						// Number of all boundary hyperplanes

static int PD_neHyperplanes_v[PP_MM];	// Index of boundary hyperplanes that include vertex v
static int PD_mne_v;					// Number of boundary hyperplanes that include vertex v
static int PD_basis_v[PP_N];			// Basis in vertex v
static int PD_basis_v_nex[PP_N];		// Basis in next vertex

static int PD_i_star;					// Item index to exclude from basis of v
static int PD_j_star;					// Item index to include into basis of v

static double PD_jumpLength;

// Change basis
static double PD_A0[PP_N][PP_N];		// A_basis_v * v = basis_b
static double PD_A0I[PP_N][PP_N];		// AI_basis_v is the inverse matrix to A_basis_v
static PT_column_T PD_u;				// Dual point
//------------------------- Orthogonal projection onto line ---------------
static PT_matrix_T PD_D;			// Auxiliary matrix D
static double PD_B[PP_N];			// Auxiliary column B
static double PD_Dv[PP_N];			// Dv
static double PD_Dv_B[PP_N];		// Dv-B
static double PD_DT[PP_N][PP_N];	// Transposed D
static double PD_DDT[PP_N][PP_N];	// D*DT
static double PD_DDTI[PP_N][PP_N];	// Inverse matrix to D*DT
static double PD_DTDDTI[PP_N][PP_N];
//========================== Input/Output =====================================
static string PD_problemName;