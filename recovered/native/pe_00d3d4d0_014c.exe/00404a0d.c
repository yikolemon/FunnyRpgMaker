/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404a0d */

undefined4 * __cdecl FUN_00404a0d(undefined4 *param_1,uint *param_2,uint param_3)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00404a4a(param_1,param_2,param_3);
  return param_1;
}

