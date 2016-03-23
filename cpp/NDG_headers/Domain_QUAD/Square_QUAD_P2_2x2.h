#ifndef Square_QUAD_P2_2x2
#define Square_QUAD_P2_2x2

int nE = 4;

int npf = 12;

int npe = 9;

double x[9][4] = {{0,0,0.5,0.5},
{0,0,0.5,0.5},
{0,0,0.5,0.5},
{0.25,0.25,0.75,0.75},
{0.25,0.25,0.75,0.75},
{0.25,0.25,0.75,0.75},
{0.5,0.5,1,1},
{0.5,0.5,1,1},
{0.5,0.5,1,1}};

double y[9][4] = {{0,0.5,0,0.5},
{0.25,0.75,0.25,0.75},
{0.5,1,0.5,1},
{0,0.5,0,0.5},
{0.25,0.75,0.25,0.75},
{0.5,1,0.5,1},
{0,0.5,0,0.5},
{0.25,0.75,0.25,0.75},
{0.5,1,0.5,1}};

double dx = 5.000000e-01;

double dy = 5.000000e-01;

int idx[9][4] = {{1,10,19,28},
{2,11,20,29},
{3,12,21,30},
{4,13,22,31},
{5,14,23,32},
{6,15,24,33},
{7,16,25,34},
{8,17,26,35},
{9,18,27,36}};

double rx[9][4] = {{3.999999999999999,3.999999999999999,4.000000000000001,4.000000000000001},
{4,4,4,4},
{4,4,4,4},
{4.000000000000001,4.000000000000001,4.000000000000002,4.000000000000002},
{4,4,4,4},
{4.000000000000001,4.000000000000001,4.000000000000001,4.000000000000001},
{4,4,3.999999999999999,3.999999999999999},
{4,4,4,4},
{3.999999999999999,3.999999999999999,4,4}};

double sx[9][4] = {{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}};

double ry[9][4] = {{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}};

double sy[9][4] = {{4.000000000000001,4.000000000000004,4.000000000000001,4.000000000000004},
{4.000000000000001,4.000000000000001,4.000000000000001,4.000000000000001},
{3.999999999999999,4.000000000000001,3.999999999999999,4.000000000000001},
{4,4,4,4},
{4,4,4,4},
{4,4,4,4},
{4,4,4,4},
{4.000000000000001,4,4.000000000000001,4},
{3.999999999999999,3.999999999999996,3.999999999999999,3.999999999999996}};

double nx[12][4] = {{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1}};

double ny[12][4] = {{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}};

double Fscale[12][4] = {{4.000000000000001,4.000000000000004,4.000000000000001,4.000000000000004},
{4,4,4,4},
{4,4,4,4},
{4,4,3.999999999999999,3.999999999999999},
{4,4,4,4},
{3.999999999999999,3.999999999999999,4,4},
{3.999999999999999,4.000000000000001,3.999999999999999,4.000000000000001},
{4,4,4,4},
{3.999999999999999,3.999999999999996,3.999999999999999,3.999999999999996},
{3.999999999999999,3.999999999999999,4.000000000000001,4.000000000000001},
{4,4,4,4},
{4,4,4,4}};

#endif