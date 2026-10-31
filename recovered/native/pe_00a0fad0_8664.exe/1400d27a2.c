/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d27a2 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1400d27a2(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong *puVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  byte bVar24;
  undefined1 local_8a58 [40];
  longlong local_8a30;
  ushort auStack_8a28 [16];
  undefined4 local_8a08;
  ushort local_8208 [256];
  ulonglong local_8008;
  int local_8000;
  undefined4 local_7ffc;
  byte abStack_7fdc [4];
  uint local_7fd8 [4084];
  ulonglong auStack_4008 [6];
  uint auStack_3fd8 [4068];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)local_8a58;
  local_8a30 = param_2;
  FUN_1400d2707(&local_8008,param_1,1);
  iVar5 = FUN_1400d2cbf(&local_8008,6);
  uVar6 = FUN_1400d2cbf(&local_8008,iVar5 + 1);
  iVar5 = FUN_1400d2cbf(&local_8008,6);
  FUN_1400d2cbf(&local_8008,iVar5 + 1);
  iVar5 = FUN_1400d2cbf(&local_8008,3);
  FUN_1400d2cbf(&local_8008,1);
  local_8208[0] =
       FUN_1400d2cbf(&local_8008,CONCAT31((int3)((uint)(iVar5 * 2) >> 8),(char)(iVar5 * 2) + '\x02')
                    );
  lVar21 = 0;
  do {
    FUN_1400d2cbf(&local_8008,3);
    cVar3 = FUN_1400d2cbf(&local_8008,1);
    sVar4 = FUN_1400d2cbf(&local_8008);
    if (cVar3 == '\x01') {
      uVar7 = local_8208[lVar21] - sVar4;
    }
    else {
      uVar7 = sVar4 + local_8208[lVar21];
    }
    local_8208[lVar21 + 1] = uVar7;
    lVar21 = lVar21 + 1;
  } while (lVar21 != 0xff);
  lVar21 = FUN_1400d2795(&local_8008);
  if (local_8a30 != 0) {
    puVar9 = local_7fd8 + 2;
    lVar10 = 0;
    do {
      *(ulonglong *)(puVar9 + -0xe) = (ulonglong)local_8208[lVar10];
      *puVar9 = 0xffffffff;
      puVar9[-2] = 0xffffffff;
      puVar9[-1] = 0xffffffff;
      lVar10 = lVar10 + 1;
      puVar9 = puVar9 + 0x10;
    } while (lVar10 != 0x1ff);
    iVar5 = 0x100;
    lVar10 = 0x100;
    do {
      uVar16 = 0;
      uVar8 = 0xffffffff;
      iVar11 = 0;
      puVar19 = &local_8008;
      uVar23 = 0xffffffff;
      do {
        if ((int)puVar19[6] == -1) {
          iVar11 = iVar11 + 1;
          uVar2 = uVar16;
          if (uVar8 == 0xffffffff) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = uVar8;
            if ((((&local_8008)[(longlong)(int)uVar8 * 8] <= *puVar19) &&
                (uVar2 = uVar8, uVar14 = uVar16, uVar23 != 0xffffffff)) &&
               ((&local_8008)[(longlong)(int)uVar23 * 8] <= *puVar19)) goto LAB_1400d291c;
          }
        }
        else {
LAB_1400d291c:
          uVar2 = uVar8;
          uVar14 = uVar23;
        }
        uVar8 = uVar2;
        puVar19 = puVar19 + 8;
        uVar16 = uVar16 + 1;
        uVar23 = uVar14;
      } while (iVar11 < iVar5);
      local_7fd8[lVar10 * 0x10] = 0xffffffff;
      lVar20 = (longlong)(int)uVar8;
      lVar15 = (longlong)(int)uVar14;
      (&local_8008)[lVar10 * 8] = (&local_8008)[lVar15 * 8] + (&local_8008)[lVar20 * 8];
      local_7fd8[lVar10 * 0x10 + 1] = uVar8;
      local_7fd8[lVar10 * 0x10 + 2] = uVar14;
      pbVar13 = abStack_7fdc + lVar20 * 0x40;
      pbVar13[0] = 0;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      pbVar13 = abStack_7fdc + lVar15 * 0x40;
      pbVar13[0] = 1;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      local_7fd8[lVar20 * 0x10] = (uint)lVar10;
      local_7fd8[lVar15 * 0x10] = (uint)lVar10;
      lVar10 = lVar10 + 1;
      iVar5 = iVar5 + -1;
    } while (lVar10 != 0x1ff);
    lVar10 = 0;
    do {
      (&local_8000)[lVar10 * 0x10] = 0;
      local_8a08._0_1_ = 0;
      uVar23 = local_7fd8[lVar10 * 0x10];
      if (uVar23 == 0xffffffff) {
        *(undefined1 *)(&local_7ffc + lVar10 * 0x10) = 0;
        iVar5 = 0;
        uVar17 = 0;
LAB_1400d2ab0:
        bVar24 = 0;
        iVar11 = 0;
        iVar12 = 0;
        do {
          if (iVar11 == 8) {
            *(undefined1 *)((longlong)&local_7ffc + (longlong)iVar12 + lVar10 * 0x40 + 1) = 0;
            lVar15 = (longlong)iVar12 + 1;
            bVar24 = 0;
            iVar12 = (int)lVar15;
            iVar11 = 0;
          }
          else {
            lVar15 = (longlong)iVar12;
          }
          bVar1 = *(byte *)((longlong)&local_8a08 + uVar17);
          bVar24 = (byte)((bVar1 & 1) << ((byte)iVar11 & 0x1f)) | bVar24;
          *(byte *)((longlong)&local_7ffc + lVar15 + lVar10 * 0x40) = bVar24;
          *(byte *)((longlong)&local_8a08 + uVar17) = bVar1 >> 1;
          iVar18 = iVar5 + -1;
          iVar11 = iVar11 + 1;
          iVar5 = iVar18;
          if (iVar18 == 0) {
            iVar5 = 8;
          }
          uVar23 = (int)uVar17 - (uint)(iVar18 == 0);
          uVar17 = (ulonglong)uVar23;
        } while (-1 < (int)uVar23);
      }
      else {
        iVar5 = 0;
        bVar24 = 0;
        iVar11 = 0;
        uVar17 = 0;
        lVar15 = lVar10;
        do {
          iVar12 = (int)uVar17;
          if (iVar5 == 8) {
            *(undefined1 *)((longlong)&local_8a08 + (longlong)iVar12 + 1) = 0;
            uVar22 = (longlong)iVar12 + 1;
            iVar5 = 1;
            bVar24 = 0;
            uVar17 = uVar22 & 0xffffffff;
          }
          else {
            uVar22 = (ulonglong)iVar12;
            bVar24 = bVar24 * '\x02';
            iVar5 = iVar5 + 1;
          }
          bVar24 = bVar24 | abStack_7fdc[lVar15 * 0x40];
          *(byte *)((longlong)&local_8a08 + uVar22) = bVar24;
          iVar11 = iVar11 + 1;
          lVar15 = (longlong)(int)uVar23;
          uVar23 = local_7fd8[lVar15 * 0x10];
        } while (uVar23 != 0xffffffff);
        (&local_8000)[lVar10 * 0x10] = iVar11;
        *(undefined1 *)(&local_7ffc + lVar10 * 0x10) = 0;
        if (-1 < (int)uVar17) goto LAB_1400d2ab0;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x1fe);
    lVar10 = 0;
    do {
      auStack_8a28[lVar10] = (short)(2 << ((byte)lVar10 & 0x1f)) - 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 9);
    lVar10 = 0;
    do {
      (&local_8a08)[lVar10] = 0xffffffff;
      lVar15 = 0;
      puVar9 = &local_7ffc;
      do {
        if (((longlong)(int)puVar9[-1] < 10) &&
           (((*puVar9 ^ (uint)lVar10) & (uint)auStack_8a28[(longlong)(int)puVar9[-1] + -1]) == 0)) {
          (&local_8a08)[lVar10] = (int)lVar15;
          break;
        }
        lVar15 = lVar15 + 1;
        puVar9 = puVar9 + 0x10;
      } while (lVar15 != 0x1fe);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x200);
    if (uVar6 != 0) {
      pbVar13 = (byte *)(param_1 + lVar21);
      uVar23 = (uint)*pbVar13;
      iVar5 = 0;
      lVar21 = 0;
      uVar17 = 0;
      do {
        uVar22 = 0x1fe;
        if (uVar6 - 0x11 <= uVar17) goto LAB_1400d2c36;
        if (iVar5 == 8) {
          uVar23 = (uint)pbVar13[lVar21 + 1];
          lVar21 = lVar21 + 1;
          iVar5 = 0;
        }
        lVar10 = lVar21 + 1;
        uVar23 = ((uint)pbVar13[lVar10] << (8U - (char)iVar5 & 0x1f) | uVar23) & 0x1ff;
        uVar8 = (&local_8a08)[uVar23];
        uVar22 = (ulonglong)(int)uVar8;
        iVar5 = iVar5 + (&local_8000)[uVar22 * 0x10];
        if (iVar5 < 0x10) {
          if (iVar5 < 8) {
            uVar23 = uVar23 >> ((byte)(&local_8000)[uVar22 * 0x10] & 0x1f);
          }
          else {
            lVar21 = lVar21 + 1;
            iVar5 = iVar5 + -8;
            uVar23 = (uint)(pbVar13[lVar10] >> ((byte)iVar5 & 0x1f));
          }
        }
        else {
          iVar5 = iVar5 + -0x10;
          lVar10 = lVar21 + 2;
          lVar21 = lVar21 + 2;
          uVar23 = (uint)(pbVar13[lVar10] >> ((byte)iVar5 & 0x1f));
        }
        while (0xff < (int)uVar8) {
LAB_1400d2c36:
          if (iVar5 == 8) {
            uVar23 = (uint)pbVar13[lVar21 + 1];
            lVar21 = lVar21 + 1;
            iVar5 = 0;
          }
          uVar8 = uVar23 & 1;
          uVar23 = uVar23 >> 1;
          iVar5 = iVar5 + 1;
          uVar8 = local_7fd8[(uVar22 & 0xffffffff) * 0x10 + (ulonglong)uVar8 + 1];
          uVar22 = (ulonglong)uVar8;
        }
        *(char *)(local_8a30 + uVar17) = (char)uVar22;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar6);
    }
  }
  if (DAT_1401c9640 == (local_48 ^ (ulonglong)local_8a58)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)local_8a58);
}

