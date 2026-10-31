/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c048 */

void FUN_14001c048(int *param_1,byte param_2,undefined8 *param_3,byte *param_4)

{
  param_1[3] = 1;
  FUN_14001bfb2(param_1,param_2,param_3,param_4,param_4[-1] & 3,0);
  return;
}

