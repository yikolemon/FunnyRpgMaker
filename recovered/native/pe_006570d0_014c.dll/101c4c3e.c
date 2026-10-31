/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4c3e */

void FUN_101c4c3e(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_101c0017(*(undefined4 *)(param_1 + 0x1c),*param_2);
  }
  *param_2 = 0;
  return;
}

