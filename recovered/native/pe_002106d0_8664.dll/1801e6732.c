/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e6732 */

uint FUN_1801e6732(longlong param_1,uint param_2,uint param_3)

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
    if ((uVar4 & 1) == 0) goto LAB_1801e679f;
    uVar3 = FUN_1801e6871(lVar5 + 0x50,*(undefined4 *)(lVar5 + 0x4c));
    if ((uVar4 & 8) == 0) {
      if ((int)uVar3 < 0x30) {
        uVar2 = (int)(uVar3 + 0x40) >> 1;
        goto LAB_1801e684c;
      }
      if (uVar3 < 0x80) {
        uVar2 = uVar3 + 0x16 & 0xc0;
        goto LAB_1801e684c;
      }
    }
    else {
      uVar2 = 0x40;
      if ((int)uVar3 < 0x40) goto LAB_1801e684c;
    }
    uVar2 = uVar3 + 0x20;
  }
  else {
    if ((uVar4 & 2) == 0) {
LAB_1801e679f:
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
          goto LAB_1801e684c;
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
      goto LAB_1801e684c;
    }
    iVar1 = FUN_1801e6871(lVar5 + 0x50,*(undefined4 *)(lVar5 + 0x4c));
    uVar2 = 0x40;
    if (iVar1 < 0x40) goto LAB_1801e684c;
    uVar2 = iVar1 + 0x10;
  }
  uVar2 = uVar2 & 0x7fffffc0;
LAB_1801e684c:
  uVar4 = -uVar2;
  if (-1 < (int)param_3) {
    uVar4 = uVar2;
  }
  return uVar4;
}

