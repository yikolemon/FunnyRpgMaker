/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005323d */

undefined8 *
FUN_14005323d(undefined8 *param_1,byte *param_2,byte *param_3,ulonglong param_4,uint param_5)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
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
  undefined1 auVar21 [16];
  longlong lVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  byte bVar29;
  byte bVar30;
  undefined2 uVar31;
  undefined4 uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int iVar35;
  int iVar36;
  ulonglong uVar37;
  longlong lVar38;
  byte bVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  uint uVar45;
  byte *pbVar46;
  char cVar47;
  bool bVar48;
  uint local_88;
  
  if (param_4 != 0) {
    bVar48 = param_4 >> 0x34 == 0;
    uVar28 = (param_4 & 0xfffffffffffff) + 0x10000000000000;
    if (bVar48) {
      uVar28 = param_4 & 0xfffffffffffff;
    }
    iVar36 = -0x432;
    if (!bVar48) {
      iVar36 = (uint)(param_4 >> 0x34) - 0x433;
    }
    uVar24 = param_5 + 1;
    uVar25 = 0;
    local_88 = 0;
    pbVar46 = param_2;
    if (iVar36 < -0x34) {
LAB_140053665:
      uVar34 = (ulonglong)((uint)-iVar36 >> 4);
      bVar29 = (&DAT_1401cf290)[uVar34];
      uVar33 = (ulonglong)bVar29;
      uVar2 = *(ushort *)(&DAT_1401cf2e0 + uVar34 * 2);
      uVar3 = *(ushort *)(&DAT_1401cf2e2 + uVar34 * 2);
      bVar30 = (byte)-iVar36 & 0xf;
      uVar34 = uVar28 << 8;
      uVar40 = 199;
      if (199 < bVar29) {
        uVar40 = (uint)bVar29;
      }
      uVar26 = uVar25;
      do {
        uVar25 = ((uint)uVar2 - (uint)bVar29) + (uint)uVar33;
        if (uVar25 < uVar3) {
          uVar27 = (ulonglong)uVar25;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar34;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = *(ulonglong *)(&DAT_140e6e8e0 + uVar27 * 0x18);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar34;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = *(ulonglong *)(&DAT_140e6e8e8 + uVar27 * 0x18);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar34;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)(&DAT_140e6e8f0 + uVar27 * 0x18);
          uVar27 = SUB168(auVar12 * auVar21,0);
          uVar43 = SUB168(auVar11 * auVar20,8) + uVar27 +
                   (ulonglong)CARRY8(SUB168(auVar11 * auVar20,0),SUB168(auVar10 * auVar19,8));
          uVar27 = SUB168(auVar12 * auVar21,8) + (ulonglong)(uVar43 < uVar27);
          uVar37 = uVar27 >> bVar30;
          uVar42 = uVar43 >> bVar30 | uVar27 << 0x40 - bVar30;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar42;
          uVar43 = SUB168(auVar13 * ZEXT816(0x31680a88f8953031),8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar42;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar37;
          uVar27 = SUB168(auVar15 * ZEXT816(0x31680a88f8953031),0);
          uVar41 = (int)(SUB168(auVar15 * ZEXT816(0x31680a88f8953031),8) +
                         SUB168(auVar14 * ZEXT816(0x89705f4136b4a597),8) +
                         uVar37 * -0x768fa0bec94b5a69 +
                         (ulonglong)CARRY8(uVar43,uVar27) +
                         (ulonglong)
                         CARRY8(SUB168(auVar14 * ZEXT816(0x89705f4136b4a597),0),uVar43 + uVar27) >>
                        0x1d) * -1000000000 + (int)uVar42;
          uVar27 = (ulonglong)uVar41;
          if (uVar26 == 0) {
            if (uVar41 == 0) {
              uVar25 = 0;
            }
            else {
              uVar25 = 9;
              if ((((uVar41 < 100000000) && (uVar25 = 8, uVar41 < 10000000)) &&
                  ((uVar25 = 7, uVar41 < 1000000 &&
                   (((uVar25 = 6, uVar41 < 100000 && (uVar25 = 5, uVar41 < 10000)) &&
                    (uVar25 = 4, uVar41 < 1000)))))) && (uVar25 = 3, uVar41 < 100)) {
                uVar25 = 2 - (uVar41 < 10);
              }
              local_88 = (~(uint)uVar33 * 9 + uVar25) - 1;
              if (uVar24 < uVar25) goto LAB_140053a12;
              if (param_5 == 0) {
                if (pbVar46 == param_3) goto LAB_1400539d3;
                *pbVar46 = (char)uVar42 + 0x30;
                pbVar46 = pbVar46 + 1;
              }
              else {
                if ((longlong)param_3 - (longlong)pbVar46 < (longlong)(ulonglong)(uVar25 + 1))
                goto LAB_1400539d3;
                if (uVar41 < 10000) {
                  uVar43 = 0;
                }
                else {
                  uVar26 = 0;
                  uVar43 = uVar27;
                  do {
                    uVar41 = (uint)uVar43;
                    uVar27 = uVar43 / 10000;
                    uVar45 = (int)(uVar43 / 10000) * -10000 + uVar41;
                    *(undefined2 *)(pbVar46 + (ulonglong)uVar25 + 1 + (-2 - (ulonglong)uVar26)) =
                         *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)(uVar45 % 100) * 2);
                    *(undefined2 *)(pbVar46 + (ulonglong)uVar25 + 1 + (-4 - (ulonglong)uVar26)) =
                         *(undefined2 *)(&DAT_1401cdb00 + ((ulonglong)uVar45 / 100) * 2);
                    uVar26 = uVar26 + 4;
                    uVar43 = uVar27;
                  } while (99999999 < uVar41);
                  uVar43 = (ulonglong)uVar26;
                }
                uVar26 = (uint)uVar27;
                if (99 < uVar26) {
                  uVar41 = (uVar26 & 0xffff) / 100;
                  *(undefined2 *)(pbVar46 + ~uVar43 + (ulonglong)uVar25) =
                       *(undefined2 *)
                        (&DAT_1401cdb00 + (ulonglong)(uVar26 + uVar41 * -100 & 0xffff) * 2);
                  uVar27 = (ulonglong)uVar41;
                }
                if ((uint)uVar27 < 10) {
                  pbVar46[1] = 0x2e;
                  bVar39 = (byte)uVar27 | 0x30;
                }
                else {
                  bVar39 = (&DAT_1401cdb00)[uVar27 * 2];
                  pbVar46[2] = (&DAT_1401cdb01)[uVar27 * 2];
                  pbVar46[1] = 0x2e;
                }
                *pbVar46 = bVar39;
                pbVar46 = pbVar46 + (uVar25 + 1);
              }
            }
          }
          else {
LAB_14005378c:
            uVar25 = uVar26 + 9;
            if (uVar24 < uVar25) {
              uVar40 = 9;
              uVar25 = uVar26;
              goto LAB_140053a15;
            }
            if ((longlong)param_3 - (longlong)pbVar46 < 9) goto LAB_1400539d3;
            FUN_14004c090(uVar27,pbVar46);
            pbVar46 = pbVar46 + 9;
          }
        }
        else {
          uVar27 = 0;
          if (uVar26 != 0) goto LAB_14005378c;
          uVar25 = 0;
        }
        uVar33 = uVar33 + 1;
        uVar26 = uVar25;
      } while (uVar33 != uVar40 + 1);
    }
    else {
      uVar25 = 0;
      uVar40 = iVar36 + 0xfU >> 4;
      if (iVar36 < 0) {
        uVar40 = 0;
      }
      uVar33 = uVar28 << 8;
      bVar29 = (char)uVar40 * '\x10' - (char)iVar36;
      lVar38 = (ulonglong)*(ushort *)(&DAT_1401cf210 + (ulonglong)uVar40 * 2) * 0x18;
      local_88 = 0;
      uVar34 = (ulonglong)((uVar40 * 0x134410 >> 0x12) * 0x1c72 + 0x2c722 >> 0x10);
      do {
        uVar37 = uVar34 - 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar33;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulonglong *)(&DAT_140e67620 + uVar37 * 0x18 + lVar38);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar33;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *(ulonglong *)(&DAT_140e67628 + uVar37 * 0x18 + lVar38);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar33;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(&DAT_140e67630 + uVar37 * 0x18 + lVar38);
        uVar27 = SUB168(auVar6 * auVar18,0);
        uVar43 = SUB168(auVar5 * auVar17,8) + uVar27 +
                 (ulonglong)CARRY8(SUB168(auVar5 * auVar17,0),SUB168(auVar4 * auVar16,8));
        uVar27 = SUB168(auVar6 * auVar18,8) + (ulonglong)(uVar43 < uVar27);
        uVar42 = uVar27 >> (bVar29 & 0x3f);
        bVar30 = bVar29 & 0x3f;
        uVar44 = uVar43 >> bVar30 | uVar27 << 0x40 - bVar30;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar44;
        uVar43 = SUB168(auVar7 * ZEXT816(0x31680a88f8953031),8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar44;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar42;
        uVar27 = SUB168(auVar9 * ZEXT816(0x31680a88f8953031),0);
        uVar40 = (int)(SUB168(auVar9 * ZEXT816(0x31680a88f8953031),8) +
                       SUB168(auVar8 * ZEXT816(0x89705f4136b4a597),8) + uVar42 * -0x768fa0bec94b5a69
                       + (ulonglong)CARRY8(uVar43,uVar27) +
                         (ulonglong)
                         CARRY8(SUB168(auVar8 * ZEXT816(0x89705f4136b4a597),0),uVar43 + uVar27) >>
                      0x1d) * -1000000000 + (int)uVar44;
        uVar27 = (ulonglong)uVar40;
        if (uVar25 == 0) {
          if (uVar40 == 0) {
            uVar25 = 0;
          }
          else {
            uVar25 = 9;
            if (((((uVar40 < 100000000) && (uVar25 = 8, uVar40 < 10000000)) &&
                 (uVar25 = 7, uVar40 < 1000000)) &&
                ((uVar25 = 6, uVar40 < 100000 && (uVar25 = 5, uVar40 < 10000)))) &&
               ((uVar25 = 4, uVar40 < 1000 && (uVar25 = 3, uVar40 < 100)))) {
              uVar25 = 2 - (uVar40 < 10);
            }
            local_88 = ((int)uVar37 * 9 + uVar25) - 1;
            if (uVar24 < uVar25) goto LAB_140053a12;
            if (param_5 == 0) {
              if (pbVar46 == param_3) goto LAB_1400539d3;
              *pbVar46 = (char)uVar44 + 0x30;
              pbVar46 = pbVar46 + 1;
            }
            else {
              if ((longlong)param_3 - (longlong)pbVar46 < (longlong)(ulonglong)(uVar25 + 1))
              goto LAB_1400539d3;
              if (uVar40 < 10000) {
                uVar43 = 0;
              }
              else {
                uVar40 = 0;
                uVar43 = uVar27;
                do {
                  uVar26 = (uint)uVar43;
                  uVar27 = uVar43 / 10000;
                  uVar41 = (int)(uVar43 / 10000) * -10000 + uVar26;
                  lVar22 = ((ulonglong)uVar25 + 1) - (ulonglong)uVar40;
                  *(undefined2 *)(pbVar46 + lVar22 + -2) =
                       *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)(uVar41 % 100) * 2);
                  *(undefined2 *)(pbVar46 + lVar22 + -4) =
                       *(undefined2 *)(&DAT_1401cdb00 + ((ulonglong)uVar41 / 100) * 2);
                  uVar40 = uVar40 + 4;
                  uVar43 = uVar27;
                } while (99999999 < uVar26);
                uVar43 = (ulonglong)uVar40;
              }
              uVar40 = (uint)uVar27;
              if (99 < uVar40) {
                uVar26 = (uVar40 & 0xffff) / 100;
                *(undefined2 *)(pbVar46 + uVar25 + ~uVar43) =
                     *(undefined2 *)
                      (&DAT_1401cdb00 + (ulonglong)(uVar40 + uVar26 * -100 & 0xffff) * 2);
                uVar27 = (ulonglong)uVar26;
              }
              if ((uint)uVar27 < 10) {
                pbVar46[1] = 0x2e;
                bVar30 = (byte)uVar27 | 0x30;
              }
              else {
                bVar30 = (&DAT_1401cdb00)[uVar27 * 2];
                pbVar46[2] = (&DAT_1401cdb01)[uVar27 * 2];
                pbVar46[1] = 0x2e;
              }
              *pbVar46 = bVar30;
              pbVar46 = pbVar46 + (uVar25 + 1);
            }
          }
        }
        else {
          if (uVar24 < uVar25 + 9) {
            uVar40 = 9;
            goto LAB_140053a15;
          }
          if ((longlong)param_3 - (longlong)pbVar46 < 9) goto LAB_1400539d3;
          FUN_14004c090(uVar27,pbVar46);
          pbVar46 = pbVar46 + 9;
          uVar25 = uVar25 + 9;
        }
        bVar48 = 1 < uVar34;
        uVar34 = uVar37;
      } while (bVar48);
      if (iVar36 < 0) goto LAB_140053665;
    }
    uVar27 = 0;
    uVar34 = (ulonglong)(uVar24 - uVar25);
    uVar26 = 0;
    goto LAB_140053aaf;
  }
  uVar32 = 0x84;
  if ((longlong)param_3 - (longlong)param_2 < (longlong)(int)((param_5 - (param_5 == 0)) + 6))
  goto LAB_140053d3c;
  *param_2 = 0x30;
  if (param_5 == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2[1] = 0x2e;
    FUN_1401c5830(param_2 + 2,
                  CONCAT71((int7)((ulonglong)((longlong)param_3 - (longlong)param_2) >> 8),0x30),
                  (ulonglong)param_5);
    param_2 = param_2 + (ulonglong)param_5 + 2;
  }
  param_2[0] = 0x65;
  param_2[1] = 0x2b;
  param_2[2] = 0x30;
  param_2[3] = 0x30;
  param_3 = param_2 + 4;
  goto LAB_140053d14;
LAB_1400539d3:
  uVar32 = 0x84;
  goto LAB_140053d3c;
LAB_140053a12:
  uVar40 = uVar25;
  uVar25 = 0;
LAB_140053a15:
  uVar41 = uVar24 - uVar25;
  uVar34 = (ulonglong)uVar41;
  uVar26 = 0;
  iVar35 = uVar40 - uVar41;
  if (uVar40 < uVar41 || iVar35 == 0) {
LAB_140053aaf:
    cVar47 = 5 < uVar26;
  }
  else {
    iVar35 = iVar35 + (uint)(iVar35 == 0);
    do {
      uVar33 = uVar27;
      uVar27 = uVar33 / 10;
      iVar35 = iVar35 + -1;
    } while (iVar35 != 0);
    uVar26 = (int)uVar33 + (int)(uVar33 / 10) * -10;
    if (uVar26 != 5) goto LAB_140053aaf;
    iVar35 = uVar24 - local_88;
    uVar24 = -(iVar36 + iVar35);
    if ((int)uVar24 < 1) {
      bVar48 = true;
LAB_140053d5d:
      if ((iVar35 < 0) && (bVar48)) {
        uVar24 = 0xffffffff;
        do {
          uVar33 = uVar28 / 5;
          uVar24 = uVar24 + 1;
          iVar36 = (int)uVar28;
          uVar28 = uVar33;
        } while ((int)uVar33 * 5 == iVar36);
        cVar47 = '\x01';
        if ((uint)-iVar35 <= uVar24) {
LAB_140053db4:
          cVar47 = '\x02';
        }
      }
      else {
        cVar47 = '\x01';
        if ((bool)(-1 < iVar35 & bVar48)) goto LAB_140053db4;
      }
    }
    else {
      cVar47 = '\x01';
      if (uVar24 < 0x3c) {
        bVar48 = (uVar28 & ~(-1L << ((byte)uVar24 & 0x3f))) == 0;
        goto LAB_140053d5d;
      }
    }
  }
  uVar24 = (uint)uVar27;
  if (uVar25 == 0) {
    if (param_5 == 0) {
      if (pbVar46 == param_3) goto LAB_140053d37;
      *pbVar46 = (char)uVar27 + 0x30;
      pbVar46 = pbVar46 + 1;
    }
    else {
      uVar28 = (ulonglong)((int)uVar34 + 1);
      if ((longlong)param_3 - (longlong)pbVar46 < (longlong)uVar28) {
LAB_140053d37:
        uVar32 = 0x84;
        goto LAB_140053d3c;
      }
      uVar33 = 0;
      if (9999 < uVar24) {
        do {
          uVar40 = (uint)uVar27;
          uVar24 = (uint)(uVar27 / 10000);
          uVar25 = (int)(uVar27 / 10000) * -10000 + uVar40;
          lVar38 = (uVar34 + 1) - uVar33;
          *(undefined2 *)(pbVar46 + lVar38 + -2) =
               *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)(uVar25 % 100) * 2);
          *(undefined2 *)(pbVar46 + lVar38 + -4) =
               *(undefined2 *)(&DAT_1401cdb00 + ((ulonglong)uVar25 / 100) * 2);
          uVar25 = (int)uVar33 + 4;
          uVar33 = (ulonglong)uVar25;
          uVar27 = uVar27 / 10000;
        } while (99999999 < uVar40);
        uVar33 = (ulonglong)uVar25;
      }
      uVar25 = uVar24;
      if (99 < uVar24) {
        uVar25 = (uVar24 & 0xffff) / 100;
        *(undefined2 *)(pbVar46 + ~uVar33 + uVar34) =
             *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)(uVar24 + uVar25 * -100 & 0xffff) * 2);
      }
      if (uVar25 < 10) {
        pbVar46[1] = 0x2e;
        bVar29 = (byte)uVar25 | 0x30;
      }
      else {
        bVar29 = (&DAT_1401cdb00)[(ulonglong)uVar25 * 2];
        pbVar46[2] = (&DAT_1401cdb01)[(ulonglong)uVar25 * 2];
        pbVar46[1] = 0x2e;
      }
      *pbVar46 = bVar29;
      pbVar46 = pbVar46 + uVar28;
    }
  }
  else {
    if ((longlong)param_3 - (longlong)pbVar46 < (longlong)uVar34) goto LAB_140053d37;
    if (uVar24 == 0) {
      FUN_1401c5830(pbVar46,0x30,uVar34);
    }
    else {
      FUN_14004d7f6(uVar34,uVar27,pbVar46);
    }
    pbVar46 = pbVar46 + uVar34;
  }
  pbVar1 = pbVar46;
  if (cVar47 != '\0') {
    while (pbVar23 = pbVar1, pbVar23 != param_2) {
      pbVar1 = pbVar23 + -1;
      bVar29 = pbVar23[-1];
      if (bVar29 != 0x2e) {
        if (bVar29 != 0x39) {
          if ((cVar47 == '\x01') || ((bVar29 & 1) != 0)) {
            pbVar23[-1] = bVar29 + 1;
          }
          goto LAB_140053c8b;
        }
        *pbVar1 = 0x30;
        cVar47 = '\x01';
      }
    }
    *pbVar23 = 0x31;
    local_88 = local_88 + 1;
  }
LAB_140053c8b:
  uVar25 = -local_88;
  if ((int)-local_88 < 0) {
    uVar25 = local_88;
  }
  uVar32 = 0x84;
  if ((longlong)param_3 - (longlong)pbVar46 < (longlong)(5 - (ulonglong)(uVar25 < 100)))
  goto LAB_140053d3c;
  *pbVar46 = 0x65;
  pbVar46[1] = (char)((int)local_88 >> 0x1f) * -2 + 0x2b;
  if (uVar25 < 100) {
    uVar31 = *(undefined2 *)(&DAT_1401cdb00 + (ulonglong)uVar25 * 2);
    lVar38 = 4;
  }
  else {
    uVar24 = (uVar25 / 10) * 2;
    uVar31 = *(undefined2 *)(&DAT_1401cdb00 + uVar24);
    pbVar46[4] = (char)uVar25 + (char)uVar24 * -5 | 0x30;
    lVar38 = 5;
  }
  param_3 = pbVar46 + lVar38;
  *(undefined2 *)(pbVar46 + 2) = uVar31;
LAB_140053d14:
  uVar32 = 0;
LAB_140053d3c:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar32;
  return param_1;
}

