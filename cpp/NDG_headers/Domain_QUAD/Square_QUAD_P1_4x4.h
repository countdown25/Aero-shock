#ifndef Square_QUAD_P1_4x4
#define Square_QUAD_P1_4x4

int nE = 16;

int npf = 8;

int npe = 4;

double x[4][16] = {{0,0,0,0,0.25,0.25,0.25,0.25,0.5,0.5,0.5,0.5,0.75,0.75,0.75,0.75},
{0,0,0,0,0.25,0.25,0.25,0.25,0.5,0.5,0.5,0.5,0.75,0.75,0.75,0.75},
{0.25,0.25,0.25,0.25,0.5,0.5,0.5,0.5,0.75,0.75,0.75,0.75,1,1,1,1},
{0.25,0.25,0.25,0.25,0.5,0.5,0.5,0.5,0.75,0.75,0.75,0.75,1,1,1,1}};

double y[4][16] = {{0,0.25,0.5,0.75,0,0.25,0.5,0.75,0,0.25,0.5,0.75,0,0.25,0.5,0.75},
{0.25,0.5,0.75,1,0.25,0.5,0.75,1,0.25,0.5,0.75,1,0.25,0.5,0.75,1},
{0,0.25,0.5,0.75,0,0.25,0.5,0.75,0,0.25,0.5,0.75,0,0.25,0.5,0.75},
{0.25,0.5,0.75,1,0.25,0.5,0.75,1,0.25,0.5,0.75,1,0.25,0.5,0.75,1}};

double dx = 2.500000e-01;

double dy = 2.500000e-01;

int idx[4][16] = {{1,5,9,13,17,21,25,29,33,37,41,45,49,53,57,61},
{2,6,10,14,18,22,26,30,34,38,42,46,50,54,58,62},
{3,7,11,15,19,23,27,31,35,39,43,47,51,55,59,63},
{4,8,12,16,20,24,28,32,36,40,44,48,52,56,60,64}};

double rx[4][16] = {{8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8,8,8,8,8.000000000000004,8.000000000000004,8.000000000000004,8.000000000000004},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8,8,8,8,8.000000000000004,8.000000000000004,8.000000000000004,8.000000000000004},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8}};

double sx[4][16] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

double ry[4][16] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

double sy[4][16] = {{8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002},
{8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8}};

double nx[8][16] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};

double ny[8][16] = {{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

double Fscale[8][16] = {{8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8,8,8,8,8.000000000000004,8.000000000000004,8.000000000000004,8.000000000000004},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002,8.000000000000002,8.000000000000002,8,8.000000000000002},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8.000000000000002,8,8,8,8,8.000000000000004,8.000000000000004,8.000000000000004,8.000000000000004},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8}};

#endif