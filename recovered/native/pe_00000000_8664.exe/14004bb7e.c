/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004bb7e */

longlong *
FUN_14004bb7e(longlong *param_1,byte *param_2,longlong param_3,ulonglong param_4,int param_5,
             uint param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar6 = param_4 >> 0x20;
  uVar5 = 9;
  uVar11 = (uint)param_4;
  if ((((uVar11 < 100000000) && (uVar5 = 8, uVar11 < 10000000)) && (uVar5 = 7, uVar11 < 1000000)) &&
     (((uVar5 = 6, uVar11 < 100000 && (uVar5 = 5, uVar11 < 10000)) &&
      ((uVar5 = 4, uVar11 < 1000 && (uVar5 = 3, uVar11 < 100)))))) {
    uVar5 = (ulonglong)(2 - (uVar11 < 10));
  }
  uVar3 = (uint)uVar5;
  uVar2 = (uint)(param_4 >> 0x20);
  uVar13 = uVar3 + uVar2;
  if (param_5 == 3) {
    if (9 < uVar13 + 3) goto LAB_14004bc87;
  }
  else if (param_5 != 2) {
    if (param_5 == 0) {
      iVar1 = -3 - uVar3;
      if (uVar3 == 1) {
        iVar1 = -3;
      }
      if ((int)uVar2 <= (int)(uVar3 == 1 ^ 5) && iVar1 <= (int)uVar2) goto LAB_14004bc51;
    }
LAB_14004bc87:
    uVar6 = (ulonglong)((uVar3 - (uVar3 < 2)) + 5);
    if (param_3 - (longlong)param_2 < (longlong)uVar6) goto LAB_14004be07;
    uVar10 = 0;
    if (9999 < uVar11) {
      do {
        uVar11 = (uint)param_4;
        uVar9 = param_4 & 0xffffffff;
        param_4 = uVar9 / 10000;
        uVar12 = (int)(uVar9 / 10000) * -10000 + uVar11;
        *(undefined2 *)(param_2 + (uVar5 - uVar10) + -1) =
             *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)(uVar12 % 100) * 2);
        *(undefined2 *)(param_2 + (uVar5 - uVar10) + -3) =
             *(undefined2 *)(&DAT_1401cdb00 + ((ulonglong)uVar12 / 100) * 2);
        uVar12 = (int)uVar10 + 4;
        uVar10 = (ulonglong)uVar12;
      } while (99999999 < uVar11);
      uVar10 = (ulonglong)uVar12;
    }
    uVar12 = (uint)param_4;
    uVar11 = uVar12;
    if (99 < uVar12) {
      uVar11 = (uVar12 & 0xffff) / 100;
      *(undefined2 *)(param_2 + ~uVar10 + uVar5) =
           *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)(uVar12 + uVar11 * -100 & 0xffff) * 2);
    }
    if (uVar11 < 10) {
      bVar7 = (byte)uVar11 | 0x30;
    }
    else {
      bVar7 = (&DAT_1401cdb00)[(ulonglong)uVar11 * 2];
      param_2[2] = (&DAT_1401cdb01)[(ulonglong)uVar11 * 2];
    }
    *param_2 = bVar7;
    uVar11 = 1;
    if (1 < uVar3) {
      param_2[1] = 0x2e;
      uVar11 = uVar3 + 1;
    }
    param_2[uVar11] = 0x65;
    if ((int)uVar13 < 1) {
      param_2[(longlong)(int)uVar11 + 1] = 0x2d;
      uVar13 = 1 - uVar13;
    }
    else {
      uVar13 = (uVar3 + uVar2) - 1;
      param_2[(longlong)(int)uVar11 + 1] = 0x2b;
    }
    *(undefined2 *)(param_2 + (longlong)(int)uVar11 + 2) =
         *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)uVar13 * 2);
    *param_1 = (longlong)(param_2 + uVar6);
    goto LAB_14004bf4e;
  }
LAB_14004bc51:
  if ((longlong)param_4 < 0) {
    if ((int)uVar13 < 1) {
      uVar3 = 2 - uVar2;
    }
    else {
      uVar3 = uVar3 + 1;
    }
  }
  else {
    uVar3 = uVar13;
    if (uVar11 == 1) {
      uVar3 = uVar13 - (byte)(&DAT_1401cf1b0)[uVar6];
    }
  }
  uVar10 = (ulonglong)uVar3;
  if (param_3 - (longlong)param_2 < (longlong)uVar10) {
LAB_14004be07:
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    return param_1;
  }
  uVar9 = uVar10;
  if (uVar2 != 0 && -1 < (longlong)param_4) {
    if (10 < uVar2) {
LAB_14004be3b:
      FUN_14004b45a(param_1,param_2,param_3,param_6 | 0x800000,param_7 + -0x96);
      return param_1;
    }
    iVar1 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    uVar9 = uVar5;
    if (*(uint *)(&DAT_1401cf1e0 + uVar6 * 4) < uVar11 >> ((byte)iVar1 & 0x1f)) goto LAB_14004be3b;
  }
  pbVar4 = param_2 + uVar9;
  uVar9 = param_4;
  uVar8 = param_4;
  if (9999 < uVar11) {
    do {
      uVar11 = (uint)uVar8;
      uVar9 = (uVar8 & 0xffffffff) / 10000;
      uVar3 = (int)((uVar8 & 0xffffffff) / 10000) * -10000 + uVar11;
      *(undefined2 *)(pbVar4 + -2) = *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)(uVar3 % 100) * 2);
      *(undefined2 *)(pbVar4 + -4) = *(undefined2 *)(&DAT_1401cdb00 + ((ulonglong)uVar3 / 100) * 2);
      pbVar4 = pbVar4 + -4;
      uVar8 = uVar9;
    } while (99999999 < uVar11);
  }
  uVar11 = (uint)uVar9;
  if (99 < uVar11) {
    uVar3 = (uVar11 & 0xffff) / 100;
    *(undefined2 *)(pbVar4 + -2) =
         *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)(uVar11 + uVar3 * -100 & 0xffff) * 2);
    pbVar4 = pbVar4 + -2;
    uVar9 = (ulonglong)uVar3;
  }
  if ((uint)uVar9 < 10) {
    pbVar4[-1] = (byte)uVar9 | 0x30;
  }
  else {
    *(undefined2 *)(pbVar4 + -2) = *(undefined2 *)(&DAT_1401cdb00 + (uVar9 & 0xffffffff) * 2);
  }
  if (uVar2 == 0 || (longlong)param_4 < 0) {
    if (uVar6 != 0) {
      if ((int)uVar13 < 1) {
        param_2[0] = 0x30;
        param_2[1] = 0x2e;
        if (uVar13 != 0) {
          uVar6 = (ulonglong)-uVar13;
          pbVar4 = param_2 + 2;
          goto LAB_14004bf43;
        }
      }
      else {
        FUN_1401c5180(param_2,param_2 + 1,(ulonglong)uVar13);
        param_2[uVar13] = 0x2e;
      }
    }
  }
  else {
    pbVar4 = param_2 + uVar5;
LAB_14004bf43:
    thunk_FUN_1401c5830(pbVar4,CONCAT71((int7)(uVar5 >> 8),0x30),uVar6);
  }
  *param_1 = (longlong)(param_2 + uVar10);
LAB_14004bf4e:
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}

