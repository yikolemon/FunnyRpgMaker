/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b0d8 */

void FUN_18011b0d8(int param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = DAT_180419160;
  if ((*(byte *)(DAT_180419160 + 0x2acc) & 8) != 0) {
    FUN_1800fdfea("[popup] ClosePopupToLevel(%d), restore_under=%d\n",param_1,param_2);
    if ((*(byte *)(lVar2 + 0x2acc) & 8) != 0) {
      iVar4 = *(int *)(lVar2 + 0x2148);
      if (param_1 < iVar4) {
        lVar5 = (longlong)param_1;
        lVar6 = lVar5 * 0x38 + 8;
        do {
          if ((*(byte *)(lVar2 + 0x2acc) & 8) != 0) {
            lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x2150) + lVar6);
            if (lVar1 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined8 *)(lVar1 + 8);
            }
            FUN_1800fdfea("[popup] - Closing PopupID 0x%08X Window \"%s\"\n",
                          *(undefined4 *)(*(longlong *)(lVar2 + 0x2150) + -8 + lVar6),uVar3);
            iVar4 = *(int *)(lVar2 + 0x2148);
          }
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 0x38;
        } while (lVar5 < iVar4);
      }
    }
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x2150) + 8 + (longlong)param_1 * 0x38);
  lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x2150) + 0x10 + (longlong)param_1 * 0x38);
  iVar4 = *(int *)(lVar2 + 0x214c);
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
    uVar3 = FUN_1800fe7f8((longlong)iVar4 * 0x38);
    if (*(longlong *)(lVar2 + 0x2150) != 0) {
      FUN_1802a82f0(uVar3,*(longlong *)(lVar2 + 0x2150),(longlong)*(int *)(lVar2 + 0x2148) * 0x38);
      FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2150));
    }
    *(undefined8 *)(lVar2 + 0x2150) = uVar3;
    *(int *)(lVar2 + 0x214c) = iVar4;
  }
  *(int *)(lVar2 + 0x2148) = param_1;
  if ((param_2 != '\0') && (lVar5 != 0)) {
    if ((*(byte *)(lVar5 + 0x17) & 0x10) != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x408);
    }
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10a) == '\0')) {
      FUN_18010c613(lVar5,0,0,1);
      return;
    }
    FUN_1801080ec(lVar6,*(int *)(lVar2 + 0x220c) == 0);
    return;
  }
  return;
}

