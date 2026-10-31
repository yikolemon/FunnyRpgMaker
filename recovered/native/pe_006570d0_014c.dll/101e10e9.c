/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e10e9 */

void __fastcall FUN_101e10e9(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_101c0017(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

