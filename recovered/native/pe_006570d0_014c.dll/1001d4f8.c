/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d4f8 */

void __thiscall FUN_1001d4f8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_2 + 0x10) = iVar1;
  if (*(int *)(iVar1 + 0xc) != 0) {
    *(int *)(param_2 + 0xc) = *(int *)(iVar1 + 0xc);
    *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x10) = param_2;
    iVar1 = *(int *)(param_1 + 4);
  }
  *(int *)(iVar1 + 0xc) = param_2;
  *(int *)(param_1 + 4) = param_2;
  return;
}

