/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077effe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077effe(int param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  bool bVar5;
  
  uVar2 = _DAT_150b1c755;
  uVar4 = (ulonglong)_DAT_150b1c755;
  bVar5 = true;
  if ((unaff_RBX & 0x200) == 0) {
    if (*(int *)(uVar4 + 0x2050) != *(int *)((ulonglong)*(uint *)(uVar4 + 0x14cc) + 0x19c)) {
      return;
    }
    if (*(int *)(uVar4 + 0x204c) != *(int *)(uVar4 + 0x1e3c)) {
      return;
    }
    if ((param_2 & 1) == 0) {
      bVar5 = (param_2 & 0x100000) != 0 || (*(uint *)(uVar4 + 0x30) & 1) != 0;
    }
    else {
      bVar5 = false;
    }
  }
  iVar3 = _DAT_150b1c755 + 0x2120;
  iVar1 = *(int *)(uVar4 + 0x2118);
  if (iVar1 == -1) {
    if (*(int *)(uVar4 + 0x2044) == param_1) {
      if (*(int *)(uVar4 + 0x2124) != 0) {
        *(undefined1 *)(uVar4 + 0x20d9) = 0;
        *(undefined1 *)(uVar4 + 0x2099) = *(undefined1 *)(uVar4 + 0x209a);
      }
    }
    else if (bVar5) {
LAB_14077f107:
      FUN_14076a604(iVar3);
      return;
    }
  }
  else if (iVar1 == 0) {
    if (bVar5) {
      if (*(int *)(uVar4 + 0x2044) == param_1) {
        FUN_14076a415();
      }
      if (*(int *)(uVar4 + 0x21cc) == 0) {
        iVar3 = uVar2 + 0x21c8;
        goto LAB_14077f107;
      }
    }
  }
  else if (iVar1 == 1) {
    if (bVar5) {
      if (*(int *)(uVar4 + 0x21cc) == 0) {
        FUN_14076a604(_DAT_150b1c755 + 0x21c8);
      }
      uVar2 = *(uint *)(uVar4 + 0x211c);
      if ((0 < (int)uVar2) && (*(ulonglong *)(uVar4 + 0x211c) = (ulonglong)uVar2, uVar2 == 0)) {
        FUN_14076a415();
        return;
      }
    }
    if (*(int *)(uVar4 + 0x2044) == param_1) {
      *(undefined4 *)(uVar4 + 0x211c) = 1;
    }
  }
  return;
}

