/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fc09e */

void __thiscall FUN_100fc09e(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < param_3) {
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == *(int *)(iVar1 + 0x14)) {
      if (iVar2 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar2 / 2 + iVar2;
      }
      iVar4 = iVar2 + 1;
      if (iVar2 + 1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = FUN_100fa1fa(iVar4 * 0xc);
      if (*(int *)(iVar1 + 0x18) != 0) {
        FUN_1025b2d0(iVar3,*(int *)(iVar1 + 0x18),*(int *)(iVar1 + 0x10) * 0xc);
        FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x18));
      }
      *(int *)(iVar1 + 0x18) = iVar3;
      *(int *)(iVar1 + 0x14) = iVar4;
      iVar2 = *(int *)(iVar1 + 0x10);
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x18);
    }
    *(int *)(iVar3 + iVar2 * 0xc) = param_2;
    *(int *)(iVar3 + 4 + iVar2 * 0xc) = param_3;
    *(undefined2 *)(iVar3 + 8 + iVar2 * 0xc) = 0;
    *(undefined1 *)(iVar3 + 10 + iVar2 * 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  }
  return;
}

