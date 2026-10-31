/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014f84b */

void FUN_1014f84b(int param_1,int *param_2)

{
  if (((uint)param_2[1] >> 0x15 & 1) == 0) {
    if ((param_2[1] & 0x101U) == 0) {
      *(undefined1 *)(param_2 + 0xb) = 1;
      if (*(int *)(param_1 + 0x24) == *param_2) {
        param_2[3] = -1;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        return;
      }
    }
    else if (*(int *)(param_1 + 0x24) != *param_2) {
      *(int *)(param_1 + 0x1c) = *param_2;
      return;
    }
  }
  return;
}

