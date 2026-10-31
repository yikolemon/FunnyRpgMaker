/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111b0e */

int __fastcall FUN_10111b0e(int param_1,char param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x3a8);
    if (param_2 != '\0') {
      iVar1 = *(int *)(iVar1 + 0x3ac);
    }
    if (param_3 != '\0') {
      iVar1 = *(int *)(iVar1 + 0x3b0);
    }
    bVar2 = param_1 != iVar1;
    param_1 = iVar1;
  } while (bVar2);
  return iVar1;
}

