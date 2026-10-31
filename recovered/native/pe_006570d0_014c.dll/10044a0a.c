/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044a0a */

void __fastcall FUN_10044a0a(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar2 = *(int *)(param_1 + 0x10);
    FUN_10044a66(*(undefined4 *)(iVar2 + 0x10),param_1 + 0x14,iVar1);
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return;
}

