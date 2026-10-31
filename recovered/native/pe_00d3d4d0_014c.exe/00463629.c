/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463629 */

void __fastcall FUN_00463629(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00462cbd(param_1);
  if (uVar1 < param_2) {
    FUN_00461f8a(*(int **)(param_1 + 4),0xa1);
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2 * -8;
  return;
}

