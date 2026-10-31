/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b59a */

int __fastcall FUN_1020b59a(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == *(int *)(param_1 + 8)) {
    FUN_1020a812();
    return 0;
  }
  *(int *)(param_1 + 0xc) = iVar1 + -8;
  iVar2 = *(int *)(iVar1 + -8);
  if (*(int *)(iVar1 + -4) == 1) {
    iVar2 = iVar2 + (iVar2 >> 0x1f) + 0x2000 >> 0xe;
  }
  else if (*(int *)(iVar1 + -4) == 2) {
    return iVar2 << 0x10;
  }
  return iVar2;
}

