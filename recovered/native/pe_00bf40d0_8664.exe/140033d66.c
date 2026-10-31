/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140033d66 */

uint FUN_140033d66(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = *(uint *)(param_1 + 0x117c);
  if ((uVar4 & 4) == 0) {
    return param_3;
  }
  lVar5 = (ulonglong)param_2 * 0x1c4 + *(longlong *)(param_1 + 0x1180);
  uVar2 = -param_3;
  if ((int)-param_3 < 0) {
    uVar2 = param_3;
  }
  if (param_2 == 0) {
    if ((uVar4 & 1) == 0) goto LAB_140033dd3;
    uVar3 = FUN_140033ea5(lVar5 + 0x50,*(uint *)(lVar5 + 0x4c),uVar2);
    if ((uVar4 & 8) == 0) {
      if ((int)uVar3 < 0x30) {
        uVar2 = (int)(uVar3 + 0x40) >> 1;
        goto LAB_140033e80;
      }
      if (uVar3 < 0x80) {
        uVar2 = uVar3 + 0x16 & 0xc0;
        goto LAB_140033e80;
      }
    }
    else {
      uVar2 = 0x40;
      if ((int)uVar3 < 0x40) goto LAB_140033e80;
    }
    uVar2 = uVar3 + 0x20;
  }
  else {
    if ((uVar4 & 2) == 0) {
LAB_140033dd3:
      if (*(int *)(lVar5 + 0x4c) != 0) {
        uVar4 = *(uint *)(lVar5 + 0x54);
        uVar3 = uVar4 - uVar2;
        if ((int)uVar4 < (int)uVar2) {
          uVar3 = uVar2 - uVar4;
        }
        if (uVar3 < 0x28) {
          uVar2 = 0x30;
          if (0x30 < (int)uVar4) {
            uVar2 = uVar4;
          }
          goto LAB_140033e80;
        }
      }
      if (uVar2 < 0x36) {
        uVar2 = uVar2 + (0x36 - uVar2 >> 1);
      }
      else if ((uVar2 < 0xc0) && (uVar4 = uVar2 & 0x3f, 9 < uVar4)) {
        if (uVar4 < 0x16) {
          uVar2 = uVar2 & 0xc0 | 10;
        }
        else if (uVar4 - 0x2a < 0xc) {
          uVar2 = uVar2 & 0xc0 | 0x36;
        }
      }
      goto LAB_140033e80;
    }
    iVar1 = FUN_140033ea5(lVar5 + 0x50,*(uint *)(lVar5 + 0x4c),uVar2);
    uVar2 = 0x40;
    if (iVar1 < 0x40) goto LAB_140033e80;
    uVar2 = iVar1 + 0x10;
  }
  uVar2 = uVar2 & 0x7fffffc0;
LAB_140033e80:
  uVar4 = -uVar2;
  if (-1 < (int)param_3) {
    uVar4 = uVar2;
  }
  return uVar4;
}

