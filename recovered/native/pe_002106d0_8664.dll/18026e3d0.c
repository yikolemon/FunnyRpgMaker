/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026e3d0 */

longlong * FUN_18026e3d0(longlong *param_1,undefined8 param_2,byte *param_3,longlong *param_4)

{
  *param_4 = *param_1;
  if ((*param_3 & 1) != 0) {
    *param_4 = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}

