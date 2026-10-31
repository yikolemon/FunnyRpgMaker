/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c07ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1400c07ac(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ushort uVar4;
  short sVar5;
  byte bVar6;
  short sVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auStack_58 [36];
  uint local_34;
  char local_30;
  byte local_2f [3];
  undefined4 local_2c;
  uint local_25;
  char local_21;
  ulonglong local_20;
  char cVar7;
  char cVar8;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_2f[0] = (byte)((uint)uVar2 >> 0x10);
  local_2f[1] = (char)((uint)uVar2 >> 8);
  local_2f[2] = (char)uVar2;
  uVar11 = (int)param_2[4] << 0xd ^ (int)param_2[4] * 0x45d9f3b;
  uVar18 = uVar11 >> 0x18 & _DAT_1401631a0;
  uVar19 = uVar11 >> 0x10 & _UNK_1401631a4;
  uVar20 = uVar11 >> 8 & _UNK_1401631a8;
  uVar21 = uVar11 & _UNK_1401631ac;
  uVar4 = (ushort)uVar18;
  bVar10 = (uVar4 != 0) * (uVar4 < 0x100) * (char)uVar18 - (0xff < uVar4);
  sVar5 = (short)uVar19;
  bVar6 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar19 - (0xff < sVar5);
  sVar5 = (short)uVar20;
  cVar7 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar20 - (0xff < sVar5);
  uVar4 = (ushort)(uVar20 >> 0x10);
  sVar9 = CONCAT11((uVar4 != 0) * (uVar4 < 0x100) * (char)(uVar20 >> 0x10) - (0xff < uVar4),cVar7);
  sVar5 = (short)uVar21;
  cVar8 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar21 - (0xff < sVar5);
  sVar5 = (short)(uVar21 >> 0x10);
  sVar5 = (short)(CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar21 >> 0x10) - (0xff < sVar5),
                           CONCAT12(cVar8,sVar9)) >> 0x10);
  local_2c = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar8 - (0xff < sVar5),
                      CONCAT12((0 < sVar9) * (sVar9 < 0x100) * cVar7 - (0xff < sVar9),
                               CONCAT11((bVar6 != 0) * (bVar6 < 0x100) * bVar6 - (0xff < bVar6),
                                        (bVar10 != 0) * (bVar10 < 0x100) * bVar10 - (0xff < bVar10))
                              ));
  uVar13 = 0;
  do {
    puVar17 = (undefined8 *)param_2[1];
    puVar1 = puVar17 + 2;
    if (*puVar1 == 0) {
      bVar10 = 0;
    }
    else {
      if (0xf < (ulonglong)puVar17[3]) {
        puVar17 = (undefined8 *)*puVar17;
      }
      bVar10 = *(byte *)((longlong)puVar17 + uVar13 % *puVar1);
    }
    *(byte *)(param_1 + uVar13) =
         *(byte *)(param_1 + uVar13) ^
         bVar10 ^ *(byte *)(*(longlong *)param_2[2] + (ulonglong)((uint)uVar13 & 1)) ^
         *(byte *)((longlong)&local_2c + (ulonglong)((uint)uVar13 & 3)) ^ local_2f[uVar13 % 3];
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x100);
  plVar3 = (longlong *)*param_2;
  if (DAT_1401d4870 == (code *)0x0) {
    lVar12 = *plVar3;
    if (0xf < (ulonglong)(plVar3[1] - lVar12)) {
      uVar13 = 0x105;
      do {
        *(byte *)(*param_3 + -0xf6 + uVar13) =
             *(byte *)(param_1 + (uVar13 & 0xff)) ^ *(byte *)(lVar12 + -0xf6 + uVar13);
        lVar12 = *plVar3;
        uVar16 = uVar13 - 0xf5;
        uVar13 = uVar13 + 1;
      } while (uVar16 < (ulonglong)(plVar3[1] - lVar12));
    }
  }
  else {
    (*DAT_1401d4870)(plVar3,CONCAT44(uVar11 >> 8,uVar11 >> 8),param_3);
  }
  lVar12 = *param_3;
  local_30 = *(char *)(lVar12 + 0x13);
  local_34 = *(uint *)(lVar12 + 0xf);
  uVar11 = *(uint *)(param_2 + 3);
  lVar14 = ~((ulonglong)uVar11 + lVar12) + param_3[1];
  auVar22._8_4_ = (int)((ulonglong)lVar14 >> 0x20);
  auVar22._0_8_ = lVar14;
  auVar22._12_4_ = DAT_140140eb0._4_4_;
  lVar15 = 0;
  do {
    dVar23 = (double)lVar15 *
             ((auVar22._8_8_ - _UNK_140140ec8) +
             ((double)CONCAT44((undefined4)DAT_140140eb0,(int)lVar14) - _DAT_140140ec0)) *
             _DAT_140165cc0;
    uVar13 = (ulonglong)dVar23;
    *(undefined1 *)((longlong)&local_25 + lVar15) =
         *(undefined1 *)
          ((ulonglong)uVar11 + lVar12 +
          ((longlong)(dVar23 - DAT_140140ed0) & (longlong)uVar13 >> 0x3f | uVar13));
    lVar15 = lVar15 + 1;
  } while (lVar15 != 5);
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_58)) {
    return CONCAT31((int3)((local_25 ^ local_34) >> 8),
                    local_21 == local_30 && (local_25 ^ local_34) == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_58);
}

