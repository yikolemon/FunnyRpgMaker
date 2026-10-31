/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000d575 */

longlong *
FUN_14000d575(longlong *param_1,byte *param_2,undefined1 (*param_3) [32],ulonglong param_4,
             int param_5,uint param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 (*pauVar5) [32];
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar7 = param_4 >> 0x20;
  uVar6 = 9;
  uVar13 = (uint)param_4;
  if ((((uVar13 < 100000000) && (uVar6 = 8, uVar13 < 10000000)) && (uVar6 = 7, uVar13 < 1000000)) &&
     (((uVar6 = 6, uVar13 < 100000 && (uVar6 = 5, uVar13 < 10000)) &&
      ((uVar6 = 4, uVar13 < 1000 && (uVar6 = 3, uVar13 < 100)))))) {
    uVar6 = 2 - (uVar13 < 10);
  }
  iVar2 = (int)(param_4 >> 0x20);
  uVar14 = uVar6 + iVar2;
  if (param_5 == 3) {
    if (9 < uVar14 + 3) goto LAB_14000d67e;
  }
  else if (param_5 != 2) {
    if (param_5 == 0) {
      iVar1 = -3 - uVar6;
      if (uVar6 == 1) {
        iVar1 = -3;
      }
      if (iVar2 <= (int)(uVar6 == 1 ^ 5) && iVar1 <= iVar2) goto LAB_14000d648;
    }
LAB_14000d67e:
    uVar7 = (ulonglong)((uVar6 - (uVar6 < 2)) + 5);
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar7) goto LAB_14000d7fe;
    uVar9 = 0;
    if (9999 < uVar13) {
      do {
        uVar13 = (uint)param_4;
        uVar12 = param_4 & 0xffffffff;
        param_4 = uVar12 / 10000;
        uVar3 = (int)(uVar12 / 10000) * -10000 + uVar13;
        lVar10 = uVar6 - uVar9;
        *(undefined2 *)(param_2 + lVar10 + -1) =
             *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar3 % 100) * 2);
        *(undefined2 *)(param_2 + lVar10 + -3) =
             *(undefined2 *)(&DAT_1400b7520 + ((ulonglong)uVar3 / 100) * 2);
        uVar3 = (int)uVar9 + 4;
        uVar9 = (ulonglong)uVar3;
      } while (99999999 < uVar13);
      uVar9 = (ulonglong)uVar3;
    }
    uVar3 = (uint)param_4;
    uVar13 = uVar3;
    if (99 < uVar3) {
      uVar13 = (uVar3 & 0xffff) / 100;
      *(undefined2 *)(param_2 + ~uVar9 + (ulonglong)uVar6) =
           *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar3 + uVar13 * -100 & 0xffff) * 2);
    }
    if (uVar13 < 10) {
      bVar8 = (byte)uVar13 | 0x30;
    }
    else {
      bVar8 = (&DAT_1400b7520)[(ulonglong)uVar13 * 2];
      param_2[2] = (&DAT_1400b7521)[(ulonglong)uVar13 * 2];
    }
    *param_2 = bVar8;
    uVar9 = 1;
    if (1 < uVar6) {
      param_2[1] = 0x2e;
      uVar9 = (ulonglong)(uVar6 + 1);
    }
    param_2[uVar9] = 0x65;
    lVar10 = (longlong)(int)uVar9;
    if ((int)uVar14 < 1) {
      param_2[lVar10 + 1] = 0x2d;
      uVar14 = 1 - uVar14;
    }
    else {
      uVar14 = (uVar6 + iVar2) - 1;
      param_2[lVar10 + 1] = 0x2b;
    }
    *(undefined2 *)(param_2 + lVar10 + 2) = *(undefined2 *)(&DAT_1400b7520 + (ulonglong)uVar14 * 2);
    *param_1 = (longlong)(param_2 + uVar7);
    goto LAB_14000d945;
  }
LAB_14000d648:
  if ((longlong)param_4 < 0) {
    if ((int)uVar14 < 1) {
      uVar3 = 2 - iVar2;
    }
    else {
      uVar3 = uVar6 + 1;
    }
  }
  else {
    uVar3 = uVar14;
    if (uVar13 == 1) {
      uVar3 = uVar14 - (byte)(&DAT_1400b7870)[uVar7];
    }
  }
  uVar9 = (ulonglong)uVar3;
  if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar9) {
LAB_14000d7fe:
    *param_1 = (longlong)param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    return param_1;
  }
  uVar12 = uVar9;
  if (iVar2 != 0 && -1 < (longlong)param_4) {
    if (0xaffffffff < param_4) {
LAB_14000d832:
      FUN_14000ce51(param_1,param_2,param_3,param_6 | 0x800000,param_7 - 0x96);
      return param_1;
    }
    iVar1 = 0;
    if (uVar13 != 0) {
      for (; (uVar13 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    if (*(uint *)(&DAT_1400b78a0 + uVar7 * 4) < uVar13 >> ((byte)iVar1 & 0x1f)) goto LAB_14000d832;
    uVar12 = (ulonglong)uVar6;
  }
  pbVar4 = param_2 + uVar12;
  uVar12 = param_4;
  uVar11 = param_4;
  if (9999 < uVar13) {
    do {
      uVar13 = (uint)uVar11;
      uVar12 = (uVar11 & 0xffffffff) / 10000;
      uVar3 = (int)((uVar11 & 0xffffffff) / 10000) * -10000 + uVar13;
      *(undefined2 *)(pbVar4 + -2) = *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar3 % 100) * 2);
      *(undefined2 *)(pbVar4 + -4) = *(undefined2 *)(&DAT_1400b7520 + ((ulonglong)uVar3 / 100) * 2);
      pbVar4 = pbVar4 + -4;
      uVar11 = uVar12;
    } while (99999999 < uVar13);
  }
  uVar3 = (uint)uVar12;
  uVar13 = uVar3;
  if (99 < uVar3) {
    uVar13 = (uVar3 & 0xffff) / 100;
    *(undefined2 *)(pbVar4 + -2) =
         *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar3 + uVar13 * -100 & 0xffff) * 2);
    pbVar4 = pbVar4 + -2;
  }
  if (uVar13 < 10) {
    pbVar4[-1] = (byte)uVar13 | 0x30;
  }
  else {
    *(undefined2 *)(pbVar4 + -2) = *(undefined2 *)(&DAT_1400b7520 + (ulonglong)uVar13 * 2);
  }
  if (iVar2 == 0 || (longlong)param_4 < 0) {
    if (uVar7 != 0) {
      if ((int)uVar14 < 1) {
        param_2[0] = 0x30;
        param_2[1] = 0x2e;
        if (uVar14 != 0) {
          uVar7 = (ulonglong)-uVar14;
          pauVar5 = (undefined1 (*) [32])(param_2 + 2);
          goto LAB_14000d93a;
        }
      }
      else {
        FUN_1400b3550((undefined8 *)param_2,(undefined8 *)(param_2 + 1),(ulonglong)uVar14);
        param_2[uVar14] = 0x2e;
      }
    }
  }
  else {
    pauVar5 = (undefined1 (*) [32])(param_2 + uVar6);
LAB_14000d93a:
    thunk_FUN_1400b3c00(pauVar5,0x30,uVar7);
  }
  *param_1 = (longlong)(param_2 + uVar9);
LAB_14000d945:
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}

