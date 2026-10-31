/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cc93e */

void FUN_1400cc93e(longlong param_1,int *param_2)

{
  if (((uint)param_2[1] >> 0x15 & 1) == 0) {
    if ((param_2[1] & 0x101U) == 0) {
      *(undefined1 *)(param_2 + 0xc) = 1;
      if (*(int *)(param_1 + 0x2c) == *param_2) {
        param_2[4] = -1;
        *(undefined8 *)(param_1 + 0x20) = 0;
        return;
      }
    }
    else if (*(int *)(param_1 + 0x2c) != *param_2) {
      *(int *)(param_1 + 0x24) = *param_2;
      return;
    }
  }
  return;
}

