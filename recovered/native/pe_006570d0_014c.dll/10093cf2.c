/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093cf2 */

void __thiscall FUN_10093cf2(int param_1,ushort param_2)

{
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    param_2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 0x20))(param_2);
  }
  if (param_2 < 0x100) {
    FUN_1001f298(param_2);
  }
  else {
    FUN_1009470c(param_2);
  }
  return;
}

