/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140047bc6 */

undefined8 *
FUN_140047bc6(undefined8 *param_1,byte *param_2,byte *param_3,ulonglong param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  ulonglong uVar22;
  byte bVar23;
  byte bVar24;
  int iVar25;
  byte *pbVar26;
  uint uVar27;
  ulonglong uVar28;
  byte *pbVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong *puVar37;
  ulonglong uVar38;
  undefined4 uVar39;
  char cVar40;
  bool bVar41;
  byte *local_88;
  
  if (param_4 == 0) {
    uVar39 = 0x84;
    if ((longlong)(int)((param_5 - (param_5 == 0)) + 2) <= (longlong)param_3 - (longlong)param_2) {
      uVar39 = 0;
      *param_2 = 0x30;
      if (param_5 == 0) {
        param_3 = param_2 + 1;
      }
      else {
        param_2[1] = 0x2e;
        thunk_FUN_1401366a0(param_2 + 2,0x30,(ulonglong)param_5);
        param_3 = param_2 + (ulonglong)param_5 + 2;
        uVar39 = 0;
      }
    }
    goto LAB_1400482ca;
  }
  bVar41 = param_4 >> 0x34 == 0;
  uVar36 = (param_4 & 0xfffffffffffff) + 0x10000000000000;
  if (bVar41) {
    uVar36 = param_4 & 0xfffffffffffff;
  }
  iVar25 = -0x432;
  if (!bVar41) {
    iVar25 = (uint)(param_4 >> 0x34) - 0x433;
  }
  local_88 = param_2;
  if (iVar25 < -0x34) {
LAB_140047e9d:
    if (local_88 != param_3) {
      *local_88 = 0x30;
      local_88 = local_88 + 1;
      goto LAB_140047eac;
    }
LAB_1400482c4:
    uVar39 = 0x84;
    goto LAB_1400482ca;
  }
  uVar28 = 0;
  uVar35 = (ulonglong)(iVar25 + 0xfU >> 4);
  if (iVar25 < 0) {
    uVar35 = uVar28;
  }
  uVar38 = uVar36 << 8;
  bVar23 = (char)uVar35 * '\x10' - (char)iVar25;
  uVar30 = ((uint)((int)uVar35 * 0x134410) >> 0x12) * 0x1c72 + 0x2c722 >> 0x10;
LAB_140047c94:
  uVar21 = uVar30 - 1;
  if (0 < (int)uVar30) {
    uVar22 = (ulonglong)(*(ushort *)(&DAT_14013d050 + uVar35 * 2) + uVar21);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar38;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulonglong *)(&DAT_140147070 + uVar22 * 0x18);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar38;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulonglong *)(&DAT_140147078 + uVar22 * 0x18);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar38;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulonglong *)(&DAT_140147080 + uVar22 * 0x18);
    uVar22 = SUB168(auVar5 * auVar17,0);
    uVar32 = SUB168(auVar4 * auVar16,8) + uVar22 +
             (ulonglong)CARRY8(SUB168(auVar4 * auVar16,0),SUB168(auVar3 * auVar15,8));
    uVar22 = SUB168(auVar5 * auVar17,8) + (ulonglong)(uVar32 < uVar22);
    uVar34 = uVar22 >> (bVar23 & 0x3f);
    bVar24 = bVar23 & 0x3f;
    uVar33 = uVar32 >> bVar24 | uVar22 << 0x40 - bVar24;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar33;
    uVar32 = SUB168(auVar6 * ZEXT816(0x31680a88f8953031),8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar33;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar34;
    uVar22 = SUB168(auVar8 * ZEXT816(0x31680a88f8953031),0);
    uVar27 = (int)((ulonglong)CARRY8(SUB168(auVar7 * ZEXT816(0x89705f4136b4a597),0),uVar32 + uVar22)
                   + SUB168(auVar8 * ZEXT816(0x31680a88f8953031),8) +
                     SUB168(auVar7 * ZEXT816(0x89705f4136b4a597),8) + uVar34 * -0x768fa0bec94b5a69 +
                   (ulonglong)CARRY8(uVar32,uVar22) >> 0x1d) * -1000000000 + (int)uVar33;
    uVar30 = uVar21;
    if (uVar28 == 0) goto code_r0x000140047d4f;
    if (8 < (longlong)param_3 - (longlong)local_88) {
      FUN_140047751(uVar27,local_88);
      uVar28 = 9;
      goto LAB_140047e0c;
    }
    uVar39 = 0x84;
    goto LAB_1400482ca;
  }
  if (uVar28 == 0) goto LAB_140047e9d;
LAB_140047eac:
  uVar35 = (ulonglong)param_5;
  if (param_5 != 0) {
    if (local_88 == param_3) goto LAB_1400482c4;
    *local_88 = 0x2e;
    local_88 = local_88 + 1;
  }
  if (iVar25 < 0) {
    uVar30 = (uint)-iVar25 >> 4;
    uVar28 = (ulonglong)uVar30;
    bVar23 = (&DAT_14013d0d0)[uVar28];
    if (param_5 / 9 < (uint)bVar23) goto LAB_140047f05;
    if (uVar30 - 0x44 < 0xffffffc2) {
      uVar38 = 0;
    }
    else {
      lVar31 = (ulonglong)bVar23 * 9;
      if ((longlong)param_3 - (longlong)local_88 < lVar31) {
LAB_140048150:
        uVar39 = 0x84;
        goto LAB_1400482ca;
      }
      thunk_FUN_1401366a0(local_88,0x30,lVar31);
      local_88 = local_88 + lVar31;
      uVar38 = (ulonglong)(uint)bVar23;
    }
    uVar1 = *(ushort *)(&DAT_14013d120 + uVar28 * 2);
    uVar2 = *(ushort *)(&DAT_14013d122 + uVar28 * 2);
    uVar30 = ((uint)uVar1 - (uint)bVar23) + (int)uVar38;
    if (uVar30 < uVar2) {
      bVar24 = (byte)-iVar25 & 0xf;
      uVar28 = uVar36 << 8;
      puVar37 = (ulonglong *)(&DAT_14014e340 + (ulonglong)uVar30 * 0x18);
      lVar31 = (longlong)param_3 - (longlong)local_88;
LAB_140048028:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar28;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = puVar37[-2];
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar28;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = puVar37[-1];
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = *puVar37;
      uVar22 = SUB168(auVar11 * auVar20,0);
      uVar32 = SUB168(auVar10 * auVar19,8) + uVar22 +
               (ulonglong)CARRY8(SUB168(auVar10 * auVar19,0),SUB168(auVar9 * auVar18,8));
      uVar22 = SUB168(auVar11 * auVar20,8) + (ulonglong)(uVar32 < uVar22);
      uVar34 = uVar22 >> bVar24;
      uVar33 = uVar32 >> bVar24 | uVar22 << 0x40 - bVar24;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar33;
      uVar32 = SUB168(auVar12 * ZEXT816(0x31680a88f8953031),8);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar33;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar34;
      uVar22 = SUB168(auVar14 * ZEXT816(0x31680a88f8953031),0);
      uVar22 = (ulonglong)
               (uint)((int)((ulonglong)
                            CARRY8(SUB168(auVar13 * ZEXT816(0x89705f4136b4a597),0),uVar32 + uVar22)
                            + SUB168(auVar14 * ZEXT816(0x31680a88f8953031),8) +
                              SUB168(auVar13 * ZEXT816(0x89705f4136b4a597),8) +
                              uVar34 * -0x768fa0bec94b5a69 + (ulonglong)CARRY8(uVar32,uVar22) >>
                           0x1d) * -1000000000 + (int)uVar33);
      if (uVar35 / 9 != uVar38) {
        if (8 < lVar31) goto code_r0x0001400480ce;
        goto LAB_140048150;
      }
      uVar30 = param_5 + (int)(uVar35 / 9) * -9;
      uVar21 = 0;
      if (uVar30 - 9 == 0) goto LAB_14004822f;
      uVar21 = 0;
      do {
        uVar28 = uVar22;
        uVar22 = uVar28 / 10;
        uVar21 = uVar21 + 1;
      } while (uVar21 < -(uVar30 - 9));
      uVar21 = (int)uVar28 + (int)(uVar28 / 10) * -10;
      if (uVar21 == 5) {
        uVar21 = ~param_5 - iVar25;
        if ((int)uVar21 < 1) {
          cVar40 = '\x02';
        }
        else {
          cVar40 = '\x01';
          if (uVar21 < 0x3c) {
            cVar40 = ((uVar36 & ~(-1L << ((byte)uVar21 & 0x3f))) == 0) + '\x01';
          }
        }
      }
      else {
LAB_14004822f:
        cVar40 = 5 < uVar21;
      }
      pbVar29 = local_88;
      if (uVar30 != 0) {
        uVar39 = 0x84;
        if (lVar31 < (longlong)(ulonglong)uVar30) goto LAB_1400482ca;
        FUN_140048eb7(uVar30,uVar22,local_88);
        pbVar29 = local_88 + uVar30;
      }
      if (cVar40 != '\0') {
        if (pbVar29 == param_2) {
          *pbVar29 = 0x31;
        }
        else {
          local_88 = local_88 + uVar35 % 9;
          pbVar26 = param_3;
          do {
            local_88 = local_88 + -1;
            bVar23 = *local_88;
            if (bVar23 == 0x39) {
              *local_88 = 0x30;
              cVar40 = '\x01';
            }
            else {
              pbVar26 = local_88;
              if (bVar23 != 0x2e) {
                if ((cVar40 == '\x01') || ((bVar23 & 1) != 0)) {
                  *local_88 = bVar23 + 1;
                }
                goto LAB_140047f2c;
              }
            }
          } while (local_88 != param_2);
          *local_88 = 0x31;
          if (pbVar26 != param_3) {
            pbVar26[0] = 0x30;
            pbVar26[1] = 0x2e;
          }
        }
        if (pbVar29 != param_3) {
          *pbVar29 = 0x30;
          pbVar29 = pbVar29 + 1;
          goto LAB_140047f2c;
        }
        goto LAB_1400482c4;
      }
      goto LAB_140047f2c;
    }
LAB_14004810a:
    uVar36 = (ulonglong)(param_5 + (int)uVar38 * -9);
    uVar39 = 0x84;
    if ((longlong)param_3 - (longlong)local_88 < (longlong)uVar36) goto LAB_1400482ca;
    if (uVar36 != 0) {
      thunk_FUN_1401366a0(local_88,0x30,uVar36);
    }
    pbVar29 = local_88 + uVar36;
  }
  else {
LAB_140047f05:
    uVar39 = 0x84;
    if ((longlong)param_3 - (longlong)local_88 < (longlong)uVar35) goto LAB_1400482ca;
    if (param_5 != 0) {
      thunk_FUN_1401366a0(local_88,0x30,uVar35);
    }
    pbVar29 = local_88 + uVar35;
  }
LAB_140047f2c:
  param_3 = pbVar29;
  uVar39 = 0;
LAB_1400482ca:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar39;
  return param_1;
code_r0x000140047d4f:
  uVar28 = 0;
  if (uVar27 != 0) {
    uVar21 = 9;
    if (((((uVar27 < 100000000) && (uVar21 = 8, uVar27 < 10000000)) &&
         (uVar21 = 7, uVar27 < 1000000)) &&
        ((uVar21 = 6, uVar27 < 100000 && (uVar21 = 5, uVar27 < 10000)))) &&
       ((uVar21 = 4, uVar27 < 1000 && (uVar21 = 3, uVar27 < 100)))) {
      uVar21 = 2 - (uVar27 < 10);
    }
    uVar28 = (ulonglong)uVar21;
    if ((longlong)param_3 - (longlong)local_88 < (longlong)uVar28) goto LAB_140048150;
    FUN_140047661(uVar28,uVar27,local_88);
LAB_140047e0c:
    local_88 = local_88 + uVar28;
    uVar28 = 1;
  }
  goto LAB_140047c94;
code_r0x0001400480ce:
  FUN_140047751(uVar22,local_88);
  local_88 = local_88 + 9;
  uVar38 = uVar38 + 1;
  puVar37 = puVar37 + 3;
  lVar31 = lVar31 + -9;
  if ((uint)uVar2 <= ((uint)uVar1 - (uint)bVar23) + (int)uVar38) goto LAB_14004810a;
  goto LAB_140048028;
}

