/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef720 */

void FUN_1801ef720(longlong param_1,uint *param_2)

{
  if (6 < *param_2) {
    *(undefined4 *)(param_1 + 0x20) = 0x84;
    return;
  }
  *(short *)(param_1 + 0x1ce) = (short)*param_2;
  return;
}

