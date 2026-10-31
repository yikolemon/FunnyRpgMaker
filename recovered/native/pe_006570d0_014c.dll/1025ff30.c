/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025ff30 */

void __fastcall FUN_1025ff30(int param_1)

{
  if ((*(uint *)(param_1 + 0x1c) >> 5 & 1) != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x80;
  }
  FUN_10262180(0);
  return;
}

