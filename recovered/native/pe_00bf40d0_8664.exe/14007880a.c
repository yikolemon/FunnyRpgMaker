/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007880a */

byte * FUN_14007880a(uint param_1,byte *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_38 [35];
  byte local_15 [5];
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  if (param_1 == 0) {
    *param_2 = 0x30;
  }
  else {
    if ((int)param_1 < 0) {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
      param_1 = -param_1;
    }
    uVar5 = param_1 >> 0x10;
    if (uVar5 != 0) {
      pbVar4 = local_15;
      do {
        *pbVar4 = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
        pbVar4 = pbVar4 + 1;
        bVar9 = 9 < uVar5;
        uVar5 = uVar5 / 10;
      } while (bVar9);
      for (; local_15 < pbVar4; pbVar4 = pbVar4 + -1) {
        *param_2 = pbVar4[-1];
        param_2 = param_2 + 1;
      }
    }
    if ((param_1 & 0xffff) == 0) goto LAB_140078944;
    *param_2 = 0x2e;
    lVar1 = 0;
    uVar5 = (param_1 & 0xffff) * 10 + 5;
    do {
      uVar7 = uVar5;
      lVar8 = lVar1;
      cVar2 = (char)(uVar7 >> 0x10);
      bVar3 = cVar2 + 0x30;
      param_2[lVar8 + 1] = bVar3;
      uVar6 = uVar7 & 0xffff;
      if (uVar6 == 0) {
        if (lVar8 != 4) goto LAB_140078921;
        if (bVar3 != 0x31) goto LAB_140078914;
        goto LAB_14007890b;
      }
      lVar1 = lVar8 + 1;
      uVar5 = uVar6 * 10;
    } while ((int)lVar1 != 5);
    if ((lVar1 == 5) && (uVar6 < 0x86b0)) {
      if (bVar3 != 0x31) {
        if (uVar6 == 0x4350) {
          if ((uVar7 >> 0x10 & 1) != 0) {
LAB_140078919:
            bVar3 = cVar2 + 0x2f;
            param_2[lVar8 + 1] = bVar3;
          }
        }
        else if (uVar6 < 0x4350) {
LAB_140078914:
          if (uVar7 >> 0x10 != 0) goto LAB_140078919;
          goto LAB_140078926;
        }
        goto LAB_140078921;
      }
LAB_14007890b:
      param_2[lVar8 + 1] = 0x30;
    }
    else {
LAB_140078921:
      if (bVar3 != 0x30) {
        param_2 = param_2 + lVar8 + 1;
        goto LAB_140078941;
      }
    }
LAB_140078926:
    param_2 = param_2 + lVar8 + 1;
    do {
      *param_2 = 0;
      pbVar4 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (*pbVar4 == 0x30);
  }
LAB_140078941:
  param_2 = param_2 + 1;
LAB_140078944:
  if (DAT_14012ea80 != (local_10 ^ (ulonglong)auStack_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_10 ^ (ulonglong)auStack_38);
  }
  return param_2;
}

