#ifndef Square_TRI_P6_2x2
#define Square_TRI_P6_2x2

int nE = 8;

int npf = 21;

int npe = 28;

double x[28][8] = {{0,0,0,0,0.5,0.5,0.5,0.5},
{0.04244402593035818,0.04244402593035818,0.04244402593035818,0.04244402593035818,0.5424440259303582,0.5424440259303582,0.5424440259303582,0.5424440259303582},
{0.1327878016323214,0.1327878016323214,0.1327878016323214,0.1327878016323214,0.6327878016323214,0.6327878016323214,0.6327878016323214,0.6327878016323214},
{0.25,0.25,0.25,0.25,0.75,0.75,0.75,0.75},
{0.3672121983676786,0.3672121983676786,0.3672121983676786,0.3672121983676786,0.8672121983676786,0.8672121983676786,0.8672121983676786,0.8672121983676786},
{0.4575559740696417,0.4575559740696417,0.4575559740696417,0.4575559740696417,0.9575559740696418,0.9575559740696418,0.9575559740696418,0.9575559740696418},
{0.5,0.5,0.5,0.5,1,1,1,1},
{0.04244402593035831,0,0.04244402593035831,0,0.5424440259303582,0.5,0.5424440259303582,0.5},
{0.1152417519032792,0.05762087595163959,0.1152417519032792,0.05762087595163959,0.6152417519032791,0.5576208759516396,0.6152417519032791,0.5576208759516396},
{0.2227838368572474,0.1588076858658277,0.2227838368572474,0.1588076858658277,0.7227838368572475,0.6588076858658277,0.7227838368572475,0.6588076858658277},
{0.3411923141341723,0.2772161631427526,0.3411923141341723,0.2772161631427526,0.8411923141341723,0.7772161631427525,0.8411923141341723,0.7772161631427525},
{0.4423791240483603,0.3847582480967207,0.4423791240483603,0.3847582480967207,0.9423791240483603,0.8847582480967207,0.9423791240483603,0.8847582480967207},
{0.5,0.4575559740696418,0.5,0.4575559740696418,1,0.9575559740696418,1,0.9575559740696418},
{0.1327878016323214,0,0.1327878016323214,0,0.6327878016323214,0.5,0.6327878016323214,0.5},
{0.2227838368572473,0.06397615099141962,0.2227838368572473,0.06397615099141962,0.7227838368572472,0.5639761509914196,0.7227838368572472,0.5639761509914196},
{0.3333333333333333,0.1666666666666666,0.3333333333333333,0.1666666666666666,0.8333333333333333,0.6666666666666666,0.8333333333333333,0.6666666666666666},
{0.4360238490085803,0.2772161631427526,0.4360238490085803,0.2772161631427526,0.9360238490085804,0.7772161631427527,0.9360238490085804,0.7772161631427527},
{0.5,0.3672121983676785,0.5,0.3672121983676785,1,0.8672121983676785,1,0.8672121983676785},
{0.25,0,0.25,0,0.75,0.5,0.75,0.5},
{0.3411923141341723,0.06397615099141968,0.3411923141341723,0.06397615099141968,0.8411923141341723,0.5639761509914196,0.8411923141341723,0.5639761509914196},
{0.4360238490085803,0.1588076858658277,0.4360238490085803,0.1588076858658277,0.9360238490085804,0.6588076858658277,0.9360238490085804,0.6588076858658277},
{0.5,0.25,0.5,0.25,1,0.75,1,0.75},
{0.3672121983676785,0,0.3672121983676785,0,0.8672121983676786,0.5,0.8672121983676786,0.5},
{0.4423791240483603,0.05762087595163967,0.4423791240483603,0.05762087595163967,0.9423791240483603,0.5576208759516397,0.9423791240483603,0.5576208759516397},
{0.5,0.1327878016323214,0.5,0.1327878016323214,1,0.6327878016323214,1,0.6327878016323214},
{0.4575559740696419,0,0.4575559740696419,0,0.9575559740696419,0.5,0.9575559740696419,0.5},
{0.5000000000000001,0.04244402593035831,0.5000000000000001,0.04244402593035831,1,0.5424440259303583,1,0.5424440259303583},
{0.5,0,0.5,0,1,0.5,1,0.5}};

double y[28][8] = {{0,0,0.5,0.5,0,0,0.5,0.5},
{0,0.04244402593035818,0.5,0.5424440259303582,0,0.04244402593035818,0.5,0.5424440259303582},
{0,0.1327878016323214,0.5,0.6327878016323214,0,0.1327878016323214,0.5,0.6327878016323214},
{0,0.25,0.5,0.75,0,0.25,0.5,0.75},
{0,0.3672121983676786,0.5,0.8672121983676786,0,0.3672121983676786,0.5,0.8672121983676786},
{0,0.4575559740696417,0.5,0.9575559740696418,0,0.4575559740696417,0.5,0.9575559740696418},
{0,0.5,0.5,1,0,0.5,0.5,1},
{0.04244402593035831,0.04244402593035831,0.5424440259303582,0.5424440259303582,0.04244402593035831,0.04244402593035831,0.5424440259303582,0.5424440259303582},
{0.05762087595163959,0.1152417519032792,0.5576208759516397,0.6152417519032791,0.05762087595163959,0.1152417519032792,0.5576208759516397,0.6152417519032791},
{0.06397615099141971,0.2227838368572474,0.5639761509914196,0.7227838368572475,0.06397615099141971,0.2227838368572474,0.5639761509914196,0.7227838368572475},
{0.06397615099141968,0.3411923141341723,0.5639761509914196,0.8411923141341723,0.06397615099141968,0.3411923141341723,0.5639761509914196,0.8411923141341723},
{0.05762087595163962,0.4423791240483603,0.5576208759516397,0.9423791240483603,0.05762087595163962,0.4423791240483603,0.5576208759516397,0.9423791240483603},
{0.04244402593035818,0.5,0.5424440259303582,1,0.04244402593035818,0.5,0.5424440259303582,1},
{0.1327878016323214,0.1327878016323214,0.6327878016323214,0.6327878016323214,0.1327878016323214,0.1327878016323214,0.6327878016323214,0.6327878016323214},
{0.1588076858658277,0.2227838368572473,0.6588076858658276,0.7227838368572472,0.1588076858658277,0.2227838368572473,0.6588076858658276,0.7227838368572472},
{0.1666666666666666,0.3333333333333333,0.6666666666666666,0.8333333333333333,0.1666666666666666,0.3333333333333333,0.6666666666666666,0.8333333333333333},
{0.1588076858658277,0.4360238490085803,0.6588076858658277,0.9360238490085804,0.1588076858658277,0.4360238490085803,0.6588076858658277,0.9360238490085804},
{0.1327878016323215,0.5,0.6327878016323215,1,0.1327878016323215,0.5,0.6327878016323215,1},
{0.25,0.25,0.75,0.75,0.25,0.25,0.75,0.75},
{0.2772161631427526,0.3411923141341723,0.7772161631427525,0.8411923141341723,0.2772161631427526,0.3411923141341723,0.7772161631427525,0.8411923141341723},
{0.2772161631427526,0.4360238490085803,0.7772161631427525,0.9360238490085804,0.2772161631427526,0.4360238490085803,0.7772161631427525,0.9360238490085804},
{0.25,0.5,0.75,1,0.25,0.5,0.75,1},
{0.3672121983676785,0.3672121983676785,0.8672121983676786,0.8672121983676786,0.3672121983676785,0.3672121983676785,0.8672121983676786,0.8672121983676786},
{0.3847582480967207,0.4423791240483603,0.8847582480967207,0.9423791240483603,0.3847582480967207,0.4423791240483603,0.8847582480967207,0.9423791240483603},
{0.3672121983676786,0.5,0.8672121983676786,1,0.3672121983676786,0.5,0.8672121983676786,1},
{0.4575559740696418,0.4575559740696419,0.9575559740696418,0.9575559740696419,0.4575559740696418,0.4575559740696419,0.9575559740696418,0.9575559740696419},
{0.4575559740696418,0.5000000000000001,0.9575559740696418,1,0.4575559740696418,0.5000000000000001,0.9575559740696418,1},
{0.5,0.5,1,1,0.5,0.5,1,1}};

double dx = 7.071068e-01;

double dy = 7.071068e-01;

int idx[28][8] = {{1,29,57,85,113,141,169,197},
{2,30,58,86,114,142,170,198},
{3,31,59,87,115,143,171,199},
{4,32,60,88,116,144,172,200},
{5,33,61,89,117,145,173,201},
{6,34,62,90,118,146,174,202},
{7,35,63,91,119,147,175,203},
{8,36,64,92,120,148,176,204},
{9,37,65,93,121,149,177,205},
{10,38,66,94,122,150,178,206},
{11,39,67,95,123,151,179,207},
{12,40,68,96,124,152,180,208},
{13,41,69,97,125,153,181,209},
{14,42,70,98,126,154,182,210},
{15,43,71,99,127,155,183,211},
{16,44,72,100,128,156,184,212},
{17,45,73,101,129,157,185,213},
{18,46,74,102,130,158,186,214},
{19,47,75,103,131,159,187,215},
{20,48,76,104,132,160,188,216},
{21,49,77,105,133,161,189,217},
{22,50,78,106,134,162,190,218},
{23,51,79,107,135,163,191,219},
{24,52,80,108,136,164,192,220},
{25,53,81,109,137,165,193,221},
{26,54,82,110,138,166,194,222},
{27,55,83,111,139,167,195,223},
{28,56,84,112,140,168,196,224}};

double rx[28][8] = {{4.000000000000005,3.999999999999979,4.000000000000003,3.999999999999979,4.000000000000004,3.999999999999973,4.000000000000001,3.999999999999973},
{3.999999999999996,3.99999999999999,3.999999999999996,3.99999999999999,4.000000000000002,3.999999999999964,4.000000000000001,3.999999999999964},
{4.000000000000001,3.999999999999991,4.000000000000002,3.999999999999991,4.000000000000003,3.999999999999997,4.000000000000004,3.999999999999997},
{4.000000000000001,3.999999999999981,4.000000000000001,3.99999999999998,4,3.999999999999975,4,3.999999999999975},
{3.999999999999999,3.999999999999985,3.999999999999998,3.999999999999985,3.999999999999999,3.999999999999978,3.999999999999998,3.999999999999978},
{4.000000000000002,3.999999999999988,3.999999999999998,3.999999999999988,4.000000000000007,4.000000000000011,4.000000000000004,4.000000000000011},
{3.999999999999987,3.999999999999948,3.999999999999988,3.999999999999948,3.999999999999987,3.999999999999905,3.999999999999988,3.999999999999905},
{4.000000000000004,4.000000000000005,4.000000000000017,4.000000000000005,4.000000000000008,4.00000000000002,4.000000000000021,4.00000000000002},
{4.000000000000002,4,4.000000000000004,4,3.999999999999993,3.999999999999998,3.999999999999995,3.999999999999999},
{3.999999999999999,4.000000000000004,3.999999999999993,4.000000000000004,3.999999999999997,4.00000000000001,3.999999999999991,4.00000000000001},
{3.999999999999996,3.999999999999996,4.000000000000003,3.999999999999997,3.999999999999996,4.000000000000006,4.000000000000004,4.000000000000006},
{4.000000000000008,4.000000000000004,4.000000000000006,4.000000000000004,4.000000000000012,4,4.00000000000001,4},
{4.000000000000012,4.00000000000002,4.000000000000008,4.00000000000002,4.000000000000023,4.000000000000042,4.000000000000019,4.000000000000042},
{3.999999999999996,4.000000000000001,3.999999999999993,4.000000000000001,4.000000000000018,4.000000000000032,4.000000000000015,4.000000000000032},
{3.999999999999999,3.999999999999998,4.000000000000004,3.999999999999998,3.99999999999999,3.999999999999988,3.999999999999996,3.999999999999988},
{4,4.000000000000004,4.000000000000007,4.000000000000004,3.999999999999998,3.999999999999993,4.000000000000005,3.999999999999992},
{4.000000000000003,3.999999999999996,3.999999999999997,3.999999999999996,4.000000000000003,4.000000000000002,3.999999999999997,4.000000000000002},
{4,4,4.00000000000001,4,4.000000000000021,4.000000000000016,4.000000000000031,4.000000000000016},
{4.000000000000024,4.000000000000013,4.000000000000017,4.000000000000013,4.000000000000016,4.000000000000002,4.000000000000009,4.000000000000002},
{3.999999999999997,3.999999999999997,4,3.999999999999997,4.000000000000001,4,4.000000000000004,4},
{4.000000000000005,3.999999999999999,4,3.999999999999999,4.000000000000004,3.999999999999997,3.999999999999999,3.999999999999997},
{3.999999999999988,4.000000000000011,4.000000000000031,4.000000000000012,3.999999999999988,4.000000000000012,4.000000000000031,4.000000000000012},
{4.000000000000013,4.000000000000008,4.000000000000016,4.000000000000008,3.99999999999999,3.999999999999993,3.999999999999993,3.999999999999993},
{3.999999999999997,3.999999999999995,3.999999999999992,3.999999999999995,3.999999999999998,3.999999999999997,3.999999999999993,3.999999999999997},
{3.999999999999987,4.000000000000002,3.999999999999991,4.000000000000002,3.999999999999989,3.999999999999989,3.999999999999994,3.999999999999989},
{4.000000000000036,4.00000000000002,4.000000000000025,4.00000000000002,4.000000000000068,4.000000000000021,4.000000000000057,4.000000000000021},
{3.999999999999993,4.000000000000003,4.000000000000032,4.000000000000003,3.999999999999975,3.999999999999979,4.000000000000014,3.999999999999979},
{4.000000000000028,4.000000000000023,4.000000000000025,4.000000000000023,4.00000000000006,4.000000000000046,4.000000000000057,4.000000000000046}};

double sx[28][8] = {{0,-3.999999999999997,0,-4.000000000000011,0,-3.999999999999992,0,-4.000000000000005},
{0,-4.000000000000005,0,-4.000000000000044,0,-3.999999999999979,0,-4.000000000000018},
{0,-3.999999999999994,0,-3.999999999999974,0,-4,0,-3.99999999999998},
{0,-4,0,-3.999999999999977,0,-3.999999999999994,0,-3.999999999999972},
{0,-4.000000000000004,0,-4.000000000000008,0,-3.999999999999996,0,-4},
{0,-3.999999999999993,0,-3.999999999999981,0,-4.000000000000016,0,-4.000000000000004},
{0,-3.999999999999997,0,-4.00000000000004,0,-3.999999999999955,0,-3.999999999999996},
{0,-3.999999999999998,0,-3.999999999999989,0,-4.000000000000013,0,-4.000000000000004},
{0,-4,0,-4.000000000000001,0,-3.999999999999999,0,-4},
{0,-3.999999999999996,0,-4.000000000000006,0,-4.000000000000002,0,-4.000000000000012},
{0,-4.000000000000002,0,-4.000000000000005,0,-4.000000000000012,0,-4.000000000000014},
{0,-3.999999999999996,0,-3.999999999999979,0,-3.999999999999992,0,-3.999999999999975},
{0,-4.000000000000001,0,-4.000000000000019,0,-4.000000000000023,0,-4.000000000000041},
{0,-4.000000000000004,0,-3.999999999999978,0,-4.000000000000036,0,-4.000000000000009},
{0,-3.999999999999999,0,-4.000000000000004,0,-3.999999999999989,0,-3.999999999999994},
{0,-4.000000000000001,0,-4.000000000000016,0,-3.999999999999989,0,-4.000000000000004},
{0,-3.999999999999998,0,-3.999999999999996,0,-4.000000000000004,0,-4.000000000000002},
{0,-3.999999999999981,0,-4.00000000000002,0,-3.999999999999997,0,-4.000000000000036},
{0,-3.999999999999977,0,-3.999999999999987,0,-3.999999999999965,0,-3.999999999999976},
{0,-4.000000000000002,0,-3.999999999999988,0,-4.000000000000004,0,-3.999999999999991},
{0,-4,0,-4.000000000000002,0,-3.999999999999997,0,-3.999999999999999},
{0,-3.999999999999986,0,-4.000000000000019,0,-3.999999999999988,0,-4.00000000000002},
{0,-3.999999999999994,0,-4.000000000000017,0,-3.999999999999979,0,-4.000000000000002},
{0,-3.999999999999996,0,-4.000000000000003,0,-3.999999999999998,0,-4.000000000000004},
{0,-3.999999999999997,0,-4.000000000000009,0,-3.999999999999985,0,-3.999999999999996},
{0,-3.999999999999998,0,-3.999999999999976,0,-4,0,-3.999999999999979},
{0,-4.000000000000031,0,-4.000000000000074,0,-4.000000000000007,0,-4.00000000000005},
{0,-4.00000000000002,0,-4.000000000000016,0,-4.000000000000043,0,-4.000000000000039}};

double ry[28][8] = {{-3.999999999999978,0,-3.999999999999989,0,-3.999999999999964,0,-3.999999999999976,0},
{-3.999999999999991,0,-3.999999999999986,0,-3.999999999999953,0,-3.999999999999947,0},
{-3.999999999999999,0,-3.999999999999991,0,-4.000000000000019,0,-4.000000000000011,0},
{-3.999999999999983,0,-4.000000000000013,0,-4.000000000000005,0,-4.000000000000036,0},
{-3.999999999999983,0,-3.999999999999956,0,-3.99999999999998,0,-3.999999999999952,0},
{-3.999999999999989,0,-3.99999999999997,0,-4.000000000000002,0,-3.999999999999982,0},
{-3.999999999999945,0,-3.999999999999941,0,-3.999999999999903,0,-3.9999999999999,0},
{-4.000000000000002,0,-4.000000000000015,0,-4.00000000000001,0,-4.000000000000023,0},
{-4.000000000000001,0,-4.000000000000011,0,-4,0,-4.000000000000011,0},
{-4.000000000000009,0,-4.000000000000005,0,-3.999999999999998,0,-3.999999999999995,0},
{-3.999999999999995,0,-3.999999999999999,0,-3.999999999999992,0,-3.999999999999996,0},
{-4.000000000000008,0,-3.999999999999997,0,-4.000000000000026,0,-4.000000000000015,0},
{-4.00000000000002,0,-4.000000000000004,0,-4.000000000000003,0,-3.999999999999987,0},
{-3.999999999999996,0,-3.999999999999991,0,-4.000000000000023,0,-4.000000000000018,0},
{-3.999999999999999,0,-4.000000000000012,0,-3.999999999999995,0,-4.000000000000008,0},
{-4.000000000000004,0,-4.000000000000004,0,-3.999999999999988,0,-3.999999999999989,0},
{-3.999999999999999,0,-4.000000000000003,0,-4.000000000000002,0,-4.000000000000004,0},
{-4.000000000000025,0,-4.000000000000036,0,-3.999999999999985,0,-3.999999999999996,0},
{-4.000000000000022,0,-4.000000000000008,0,-4.000000000000012,0,-3.999999999999998,0},
{-3.999999999999997,0,-3.999999999999991,0,-4.000000000000011,0,-4.000000000000005,0},
{-4.000000000000001,0,-4.000000000000006,0,-3.999999999999999,0,-4.000000000000004,0},
{-4.000000000000016,0,-4.000000000000024,0,-3.999999999999984,0,-3.999999999999992,0},
{-4.000000000000015,0,-4.000000000000021,0,-3.999999999999992,0,-3.999999999999998,0},
{-4.000000000000001,0,-3.999999999999997,0,-3.999999999999995,0,-3.999999999999991,0},
{-3.99999999999999,0,-3.99999999999998,0,-3.999999999999979,0,-3.999999999999969,0},
{-4.000000000000036,0,-4.000000000000028,0,-4.000000000000057,0,-4.00000000000005,0},
{-3.999999999999986,0,-4,0,-3.999999999999943,0,-3.999999999999957,0},
{-4.000000000000014,0,-3.999999999999996,0,-4.000000000000018,0,-4,0}};

double sy[28][8] = {{3.999999999999996,3.999999999999998,4.000000000000008,4.00000000000001,3.999999999999996,3.999999999999993,4.000000000000008,4.000000000000005},
{4.000000000000006,4.000000000000004,4.000000000000001,4.000000000000048,4.000000000000006,3.999999999999975,4.000000000000001,4.000000000000019},
{4.000000000000002,3.999999999999994,3.999999999999994,3.999999999999976,4.000000000000002,3.999999999999998,3.999999999999994,3.99999999999998},
{4.000000000000002,4.000000000000002,4.000000000000032,3.999999999999978,4.000000000000002,3.999999999999996,4.000000000000032,3.999999999999973},
{4.000000000000002,4.000000000000004,3.999999999999974,4.000000000000008,4.000000000000002,3.999999999999996,3.999999999999974,4},
{3.999999999999995,3.999999999999993,3.999999999999975,3.999999999999986,3.999999999999995,4.000000000000011,3.999999999999976,4.000000000000004},
{3.999999999999995,3.999999999999997,3.999999999999991,4.00000000000004,3.999999999999995,3.999999999999956,3.999999999999991,3.999999999999998},
{3.999999999999994,4.000000000000002,4.000000000000008,3.999999999999998,3.999999999999994,4.000000000000002,4.000000000000008,3.999999999999998},
{4.000000000000001,4,4.000000000000012,3.999999999999992,4.000000000000001,4.000000000000001,4.000000000000012,3.999999999999994},
{4.000000000000001,3.999999999999995,3.999999999999997,4.000000000000004,4.000000000000001,3.999999999999999,3.999999999999997,4.000000000000007},
{4,4,4.000000000000004,4.000000000000004,4,4.000000000000009,4.000000000000004,4.000000000000012},
{4,3.999999999999994,3.999999999999989,3.99999999999998,4,4.000000000000003,3.99999999999999,3.999999999999988},
{4.000000000000001,4.000000000000001,3.999999999999985,4.000000000000028,4.000000000000002,4.000000000000036,3.999999999999985,4.000000000000063},
{4,4.000000000000004,3.999999999999995,4,4,4.000000000000005,3.999999999999995,4.000000000000001},
{4,4,4.000000000000013,3.999999999999996,4,3.999999999999997,4.000000000000013,3.999999999999993},
{4,3.999999999999999,4.000000000000001,4.000000000000012,4,3.999999999999991,4.000000000000001,4.000000000000004},
{4.000000000000002,3.999999999999995,4.000000000000004,3.999999999999993,4.000000000000002,4,4.000000000000004,3.999999999999998},
{4.000000000000005,3.999999999999995,4.000000000000016,4.000000000000056,4.000000000000005,3.999999999999988,4.000000000000016,4.000000000000049},
{3.999999999999985,3.999999999999996,3.999999999999972,3.999999999999999,3.999999999999985,3.999999999999997,3.999999999999972,4},
{4.000000000000002,4.000000000000001,3.999999999999996,3.999999999999991,4.000000000000002,3.999999999999999,3.999999999999996,3.999999999999989},
{4.000000000000002,3.999999999999998,4.000000000000007,3.999999999999999,4.000000000000002,3.999999999999999,4.000000000000007,4},
{3.999999999999991,3.999999999999998,3.999999999999999,4.000000000000031,3.999999999999991,3.999999999999991,3.999999999999999,4.000000000000023},
{4.000000000000001,3.999999999999999,4.000000000000007,3.999999999999999,4.000000000000001,4.000000000000002,4.000000000000007,4.000000000000002},
{4.000000000000002,3.999999999999995,3.999999999999998,4.000000000000003,4.000000000000002,4,3.999999999999998,4.000000000000007},
{3.999999999999986,3.999999999999995,3.999999999999976,4.000000000000009,3.999999999999986,3.999999999999982,3.999999999999976,3.999999999999996},
{4.000000000000014,3.999999999999996,4.000000000000007,4.000000000000006,4.000000000000014,4,4.000000000000007,4.000000000000011},
{4.000000000000014,4,4.000000000000028,4.000000000000025,4.000000000000014,4,4.000000000000028,4.000000000000025},
{4.000000000000011,3.999999999999998,3.999999999999993,4.000000000000027,4.000000000000011,4.000000000000014,3.999999999999993,4.000000000000043}};

double nx[21][8] = {{0,0.7071067811865475,0,0.7071067811865476,0,0.7071067811865475,0,0.7071067811865475},
{0,0.7071067811865476,0,0.7071067811865471,0,0.7071067811865479,0,0.7071067811865474},
{0,0.7071067811865475,0,0.7071067811865474,0,0.7071067811865477,0,0.7071067811865476},
{0,0.7071067811865474,0,0.7071067811865475,0,0.7071067811865472,0,0.7071067811865474},
{0,0.7071067811865476,0,0.7071067811865476,0,0.7071067811865476,0,0.7071067811865476},
{0,0.7071067811865475,0,0.7071067811865471,0,0.707106781186548,0,0.7071067811865476},
{0,0.7071067811865475,0,0.7071067811865475,0,0.7071067811865474,0,0.7071067811865474},
{1,0,1,0,1,0,1,0},
{1,0,1,0,1,0,1,0},
{1,0,1,0,1,0,1,0},
{1,0,1,0,1,0,1,0},
{1,0,1,0,1,0,1,0},
{1,0,1,0,1,0,1,0},
{1,0,1,0,1,0,1,0},
{-0.70710678118655,-1,-0.7071067811865487,-1,-0.707106781186551,-1,-0.7071067811865497,-1},
{-0.7071067811865477,-1,-0.7071067811865477,-1,-0.7071067811865474,-1,-0.7071067811865474,-1},
{-0.7071067811865475,-1,-0.7071067811865477,-1,-0.707106781186547,-1,-0.7071067811865472,-1},
{-0.7071067811865477,-1,-0.7071067811865482,-1,-0.7071067811865479,-1,-0.7071067811865485,-1},
{-0.7071067811865474,-1,-0.707106781186547,-1,-0.7071067811865474,-1,-0.707106781186547,-1},
{-0.7071067811865476,-1,-0.7071067811865472,-1,-0.7071067811865485,-1,-0.7071067811865481,-1},
{-0.7071067811865488,-1,-0.70710678118655,-1,-0.7071067811865513,-1,-0.7071067811865525,-1}};

double ny[21][8] = {{-1,-0.7071067811865476,-1,-0.7071067811865475,-1,-0.7071067811865477,-1,-0.7071067811865475},
{-1,-0.7071067811865474,-1,-0.7071067811865479,-1,-0.7071067811865471,-1,-0.7071067811865476},
{-1,-0.7071067811865475,-1,-0.7071067811865477,-1,-0.7071067811865474,-1,-0.7071067811865476},
{-1,-0.7071067811865477,-1,-0.7071067811865477,-1,-0.7071067811865477,-1,-0.7071067811865477},
{-1,-0.7071067811865476,-1,-0.7071067811865476,-1,-0.7071067811865476,-1,-0.7071067811865476},
{-1,-0.7071067811865475,-1,-0.7071067811865479,-1,-0.7071067811865471,-1,-0.7071067811865475},
{-1,-0.7071067811865475,-1,-0.7071067811865475,-1,-0.7071067811865477,-1,-0.7071067811865477},
{0,1,0,1,0,1,0,1},
{0,1,0,1,0,1,0,1},
{0,1,0,1,0,1,0,1},
{0,1,0,1,0,1,0,1},
{0,1,0,1,0,1,0,1},
{0,1,0,1,0,1,0,1},
{0,1,0,1,0,1,0,1},
{0.7071067811865451,0,0.7071067811865464,0,0.7071067811865441,0,0.7071067811865454,0},
{0.7071067811865474,0,0.7071067811865474,0,0.7071067811865477,0,0.7071067811865477,0},
{0.7071067811865476,0,0.7071067811865474,0,0.707106781186548,0,0.7071067811865478,0},
{0.7071067811865474,0,0.7071067811865467,0,0.7071067811865472,0,0.7071067811865466,0},
{0.7071067811865477,0,0.707106781186548,0,0.7071067811865477,0,0.707106781186548,0},
{0.7071067811865476,0,0.7071067811865479,0,0.7071067811865466,0,0.7071067811865469,0},
{0.7071067811865462,0,0.707106781186545,0,0.7071067811865438,0,0.7071067811865425,0}};

double Fscale[21][8] = {{3.999999999999996,5.656854249492377,4.000000000000008,5.656854249492395,3.999999999999996,5.65685424949237,4.000000000000008,5.656854249492388},
{4.000000000000006,5.656854249492388,4.000000000000001,5.656854249492445,4.000000000000006,5.656854249492347,4.000000000000001,5.656854249492405},
{4.000000000000002,5.656854249492373,3.999999999999994,5.656854249492345,4.000000000000002,5.656854249492379,3.999999999999994,5.656854249492352},
{4.000000000000002,5.656854249492381,4.000000000000032,5.656854249492348,4.000000000000002,5.656854249492374,4.000000000000032,5.656854249492342},
{4.000000000000002,5.656854249492386,3.999999999999974,5.656854249492391,4.000000000000002,5.656854249492375,3.999999999999974,5.656854249492381},
{3.999999999999995,5.656854249492371,3.999999999999975,5.656854249492357,3.999999999999995,5.656854249492398,3.999999999999976,5.656854249492386},
{3.999999999999995,5.656854249492377,3.999999999999991,5.656854249492437,3.999999999999995,5.656854249492318,3.999999999999991,5.656854249492376},
{3.999999999999987,4.000000000000036,3.999999999999987,4.000000000000078,3.999999999999987,4.000000000000036,3.999999999999987,4.000000000000078},
{4.000000000000014,3.999999999999996,4.000000000000013,4.000000000000023,4.000000000000025,3.999999999999996,4.000000000000024,4.000000000000023},
{4.000000000000003,3.999999999999983,4.000000000000003,4.000000000000044,4.000000000000024,3.999999999999984,4.000000000000024,4.000000000000044},
{3.999999999999996,3.999999999999971,3.999999999999996,4.000000000000004,3.999999999999996,3.999999999999972,3.999999999999996,4.000000000000004},
{3.999999999999987,3.999999999999982,3.999999999999987,3.999999999999996,3.999999999999989,3.999999999999982,3.999999999999989,3.999999999999996},
{3.999999999999968,3.999999999999996,3.999999999999968,4.000000000000021,3.99999999999995,3.999999999999996,3.99999999999995,4.000000000000021},
{4.000000000000004,4,4.000000000000004,4.000000000000028,4.000000000000036,4,4.000000000000036,4.000000000000028},
{5.656854249492368,3.999999999999979,5.656854249492374,3.999999999999979,5.656854249492357,3.999999999999973,5.656854249492364,3.999999999999973},
{5.656854249492383,4.000000000000005,5.656854249492402,4.000000000000005,5.656854249492393,4.00000000000002,5.656854249492412,4.00000000000002},
{5.656854249492374,4.000000000000001,5.656854249492369,4.000000000000001,5.656854249492409,4.000000000000032,5.656854249492404,4.000000000000032},
{5.656854249492413,4.000000000000013,5.656854249492398,4.000000000000013,5.656854249492399,4.000000000000002,5.656854249492385,4.000000000000002},
{5.6568542494924,4.000000000000008,5.656854249492406,4.000000000000008,5.656854249492367,3.999999999999993,5.656854249492373,3.999999999999993},
{5.65685424949243,4.00000000000002,5.656854249492418,4.00000000000002,5.656854249492469,4.000000000000021,5.656854249492456,4.000000000000021},
{5.656854249492411,4.000000000000023,5.656854249492395,4.000000000000023,5.656854249492436,4.000000000000046,5.656854249492421,4.000000000000046}};

#endif