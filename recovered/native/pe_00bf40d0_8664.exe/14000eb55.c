/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000eb55 */

longlong *
FUN_14000eb55(longlong *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong *param_4,int param_5,ulonglong param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar10 = *param_4;
  uVar2 = (uint)param_4[1];
  uVar11 = (ulonglong)uVar2;
  uVar14 = 0x11;
  if (((((uVar10 < 10000000000000000) && (uVar14 = 0x10, uVar10 < 1000000000000000)) &&
       (uVar14 = 0xf, uVar10 < 100000000000000)) &&
      (((uVar14 = 0xe, uVar10 >> 0xd < 0x48c27395 && (uVar14 = 0xd, uVar10 >> 0xc < 0xe8d4a51)) &&
       ((uVar14 = 0xc, uVar10 >> 0xb < 0x2e90edd &&
        ((uVar14 = 0xb, uVar10 >> 10 < 0x9502f9 && (uVar14 = 10, uVar10 < 1000000000)))))))) &&
     ((uVar14 = 9, uVar10 < 100000000 &&
      (((((uVar14 = 8, uVar10 < 10000000 && (uVar14 = 7, uVar10 < 1000000)) &&
         (uVar14 = 6, uVar10 < 100000)) &&
        ((uVar14 = 5, uVar10 < 10000 && (uVar14 = 4, uVar10 < 1000)))) && (uVar14 = 3, uVar10 < 100)
       ))))) {
    uVar14 = 2 - (uVar10 < 10);
  }
  uVar12 = uVar2 + uVar14;
  iVar3 = (int)uVar10;
  if (param_5 == 3) {
    if (9 < uVar12 + 3) goto LAB_14000ed21;
  }
  else if (param_5 != 2) {
    if (param_5 == 0) {
      iVar1 = -3 - uVar14;
      if (uVar14 == 1) {
        iVar1 = -3;
      }
      if ((int)uVar2 <= (int)(uVar14 == 1 ^ 5) && iVar1 <= (int)uVar2) goto LAB_14000ecf0;
    }
LAB_14000ed21:
    uVar5 = (ulonglong)(((uVar14 + 6) - (uint)(uVar14 < 2)) - (uint)(uVar12 + 0x62 < 199));
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar5) goto LAB_14000efb2;
    uVar11 = (ulonglong)uVar14;
    if (uVar10 >> 0x20 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (int)(uVar10 / 100000000) * -100000000 + iVar3;
      iVar3 = uVar4 / 10000 + (uVar4 / 100000000) * -10000;
      uVar16 = (uint)(iVar3 * 0x147b) >> 0x13;
      *(undefined2 *)(param_2[-1] + uVar11 + 0x1f) =
           *(undefined2 *)(&DAT_1400b7520 + (ulonglong)((uVar4 % 10000) % 100) * 2);
      *(undefined2 *)(param_2[-1] + uVar11 + 0x1d) =
           *(undefined2 *)(&DAT_1400b7520 + (ulonglong)((uVar4 % 10000) / 100) * 2);
      *(undefined2 *)(param_2[-1] + uVar11 + 0x1b) =
           *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(iVar3 + uVar16 * -100 & 0xffff) * 2);
      *(undefined2 *)(param_2[-1] + uVar11 + 0x19) =
           *(undefined2 *)(&DAT_1400b7520 + (ulonglong)uVar16 * 2);
      uVar4 = 8;
      uVar10 = uVar10 / 100000000 & 0xffffffff;
    }
    uVar16 = (uint)uVar10;
    if (9999 < uVar16) {
      do {
        uVar17 = (uint)uVar10;
        uVar6 = uVar10 & 0xffffffff;
        uVar10 = uVar6 / 10000;
        uVar16 = (uint)uVar10;
        uVar15 = (int)(uVar6 / 10000) * -10000 + uVar17;
        *(undefined2 *)((longlong)param_2 + (uVar11 - uVar4) + -1) =
             *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar15 % 100) * 2);
        *(undefined2 *)((longlong)param_2 + (uVar11 - uVar4) + -3) =
             *(undefined2 *)(&DAT_1400b7520 + ((ulonglong)uVar15 / 100) * 2);
        uVar4 = uVar4 + 4;
      } while (99999999 < uVar17);
    }
    uVar17 = uVar16;
    if (99 < uVar16) {
      uVar17 = (uVar16 & 0xffff) / 100;
      *(undefined2 *)(*param_2 + ~(ulonglong)uVar4 + uVar11) =
           *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar16 + uVar17 * -100 & 0xffff) * 2);
    }
    if (uVar17 < 10) {
      bVar13 = (byte)uVar17 | 0x30;
    }
    else {
      bVar13 = (&DAT_1400b7520)[(ulonglong)uVar17 * 2];
      (*param_2)[2] = (&DAT_1400b7521)[(ulonglong)uVar17 * 2];
    }
    (*param_2)[0] = bVar13;
    uVar10 = 1;
    if (1 < uVar14) {
      (*param_2)[1] = 0x2e;
      uVar10 = (ulonglong)(uVar14 + 1);
    }
    (*param_2)[uVar10] = 0x65;
    lVar9 = (longlong)(int)uVar10;
    if ((int)uVar12 < 1) {
      (*param_2)[lVar9 + 1] = 0x2d;
      uVar12 = 1 - uVar12;
    }
    else {
      uVar12 = (uVar2 + uVar14) - 1;
      (*param_2)[lVar9 + 1] = 0x2b;
    }
    if (uVar12 < 100) {
      *(undefined2 *)(*param_2 + uVar10 + 2) =
           *(undefined2 *)(&DAT_1400b7520 + (ulonglong)uVar12 * 2);
    }
    else {
      uVar2 = (uVar12 / 10) * 2;
      *(undefined2 *)(*param_2 + uVar10 + 2) = *(undefined2 *)(&DAT_1400b7520 + uVar2);
      (*param_2)[lVar9 + 4] = (char)uVar12 + (char)uVar2 * -5 | 0x30;
    }
    goto LAB_14000f198;
  }
LAB_14000ecf0:
  if ((int)uVar2 < 0) {
    if ((int)uVar12 < 1) {
      uVar4 = 2 - uVar2;
    }
    else {
      uVar4 = uVar14 + 1;
    }
  }
  else {
    uVar4 = uVar12;
    if (uVar10 == 1) {
      uVar4 = uVar12 - (byte)(&DAT_1400b7a30)[uVar11];
    }
  }
  uVar5 = (ulonglong)uVar4;
  if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar5) {
LAB_14000efb2:
    *param_1 = (longlong)param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    return param_1;
  }
  uVar6 = uVar5;
  if (0 < (int)uVar2) {
    if (0x16 < uVar2) {
LAB_14000efeb:
      FUN_14000defc(param_1,param_2,param_3,param_6,0);
      return param_1;
    }
    lVar9 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
      }
    }
    bVar13 = (byte)lVar9;
    if (uVar10 == 0) {
      bVar13 = 0;
    }
    if (*(ulonglong *)(&DAT_1400b7b70 + uVar11 * 8) < uVar10 >> (bVar13 & 0x3f)) goto LAB_14000efeb;
    uVar6 = (ulonglong)uVar14;
  }
  puVar7 = *param_2 + uVar6;
  if (uVar10 >> 0x20 != 0) {
    uVar10 = uVar10 / 100000000;
    uVar4 = iVar3 + (int)uVar10 * -100000000;
    iVar3 = uVar4 / 10000 + (uVar4 / 100000000) * -10000;
    uVar16 = (uint)(iVar3 * 0x147b) >> 0x13;
    *(undefined2 *)(puVar7 + -2) =
         *(undefined2 *)(&DAT_1400b7520 + (ulonglong)((uVar4 % 10000) % 100) * 2);
    *(undefined2 *)(puVar7 + -4) =
         *(undefined2 *)(&DAT_1400b7520 + (ulonglong)((uVar4 % 10000) / 100) * 2);
    *(undefined2 *)(puVar7 + -6) =
         *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(iVar3 + uVar16 * -100 & 0xffff) * 2);
    *(undefined2 *)(puVar7 + -8) = *(undefined2 *)(&DAT_1400b7520 + (ulonglong)uVar16 * 2);
    puVar7 = puVar7 + -8;
  }
  uVar4 = (uint)uVar10;
  if (9999 < uVar4) {
    do {
      uVar16 = (uint)uVar10;
      uVar6 = uVar10 & 0xffffffff;
      uVar10 = uVar6 / 10000;
      uVar4 = (uint)uVar10;
      uVar17 = (int)(uVar6 / 10000) * -10000 + uVar16;
      *(undefined2 *)(puVar7 + -2) = *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar17 % 100) * 2)
      ;
      *(undefined2 *)(puVar7 + -4) = *(undefined2 *)(&DAT_1400b7520 + ((ulonglong)uVar17 / 100) * 2)
      ;
      puVar7 = puVar7 + -4;
    } while (99999999 < uVar16);
  }
  uVar16 = uVar4;
  if (99 < uVar4) {
    uVar16 = (uVar4 & 0xffff) / 100;
    *(undefined2 *)(puVar7 + -2) =
         *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar4 + uVar16 * -100 & 0xffff) * 2);
    puVar7 = puVar7 + -2;
  }
  if (uVar16 < 10) {
    puVar7[-1] = (byte)uVar16 | 0x30;
  }
  else {
    *(undefined2 *)(puVar7 + -2) = *(undefined2 *)(&DAT_1400b7520 + (ulonglong)uVar16 * 2);
  }
  if ((int)uVar2 < 1) {
    if (uVar11 == 0) goto LAB_14000f198;
    if (0 < (int)uVar12) {
      FUN_1400b3550((undefined8 *)param_2,(undefined8 *)(*param_2 + 1),(ulonglong)uVar12);
      (*param_2)[uVar12] = 0x2e;
      goto LAB_14000f198;
    }
    *(undefined2 *)*param_2 = 0x2e30;
    if (uVar12 == 0) goto LAB_14000f198;
    uVar11 = (ulonglong)-uVar12;
    pauVar8 = (undefined1 (*) [32])(*param_2 + 2);
  }
  else {
    pauVar8 = (undefined1 (*) [32])(*param_2 + uVar14);
  }
  thunk_FUN_1400b3c00(pauVar8,0x30,uVar11);
LAB_14000f198:
  *param_1 = (longlong)(*param_2 + uVar5);
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}

