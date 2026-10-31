/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101edf56 */

void __fastcall FUN_101edf56(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  FUN_101c0017(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(param_1 + 0x318));
  *(undefined4 *)(param_1 + 0x318) = 0;
  FUN_101c4c3e(iVar1,param_1 + 0x308);
  return;
}

