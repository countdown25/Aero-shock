#ifndef Square_QUAD_P5_2x2
#define Square_QUAD_P5_2x2

int nE = 4;

int npf = 24;

int npe = 36;

double x[36][4] = {{0,0,0.5,0.5},
{0,0,0.5,0.5},
{0,0,0.5,0.5},
{0,0,0.5,0.5},
{0,0,0.5,0.5},
{0,0,0.5,0.5},
{0.05873616901763382,0.05873616901763382,0.5587361690176338,0.5587361690176338},
{0.05873616901763382,0.05873616901763382,0.5587361690176339,0.5587361690176339},
{0.05873616901763382,0.05873616901763382,0.5587361690176338,0.5587361690176338},
{0.05873616901763382,0.05873616901763382,0.5587361690176338,0.5587361690176338},
{0.05873616901763382,0.05873616901763382,0.5587361690176338,0.5587361690176338},
{0.05873616901763382,0.05873616901763382,0.5587361690176338,0.5587361690176338},
{0.1786921208798387,0.1786921208798387,0.6786921208798387,0.6786921208798387},
{0.1786921208798387,0.1786921208798387,0.6786921208798388,0.6786921208798388},
{0.1786921208798387,0.1786921208798387,0.6786921208798387,0.6786921208798387},
{0.1786921208798387,0.1786921208798387,0.6786921208798387,0.6786921208798387},
{0.1786921208798387,0.1786921208798387,0.6786921208798388,0.6786921208798388},
{0.1786921208798387,0.1786921208798387,0.6786921208798387,0.6786921208798387},
{0.3213078791201613,0.3213078791201613,0.8213078791201613,0.8213078791201613},
{0.3213078791201613,0.3213078791201613,0.8213078791201612,0.8213078791201612},
{0.3213078791201613,0.3213078791201613,0.8213078791201613,0.8213078791201613},
{0.3213078791201613,0.3213078791201613,0.8213078791201613,0.8213078791201613},
{0.3213078791201613,0.3213078791201613,0.8213078791201613,0.8213078791201613},
{0.3213078791201613,0.3213078791201613,0.8213078791201613,0.8213078791201613},
{0.4412638309823662,0.4412638309823662,0.9412638309823662,0.9412638309823662},
{0.4412638309823662,0.4412638309823662,0.9412638309823662,0.9412638309823662},
{0.4412638309823662,0.4412638309823662,0.9412638309823662,0.9412638309823662},
{0.4412638309823662,0.4412638309823662,0.9412638309823662,0.9412638309823662},
{0.4412638309823662,0.4412638309823662,0.9412638309823662,0.9412638309823662},
{0.4412638309823662,0.4412638309823662,0.9412638309823662,0.9412638309823662},
{0.5,0.5,1,1},
{0.5,0.5,1,1},
{0.5,0.5,1,1},
{0.5,0.5,1,1},
{0.5,0.5,1,1},
{0.5,0.5,1,1}};

double y[36][4] = {{0,0.5,0,0.5},
{0.05873616901763382,0.5587361690176338,0.05873616901763382,0.5587361690176338},
{0.1786921208798387,0.6786921208798387,0.1786921208798387,0.6786921208798387},
{0.3213078791201613,0.8213078791201613,0.3213078791201613,0.8213078791201613},
{0.4412638309823662,0.9412638309823662,0.4412638309823662,0.9412638309823662},
{0.5,1,0.5,1},
{0,0.5,0,0.5},
{0.05873616901763382,0.5587361690176338,0.05873616901763382,0.5587361690176338},
{0.1786921208798387,0.6786921208798388,0.1786921208798387,0.6786921208798388},
{0.3213078791201613,0.8213078791201613,0.3213078791201613,0.8213078791201613},
{0.4412638309823662,0.9412638309823662,0.4412638309823662,0.9412638309823662},
{0.5,1,0.5,1},
{0,0.5,0,0.5},
{0.05873616901763382,0.5587361690176339,0.05873616901763382,0.5587361690176339},
{0.1786921208798387,0.6786921208798387,0.1786921208798387,0.6786921208798387},
{0.3213078791201613,0.8213078791201613,0.3213078791201613,0.8213078791201613},
{0.4412638309823662,0.9412638309823662,0.4412638309823662,0.9412638309823662},
{0.5,1,0.5,1},
{0,0.5,0,0.5},
{0.05873616901763382,0.5587361690176338,0.05873616901763382,0.5587361690176338},
{0.1786921208798387,0.6786921208798387,0.1786921208798387,0.6786921208798387},
{0.3213078791201613,0.8213078791201613,0.3213078791201613,0.8213078791201613},
{0.4412638309823662,0.9412638309823662,0.4412638309823662,0.9412638309823662},
{0.5,1,0.5,1},
{0,0.5,0,0.5},
{0.05873616901763382,0.5587361690176339,0.05873616901763382,0.5587361690176339},
{0.1786921208798387,0.6786921208798387,0.1786921208798387,0.6786921208798387},
{0.3213078791201613,0.8213078791201613,0.3213078791201613,0.8213078791201613},
{0.4412638309823662,0.9412638309823662,0.4412638309823662,0.9412638309823662},
{0.5,1,0.5,1},
{0,0.5,0,0.5},
{0.05873616901763382,0.5587361690176338,0.05873616901763382,0.5587361690176338},
{0.1786921208798387,0.6786921208798387,0.1786921208798387,0.6786921208798387},
{0.3213078791201613,0.8213078791201613,0.3213078791201613,0.8213078791201613},
{0.4412638309823662,0.9412638309823662,0.4412638309823662,0.9412638309823662},
{0.5,1,0.5,1}};

double dx = 5.000000e-01;

double dy = 5.000000e-01;

int idx[36][4] = {{1,37,73,109},
{2,38,74,110},
{3,39,75,111},
{4,40,76,112},
{5,41,77,113},
{6,42,78,114},
{7,43,79,115},
{8,44,80,116},
{9,45,81,117},
{10,46,82,118},
{11,47,83,119},
{12,48,84,120},
{13,49,85,121},
{14,50,86,122},
{15,51,87,123},
{16,52,88,124},
{17,53,89,125},
{18,54,90,126},
{19,55,91,127},
{20,56,92,128},
{21,57,93,129},
{22,58,94,130},
{23,59,95,131},
{24,60,96,132},
{25,61,97,133},
{26,62,98,134},
{27,63,99,135},
{28,64,100,136},
{29,65,101,137},
{30,66,102,138},
{31,67,103,139},
{32,68,104,140},
{33,69,105,141},
{34,70,106,142},
{35,71,107,143},
{36,72,108,144}};

double rx[36][4] = {{3.999999999999999,3.999999999999999,3.999999999999994,3.999999999999994},
{3.999999999999997,3.999999999999997,3.999999999999957,3.999999999999957},
{3.999999999999996,3.999999999999996,3.999999999999972,3.999999999999972},
{3.999999999999999,3.999999999999999,4.000000000000009,4.000000000000009},
{3.999999999999995,3.999999999999995,4.000000000000036,4.000000000000036},
{3.999999999999995,3.999999999999995,4.00000000000001,4.00000000000001},
{4,4,4.000000000000002,4.000000000000002},
{3.999999999999997,3.999999999999997,3.999999999999999,3.999999999999999},
{3.999999999999998,3.999999999999997,3.999999999999999,3.999999999999998},
{4.000000000000001,4.000000000000001,4.000000000000004,4.000000000000004},
{3.999999999999998,3.999999999999998,4.000000000000002,4.000000000000002},
{3.999999999999999,3.999999999999999,3.999999999999995,3.999999999999995},
{4,4,4.000000000000004,4.000000000000004},
{3.999999999999999,3.999999999999999,4.00000000000001,4.00000000000001},
{3.999999999999996,3.999999999999996,3.999999999999995,3.999999999999995},
{4,4,3.999999999999995,3.999999999999995},
{4.000000000000001,4.000000000000001,3.999999999999993,3.999999999999993},
{4.000000000000001,4.000000000000001,3.999999999999999,3.999999999999999},
{4.000000000000001,4.000000000000001,4.000000000000002,4.000000000000002},
{4.000000000000003,4.000000000000003,4.000000000000003,4.000000000000003},
{4,4,4.000000000000004,4.000000000000004},
{3.999999999999999,3.999999999999999,3.999999999999991,3.999999999999991},
{4.000000000000006,4.000000000000006,4.000000000000004,4.000000000000004},
{3.999999999999996,3.999999999999996,3.999999999999993,3.999999999999993},
{4.000000000000001,4.000000000000001,4.000000000000001,4.000000000000001},
{4.000000000000003,4.000000000000003,4.000000000000004,4.000000000000004},
{4,3.999999999999999,4.000000000000002,4.000000000000002},
{4,4,4.000000000000004,4.000000000000004},
{4.000000000000004,4.000000000000004,4,3.999999999999999},
{4.000000000000002,4.000000000000002,3.999999999999996,3.999999999999996},
{3.999999999999996,3.999999999999996,3.999999999999979,3.999999999999979},
{4.000000000000015,4.000000000000015,4.000000000000002,4.000000000000002},
{3.999999999999995,3.999999999999995,3.999999999999975,3.999999999999975},
{4.000000000000014,4.000000000000014,4.000000000000028,4.000000000000028},
{3.999999999999983,3.999999999999983,3.999999999999953,3.999999999999953},
{3.999999999999993,3.999999999999993,3.999999999999986,3.999999999999986}};

double sx[36][4] = {{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}};

double ry[36][4] = {{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}};

double sy[36][4] = {{3.999999999999994,4.000000000000003,3.999999999999994,4.000000000000003},
{4.000000000000002,4.000000000000002,4.000000000000002,4.000000000000002},
{3.999999999999999,3.999999999999996,3.999999999999999,3.999999999999996},
{4.000000000000002,4.000000000000002,4.000000000000002,4.000000000000002},
{3.999999999999999,4.000000000000008,3.999999999999999,4.000000000000008},
{3.999999999999999,3.99999999999997,3.999999999999999,3.99999999999997},
{3.999999999999999,4.000000000000013,3.999999999999999,4.000000000000013},
{3.999999999999997,3.999999999999998,3.999999999999997,3.999999999999998},
{4.000000000000001,3.999999999999996,4.000000000000001,3.999999999999996},
{4.000000000000001,4.000000000000001,4.000000000000001,4.000000000000001},
{4.000000000000001,4.000000000000009,4.000000000000001,4.000000000000009},
{4,3.999999999999972,4,3.999999999999972},
{3.999999999999995,3.999999999999979,3.999999999999995,3.999999999999979},
{4.000000000000002,4.000000000000003,4.000000000000002,4.000000000000003},
{4,4.000000000000002,4,4.000000000000002},
{4,3.999999999999997,4,3.999999999999997},
{4.000000000000003,4.000000000000009,4.000000000000003,4.000000000000009},
{3.999999999999994,3.999999999999968,3.999999999999994,3.999999999999967},
{3.999999999999996,3.999999999999983,3.999999999999996,3.999999999999983},
{3.999999999999999,3.999999999999999,3.999999999999999,3.999999999999999},
{4,3.999999999999998,4,3.999999999999998},
{3.999999999999999,3.99999999999999,3.999999999999999,3.99999999999999},
{4.000000000000001,4.000000000000004,4.000000000000001,4.000000000000004},
{3.999999999999996,3.999999999999973,3.999999999999996,3.999999999999973},
{4.000000000000002,3.999999999999992,4.000000000000002,3.999999999999992},
{4.000000000000001,4.000000000000002,4.000000000000001,4.000000000000002},
{4.000000000000001,4.000000000000002,4.000000000000001,4.000000000000002},
{4.000000000000002,3.999999999999996,4.000000000000002,3.999999999999996},
{4.000000000000001,4.000000000000005,4.000000000000001,4.000000000000005},
{4.000000000000004,3.999999999999996,4.000000000000004,3.999999999999996},
{3.999999999999996,4.000000000000004,3.999999999999996,4.000000000000004},
{3.999999999999999,4,3.999999999999999,4},
{4.000000000000002,4,4.000000000000002,4},
{3.999999999999999,3.999999999999996,3.999999999999999,3.999999999999996},
{4,3.999999999999993,4,3.999999999999993},
{4,3.999999999999986,4,3.999999999999986}};

double nx[24][4] = {{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1}};

double ny[24][4] = {{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{-1,-1,-1,-1},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}};

double Fscale[24][4] = {{3.999999999999994,4.000000000000003,3.999999999999994,4.000000000000003},
{3.999999999999999,4.000000000000013,3.999999999999999,4.000000000000013},
{3.999999999999995,3.999999999999979,3.999999999999995,3.999999999999979},
{3.999999999999996,3.999999999999983,3.999999999999996,3.999999999999983},
{4.000000000000002,3.999999999999992,4.000000000000002,3.999999999999992},
{3.999999999999996,4.000000000000004,3.999999999999996,4.000000000000004},
{3.999999999999996,3.999999999999996,3.999999999999979,3.999999999999979},
{4.000000000000015,4.000000000000015,4.000000000000002,4.000000000000002},
{3.999999999999995,3.999999999999995,3.999999999999975,3.999999999999975},
{4.000000000000014,4.000000000000014,4.000000000000028,4.000000000000028},
{3.999999999999983,3.999999999999983,3.999999999999953,3.999999999999953},
{3.999999999999993,3.999999999999993,3.999999999999986,3.999999999999986},
{3.999999999999999,3.99999999999997,3.999999999999999,3.99999999999997},
{4,3.999999999999972,4,3.999999999999972},
{3.999999999999994,3.999999999999968,3.999999999999994,3.999999999999967},
{3.999999999999996,3.999999999999973,3.999999999999996,3.999999999999973},
{4.000000000000004,3.999999999999996,4.000000000000004,3.999999999999996},
{4,3.999999999999986,4,3.999999999999986},
{3.999999999999999,3.999999999999999,3.999999999999994,3.999999999999994},
{3.999999999999997,3.999999999999997,3.999999999999957,3.999999999999957},
{3.999999999999996,3.999999999999996,3.999999999999972,3.999999999999972},
{3.999999999999999,3.999999999999999,4.000000000000009,4.000000000000009},
{3.999999999999995,3.999999999999995,4.000000000000036,4.000000000000036},
{3.999999999999995,3.999999999999995,4.00000000000001,4.00000000000001}};

#endif