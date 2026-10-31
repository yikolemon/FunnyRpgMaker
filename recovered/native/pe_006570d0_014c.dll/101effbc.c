/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101effbc */

void __fastcall FUN_101effbc(int param_1,int *param_2,int param_3)

{
  if (param_3 == 3) {
    *param_2 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc) +
               *(int *)(param_1 + 4);
    param_2[1] = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc) +
                 *(int *)(param_1 + 8);
    param_2[2] = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14) +
                 *(int *)(param_1 + 0x10);
    return;
  }
  if (param_3 != 2) {
    if (param_3 == 1) {
      *param_2 = *(int *)(param_1 + 4);
      return;
    }
    *param_2 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c) +
               *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14) +
               *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4);
    param_2[1] = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c) +
                 *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) +
                 *(int *)(param_1 + 0xc) + *(int *)(param_1 + 8);
    param_2[2] = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) +
                 *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) +
                 *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10);
    param_2[3] = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) +
                 *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28) +
                 *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20);
    return;
  }
  *param_2 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc);
  param_2[1] = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
  return;
}

