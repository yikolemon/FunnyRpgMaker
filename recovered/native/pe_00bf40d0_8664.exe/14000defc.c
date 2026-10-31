/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000defc */

longlong *
FUN_14000defc(longlong *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4,uint param_5)

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
  undefined1 (*pauVar23) [32];
  byte bVar24;
  byte bVar25;
  int iVar26;
  undefined1 (*pauVar27) [32];
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 (*pauVar32) [32];
  uint uVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong *puVar38;
  ulonglong uVar39;
  undefined4 uVar40;
  char cVar41;
  bool bVar42;
  undefined1 (*local_88) [32];
  
  if (param_4 == 0) {
    uVar40 = 0x84;
    if ((longlong)(int)((param_5 - (param_5 == 0)) + 2) <= (longlong)param_3 - (longlong)param_2) {
      uVar40 = 0;
      (*param_2)[0] = 0x30;
      if (param_5 == 0) {
        param_3 = (undefined1 (*) [32])(*param_2 + 1);
      }
      else {
        (*param_2)[1] = 0x2e;
        thunk_FUN_1400b3c00((undefined1 (*) [32])(*param_2 + 2),0x30,(ulonglong)param_5);
        param_3 = (undefined1 (*) [32])(*param_2 + (ulonglong)param_5 + 2);
        uVar40 = 0;
      }
    }
    goto LAB_14000e600;
  }
  bVar42 = param_4 >> 0x34 == 0;
  uVar29 = (param_4 & 0xfffffffffffff) + 0x10000000000000;
  if (bVar42) {
    uVar29 = param_4 & 0xfffffffffffff;
  }
  iVar26 = -0x432;
  if (!bVar42) {
    iVar26 = (uint)(param_4 >> 0x34) - 0x433;
  }
  local_88 = param_2;
  if (iVar26 < -0x34) {
LAB_14000e1d3:
    if (local_88 != param_3) {
      (*local_88)[0] = 0x30;
      local_88 = (undefined1 (*) [32])(*local_88 + 1);
      goto LAB_14000e1e2;
    }
LAB_14000e5fa:
    uVar40 = 0x84;
    goto LAB_14000e600;
  }
  uVar30 = 0;
  uVar31 = (ulonglong)(iVar26 + 0xfU >> 4);
  if (iVar26 < 0) {
    uVar31 = uVar30;
  }
  uVar39 = uVar29 << 8;
  bVar24 = (char)uVar31 * '\x10' - (char)iVar26;
  uVar33 = ((uint)((int)uVar31 * 0x134410) >> 0x12) * 0x1c72 + 0x2c722 >> 0x10;
LAB_14000dfca:
  uVar21 = uVar33 - 1;
  if (0 < (int)uVar33) {
    uVar22 = (ulonglong)(*(ushort *)(&DAT_1400b78d0 + uVar31 * 2) + uVar21);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar39;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulonglong *)(&DAT_1400c0f30 + uVar22 * 0x18);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar39;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulonglong *)(&DAT_1400c0f38 + uVar22 * 0x18);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar39;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulonglong *)(&DAT_1400c0f40 + uVar22 * 0x18);
    uVar22 = SUB168(auVar5 * auVar17,0);
    uVar35 = SUB168(auVar4 * auVar16,8) + uVar22 +
             (ulonglong)CARRY8(SUB168(auVar4 * auVar16,0),SUB168(auVar3 * auVar15,8));
    uVar22 = SUB168(auVar5 * auVar17,8) + (ulonglong)(uVar35 < uVar22);
    uVar37 = uVar22 >> (bVar24 & 0x3f);
    bVar25 = bVar24 & 0x3f;
    uVar36 = uVar35 >> bVar25 | uVar22 << 0x40 - bVar25;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar36;
    uVar35 = SUB168(auVar6 * ZEXT816(0x31680a88f8953031),8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar36;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar37;
    uVar22 = SUB168(auVar8 * ZEXT816(0x31680a88f8953031),0);
    uVar28 = (int)((ulonglong)CARRY8(SUB168(auVar7 * ZEXT816(0x89705f4136b4a597),0),uVar35 + uVar22)
                   + SUB168(auVar8 * ZEXT816(0x31680a88f8953031),8) +
                     SUB168(auVar7 * ZEXT816(0x89705f4136b4a597),8) + uVar37 * -0x768fa0bec94b5a69 +
                   (ulonglong)CARRY8(uVar35,uVar22) >> 0x1d) * -1000000000 + (int)uVar36;
    uVar33 = uVar21;
    if (uVar30 == 0) goto code_r0x00014000e085;
    if (8 < (longlong)param_3 - (longlong)local_88) {
      FUN_14000da87((ulonglong)uVar28,local_88);
      uVar30 = 9;
      goto LAB_14000e142;
    }
    uVar40 = 0x84;
    goto LAB_14000e600;
  }
  if (uVar30 == 0) goto LAB_14000e1d3;
LAB_14000e1e2:
  if (param_5 != 0) {
    if (local_88 == param_3) goto LAB_14000e5fa;
    (*local_88)[0] = 0x2e;
    local_88 = (undefined1 (*) [32])(*local_88 + 1);
  }
  if (iVar26 < 0) {
    uVar33 = (uint)-iVar26 >> 4;
    uVar31 = (ulonglong)uVar33;
    uVar30 = (ulonglong)param_5 / 9;
    bVar24 = (&DAT_1400b7950)[uVar31];
    if (param_5 / 9 < (uint)bVar24) goto LAB_14000e23b;
    if (uVar33 - 0x44 < 0xffffffc2) {
      uVar39 = 0;
    }
    else {
      uVar39 = (ulonglong)bVar24 * 9;
      if ((longlong)param_3 - (longlong)local_88 < (longlong)uVar39) {
LAB_14000e486:
        uVar40 = 0x84;
        goto LAB_14000e600;
      }
      thunk_FUN_1400b3c00(local_88,0x30,uVar39);
      local_88 = (undefined1 (*) [32])(*local_88 + uVar39);
      uVar39 = (ulonglong)(uint)bVar24;
    }
    uVar1 = *(ushort *)(&DAT_1400b79a0 + uVar31 * 2);
    uVar2 = *(ushort *)(&DAT_1400b79a2 + uVar31 * 2);
    uVar33 = ((uint)uVar1 - (uint)bVar24) + (int)uVar39;
    if (uVar33 < uVar2) {
      bVar25 = (byte)-iVar26 & 0xf;
      uVar31 = uVar29 << 8;
      puVar38 = (ulonglong *)(&DAT_1400c8200 + (ulonglong)uVar33 * 0x18);
      lVar34 = (longlong)param_3 - (longlong)local_88;
LAB_14000e35e:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar31;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = puVar38[-2];
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar31;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = puVar38[-1];
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar31;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = *puVar38;
      uVar22 = SUB168(auVar11 * auVar20,0);
      uVar35 = SUB168(auVar10 * auVar19,8) + uVar22 +
               (ulonglong)CARRY8(SUB168(auVar10 * auVar19,0),SUB168(auVar9 * auVar18,8));
      uVar22 = SUB168(auVar11 * auVar20,8) + (ulonglong)(uVar35 < uVar22);
      uVar37 = uVar22 >> bVar25;
      uVar36 = uVar35 >> bVar25 | uVar22 << 0x40 - bVar25;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar36;
      uVar35 = SUB168(auVar12 * ZEXT816(0x31680a88f8953031),8);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar36;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar37;
      uVar22 = SUB168(auVar14 * ZEXT816(0x31680a88f8953031),0);
      uVar22 = (ulonglong)
               (uint)((int)((ulonglong)
                            CARRY8(SUB168(auVar13 * ZEXT816(0x89705f4136b4a597),0),uVar35 + uVar22)
                            + SUB168(auVar14 * ZEXT816(0x31680a88f8953031),8) +
                              SUB168(auVar13 * ZEXT816(0x89705f4136b4a597),8) +
                              uVar37 * -0x768fa0bec94b5a69 + (ulonglong)CARRY8(uVar35,uVar22) >>
                           0x1d) * -1000000000 + (int)uVar36);
      if (uVar30 != uVar39) {
        if (8 < lVar34) goto code_r0x00014000e404;
        goto LAB_14000e486;
      }
      uVar33 = param_5 + (int)uVar30 * -9;
      uVar21 = 0;
      if (uVar33 - 9 == 0) goto LAB_14000e565;
      uVar21 = 0;
      do {
        uVar31 = uVar22;
        uVar22 = uVar31 / 10;
        uVar21 = uVar21 + 1;
      } while (uVar21 < -(uVar33 - 9));
      uVar21 = (int)uVar31 + (int)(uVar31 / 10) * -10;
      if (uVar21 == 5) {
        uVar21 = ~param_5 - iVar26;
        if ((int)uVar21 < 1) {
          cVar41 = '\x02';
        }
        else {
          cVar41 = '\x01';
          if (uVar21 < 0x3c) {
            cVar41 = ((uVar29 & ~(-1L << ((byte)uVar21 & 0x3f))) == 0) + '\x01';
          }
        }
      }
      else {
LAB_14000e565:
        cVar41 = 5 < uVar21;
      }
      pauVar32 = local_88;
      if (uVar33 != 0) {
        uVar40 = 0x84;
        if (lVar34 < (longlong)(ulonglong)uVar33) goto LAB_14000e600;
        FUN_14000f1ed(uVar33,uVar22,(longlong)local_88);
        pauVar32 = (undefined1 (*) [32])(*local_88 + uVar33);
      }
      if (cVar41 != '\0') {
        if (pauVar32 == param_2) {
          (*pauVar32)[0] = 0x31;
        }
        else {
          pauVar23 = (undefined1 (*) [32])(*local_88 + (ulonglong)param_5 % 9);
          pauVar27 = param_3;
          do {
            pauVar23 = (undefined1 (*) [32])(pauVar23[-1] + 0x1f);
            bVar24 = (*pauVar23)[0];
            if (bVar24 == 0x39) {
              (*pauVar23)[0] = 0x30;
              cVar41 = '\x01';
            }
            else {
              pauVar27 = pauVar23;
              if (bVar24 != 0x2e) {
                if ((cVar41 == '\x01') || ((bVar24 & 1) != 0)) {
                  (*pauVar23)[0] = bVar24 + 1;
                }
                goto LAB_14000e262;
              }
            }
          } while (pauVar23 != param_2);
          (*pauVar23)[0] = 0x31;
          if (pauVar27 != param_3) {
            *(undefined2 *)*pauVar27 = 0x2e30;
          }
        }
        if (pauVar32 != param_3) {
          (*pauVar32)[0] = 0x30;
          pauVar32 = (undefined1 (*) [32])(*pauVar32 + 1);
          goto LAB_14000e262;
        }
        goto LAB_14000e5fa;
      }
      goto LAB_14000e262;
    }
LAB_14000e440:
    uVar29 = (ulonglong)(param_5 + (int)uVar39 * -9);
    uVar40 = 0x84;
    if ((longlong)param_3 - (longlong)local_88 < (longlong)uVar29) goto LAB_14000e600;
    if (uVar29 != 0) {
      thunk_FUN_1400b3c00(local_88,0x30,uVar29);
    }
    pauVar32 = (undefined1 (*) [32])(*local_88 + uVar29);
  }
  else {
LAB_14000e23b:
    uVar29 = (ulonglong)param_5;
    uVar40 = 0x84;
    if ((longlong)param_3 - (longlong)local_88 < (longlong)uVar29) goto LAB_14000e600;
    if (param_5 != 0) {
      thunk_FUN_1400b3c00(local_88,0x30,uVar29);
    }
    pauVar32 = (undefined1 (*) [32])(*local_88 + uVar29);
  }
LAB_14000e262:
  param_3 = pauVar32;
  uVar40 = 0;
LAB_14000e600:
  *param_1 = (longlong)param_3;
  *(undefined4 *)(param_1 + 1) = uVar40;
  return param_1;
code_r0x00014000e085:
  uVar30 = 0;
  if (uVar28 != 0) {
    uVar21 = 9;
    if (((((uVar28 < 100000000) && (uVar21 = 8, uVar28 < 10000000)) &&
         (uVar21 = 7, uVar28 < 1000000)) &&
        ((uVar21 = 6, uVar28 < 100000 && (uVar21 = 5, uVar28 < 10000)))) &&
       ((uVar21 = 4, uVar28 < 1000 && (uVar21 = 3, uVar28 < 100)))) {
      uVar21 = 2 - (uVar28 < 10);
    }
    uVar30 = (ulonglong)uVar21;
    if ((longlong)param_3 - (longlong)local_88 < (longlong)uVar30) goto LAB_14000e486;
    FUN_14000d997(uVar30,(ulonglong)uVar28,(byte *)local_88);
LAB_14000e142:
    local_88 = (undefined1 (*) [32])(*local_88 + uVar30);
    uVar30 = 1;
  }
  goto LAB_14000dfca;
code_r0x00014000e404:
  FUN_14000da87(uVar22,local_88);
  local_88 = (undefined1 (*) [32])(*local_88 + 9);
  uVar39 = uVar39 + 1;
  puVar38 = puVar38 + 3;
  lVar34 = lVar34 + -9;
  if ((uint)uVar2 <= ((uint)uVar1 - (uint)bVar24) + (int)uVar39) goto LAB_14000e440;
  goto LAB_14000e35e;
}

