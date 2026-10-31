/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ea26a */

uint FUN_1801ea26a(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6
                  )

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar4 = *(uint *)(param_1 + 0x117c);
  if ((uVar4 & 4) == 0) {
    return param_3;
  }
  lVar6 = (ulonglong)param_2 * 0x204 + *(longlong *)(param_1 + 0x1180);
  if (*(char *)(lVar6 + 0x118) != '\0') {
    return param_3;
  }
  uVar5 = -param_3;
  if ((int)-param_3 < 0) {
    uVar5 = param_3;
  }
  if (param_2 == 0) {
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_1801e6871(lVar6 + 0x50,*(undefined4 *)(lVar6 + 0x4c),uVar5);
      if ((uVar4 & 8) == 0) {
        if ((int)uVar3 < 0x30) {
          uVar4 = (int)(uVar3 + 0x40) >> 1;
          goto LAB_1801ea46b;
        }
        if (uVar3 < 0x80) {
          uVar4 = uVar3 + 0x16 & 0xc0;
          uVar3 = uVar5 - uVar4;
          if ((int)uVar5 < (int)uVar4) {
            uVar3 = uVar4 - uVar5;
          }
          if ((0xf < uVar3) && (uVar4 = uVar5, uVar5 < 0x30)) {
            uVar4 = uVar5 >> 1 | 0x20;
          }
          goto LAB_1801ea46b;
        }
      }
      else {
        uVar4 = 0x40;
        if ((int)uVar3 < 0x40) goto LAB_1801ea46b;
      }
      uVar3 = uVar3 + 0x20;
      goto LAB_1801ea464;
    }
  }
  else {
    if ((uVar4 & 2) != 0) {
      iVar2 = FUN_1801e6871(lVar6 + 0x50,*(undefined4 *)(lVar6 + 0x4c),uVar5);
      uVar4 = 0x40;
      if (iVar2 < 0x40) goto LAB_1801ea46b;
      uVar3 = iVar2 + 0x10;
LAB_1801ea464:
      uVar4 = uVar3 & 0x7fffffc0;
      goto LAB_1801ea46b;
    }
    uVar4 = uVar5;
    if ((param_6 >> 1 & uVar5 < 0xc0) != 0) goto LAB_1801ea46b;
  }
  if ((param_5 & 1) == 0) {
    bVar7 = uVar5 < 0x39;
    uVar4 = 0x38;
  }
  else {
    bVar7 = uVar5 < 0x50;
    uVar4 = 0x40;
  }
  if (!bVar7) {
    uVar4 = uVar5;
  }
  if (*(int *)(lVar6 + 0x4c) == 0) goto LAB_1801ea46b;
  uVar5 = *(uint *)(lVar6 + 0x54);
  uVar3 = uVar5 - uVar4;
  if ((int)uVar5 < (int)uVar4) {
    uVar3 = uVar4 - uVar5;
  }
  if (uVar3 < 0x28) {
    uVar4 = 0x30;
    if (0x30 < (int)uVar5) {
      uVar4 = uVar5;
    }
    goto LAB_1801ea46b;
  }
  if (uVar4 < 0xc0) {
    uVar5 = uVar4 & 0x3f;
    if (9 < uVar5) {
      if (uVar5 < 0x20) {
        uVar4 = uVar4 & 0xc0 | 10;
      }
      else if (uVar5 < 0x36) {
        uVar4 = uVar4 & 0xc0 | 0x36;
      }
    }
    goto LAB_1801ea46b;
  }
  uVar5 = 0;
  if (0 < (int)param_4 && 0 < (int)param_3 || (int)(param_4 & param_3) < 0) {
    uVar1 = *(ushort *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1180) + 8) + 0x80) + 0x18);
    if (9 < uVar1) {
      if (0x1d < uVar1) goto LAB_1801ea421;
      param_4 = (int)(param_4 * (0x1e - uVar1 & 0xffff)) / 0x14;
    }
    uVar5 = -param_4;
    if ((int)-param_4 < 0) {
      uVar5 = param_4;
    }
  }
LAB_1801ea421:
  uVar4 = (uVar4 - uVar5) + 0x20 & 0xffffffc0;
LAB_1801ea46b:
  uVar5 = -uVar4;
  if (-1 < (int)param_3) {
    uVar5 = uVar4;
  }
  return uVar5;
}

