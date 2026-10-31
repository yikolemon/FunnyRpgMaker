/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10040d0a */

void __fastcall FUN_10040d0a(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x24) < 0x10) {
    iVar1 = param_1 + 0x10;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  FUN_1001909c(iVar1,*(int *)(param_1 + 0x20) + iVar1);
  return;
}

