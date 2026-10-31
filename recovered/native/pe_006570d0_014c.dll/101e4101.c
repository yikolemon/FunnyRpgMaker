/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4101 */

void __fastcall FUN_101e4101(int param_1,uint *param_2)

{
  if (6 < *param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0x84;
    return;
  }
  *(short *)(param_1 + 0x12a) = (short)*param_2;
  return;
}

