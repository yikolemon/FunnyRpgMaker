/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046343f */

void __fastcall FUN_0046343f(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00462cbd(param_1);
  if (param_2 < uVar1) {
    *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 8) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4 + param_2 * 8) = 0;
    return;
  }
  FUN_00461f8a(*(int **)(param_1 + 4),0x82);
  return;
}

