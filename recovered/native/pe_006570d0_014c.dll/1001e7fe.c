/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e7fe */

void __thiscall FUN_1001e7fe(int param_1,char param_2)

{
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    param_2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 0x10))((int)param_2);
  }
  FUN_1001f298(param_2);
  return;
}

