/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018edc0 */

void FUN_1018edc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  if (0 < param_8) {
    do {
      FUN_1025b2d0((*(int *)(param_4 + 0x1c) * param_6 + param_5) * *(int *)(param_4 + 0x24) +
                   *(int *)(param_4 + 0x28),
                   (*(int *)(param_1 + 0x1c) * param_3 + param_2) * *(int *)(param_1 + 0x24) +
                   *(int *)(param_1 + 0x28),*(int *)(param_4 + 0x24) * param_7);
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}

