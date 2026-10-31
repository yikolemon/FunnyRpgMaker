/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ea62c */

void __fastcall FUN_101ea62c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x35];
  uVar2 = *(undefined4 *)(*param_1 + 100);
  if (iVar1 != 0) {
    FUN_101c0017(uVar2,*(undefined4 *)(iVar1 + 0x1c));
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    FUN_101c0017(uVar2,*(undefined4 *)(iVar1 + 0x170));
    *(undefined4 *)(iVar1 + 0x170) = 0;
    FUN_101eae9d();
    param_1[0x35] = 0;
  }
  FUN_101eaf35();
  return;
}

