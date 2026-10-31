/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0415 */

void __fastcall FUN_101c0415(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30) * 0x20;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  return;
}

