/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017a8b6 */

byte * FUN_14017a8b6(uint param_1,byte *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_38 [35];
  byte local_15 [5];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  if (param_1 == 0) {
    *param_2 = 0x30;
  }
  else {
    if ((int)param_1 < 0) {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
      param_1 = -param_1;
    }
    if (param_1 >> 0x10 != 0) {
      pbVar4 = local_15;
      uVar6 = (ulonglong)(param_1 >> 0x10);
      do {
        uVar8 = (uint)uVar6;
        *pbVar4 = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
        pbVar4 = pbVar4 + 1;
        uVar6 = uVar6 / 10;
      } while (9 < uVar8);
      for (; local_15 < pbVar4; pbVar4 = pbVar4 + -1) {
        *param_2 = pbVar4[-1];
        param_2 = param_2 + 1;
      }
    }
    if ((param_1 & 0xffff) == 0) goto LAB_14017a9f0;
    *param_2 = 0x2e;
    uVar8 = (param_1 & 0xffff) * 10 + 5;
    lVar1 = 0;
    do {
      lVar9 = lVar1;
      uVar5 = uVar8 >> 0x10;
      cVar2 = (char)(uVar8 >> 0x10);
      bVar3 = cVar2 + 0x30;
      param_2[lVar9 + 1] = bVar3;
      uVar7 = uVar8 & 0xffff;
      if (uVar7 == 0) {
        if (lVar9 != 4) goto LAB_14017a9cd;
        if (bVar3 != 0x31) goto LAB_14017a9c0;
        goto LAB_14017a9b7;
      }
      uVar8 = uVar7 * 10;
      lVar1 = lVar9 + 1;
    } while ((int)lVar1 != 5);
    if ((lVar1 == 5) && (uVar7 < 0x86b0)) {
      if (bVar3 != 0x31) {
        if (uVar7 == 0x4350) {
          if ((uVar5 & 1) != 0) {
LAB_14017a9c5:
            bVar3 = cVar2 + 0x2f;
            param_2[lVar9 + 1] = bVar3;
          }
        }
        else if (uVar7 < 0x4350) {
LAB_14017a9c0:
          if (uVar5 != 0) goto LAB_14017a9c5;
          goto LAB_14017a9d2;
        }
        goto LAB_14017a9cd;
      }
LAB_14017a9b7:
      param_2[lVar9 + 1] = 0x30;
    }
    else {
LAB_14017a9cd:
      if (bVar3 != 0x30) {
        param_2 = param_2 + lVar9 + 1;
        goto LAB_14017a9ed;
      }
    }
LAB_14017a9d2:
    param_2 = param_2 + lVar9 + 1;
    do {
      *param_2 = 0;
      pbVar4 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (*pbVar4 == 0x30);
  }
LAB_14017a9ed:
  param_2 = param_2 + 1;
LAB_14017a9f0:
  if (DAT_140f17b40 != (local_10 ^ (ulonglong)auStack_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
  }
  return param_2;
}

