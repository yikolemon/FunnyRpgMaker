/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011630c */

void FUN_1011630c(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_1039d74c;
  if ((((*(byte *)(DAT_1039d74c + 0x27b4) & 8) != 0) &&
      (FUN_100f99e6("[popup] ClosePopupToLevel(%d), restore_under=%d\n",param_1,param_2),
      (*(byte *)(iVar1 + 0x27b4) & 8) != 0)) && (iVar4 = *(int *)(iVar1 + 0x1fbc), param_1 < iVar4))
  {
    iVar5 = param_1 * 0x28 + 4;
    iVar3 = param_1;
    do {
      if ((*(byte *)(iVar1 + 0x27b4) & 8) != 0) {
        iVar4 = *(int *)(*(int *)(iVar1 + 0x1fc4) + iVar5);
        if (iVar4 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar4 + 4);
        }
        FUN_100f99e6("[popup] - Closing PopupID 0x%08X Window \"%s\"\n",
                     *(undefined4 *)(*(int *)(iVar1 + 0x1fc4) + -4 + iVar5),uVar2);
        iVar4 = *(int *)(iVar1 + 0x1fbc);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < iVar4);
  }
  iVar4 = *(int *)(iVar1 + 0x1fc0);
  iVar3 = *(int *)(*(int *)(iVar1 + 0x1fc4) + 4 + param_1 * 0x28);
  iVar5 = *(int *)(*(int *)(iVar1 + 0x1fc4) + 8 + param_1 * 0x28);
  if (iVar4 < param_1) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    uVar2 = FUN_100fa1fa(iVar4 * 0x28);
    if (*(int *)(iVar1 + 0x1fc4) != 0) {
      FUN_1025b2d0(uVar2,*(int *)(iVar1 + 0x1fc4),*(int *)(iVar1 + 0x1fbc) * 0x28);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x1fc4));
    }
    *(undefined4 *)(iVar1 + 0x1fc4) = uVar2;
    *(int *)(iVar1 + 0x1fc0) = iVar4;
  }
  *(int *)(iVar1 + 0x1fbc) = param_1;
  if ((param_2 != '\0') && (iVar3 != 0)) {
    if ((*(byte *)(iVar3 + 0xf) & 0x10) != 0) {
      iVar5 = *(int *)(iVar3 + 0x3a0);
    }
    if ((iVar5 == 0) || (*(char *)(iVar5 + 0xfa) != '\0')) {
      FUN_101034e2(iVar5,*(int *)(iVar1 + 0x2050) == 0);
    }
    else {
      FUN_10107908(iVar3,0,0,1);
    }
  }
  return;
}

