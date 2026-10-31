/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003cd54 */

void FUN_14003cd54(longlong param_1,uint *param_2)

{
  if (6 < *param_2) {
    *(undefined4 *)(param_1 + 0x20) = 0x84;
    return;
  }
  *(short *)(param_1 + 0x1ce) = (short)*param_2;
  return;
}

