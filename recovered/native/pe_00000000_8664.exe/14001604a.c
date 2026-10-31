/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001604a */

undefined8 *
FUN_14001604a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  FUN_1400160b8(&DAT_1401c99a4,param_1,param_2,param_4,param_2,0xfffffffffffffffe);
  return param_2;
}

