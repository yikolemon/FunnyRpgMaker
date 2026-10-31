/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400153b0 */

undefined8 *
FUN_1400153b0(undefined8 *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
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
  undefined1 (*pauVar23) [32];
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  byte bVar28;
  undefined2 uVar29;
  uint uVar30;
  undefined4 uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  int iVar34;
  int iVar35;
  ulonglong uVar36;
  undefined4 *puVar37;
  longlong lVar38;
  byte bVar39;
  byte bVar40;
  uint uVar41;
  uint uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  uint uVar46;
  undefined1 (*pauVar47) [32];
  char cVar48;
  bool bVar49;
  uint local_88;
  
  if (param_4 != 0) {
    bVar49 = param_4 >> 0x34 == 0;
    uVar26 = (param_4 & 0xfffffffffffff) + 0x10000000000000;
    if (bVar49) {
      uVar26 = param_4 & 0xfffffffffffff;
    }
    iVar35 = -0x432;
    if (!bVar49) {
      iVar35 = (uint)(param_4 >> 0x34) - 0x433;
    }
    uVar30 = param_5 + 1;
    uVar24 = 0;
    local_88 = 0;
    pauVar47 = param_2;
    if (iVar35 < -0x34) {
LAB_1400157d8:
      uVar33 = (ulonglong)((uint)-iVar35 >> 4);
      bVar28 = (&DAT_1400b7950)[uVar33];
      uVar32 = (ulonglong)bVar28;
      uVar2 = *(ushort *)(&DAT_1400b79a0 + uVar33 * 2);
      uVar3 = *(ushort *)(&DAT_1400b79a2 + uVar33 * 2);
      bVar39 = (byte)-iVar35;
      uVar33 = uVar26 << 8;
      uVar41 = 199;
      if (199 < bVar28) {
        uVar41 = (uint)bVar28;
      }
      uVar25 = uVar24;
      do {
        uVar24 = ((uint)uVar2 - (uint)bVar28) + (uint)uVar32;
        if (uVar24 < uVar3) {
          uVar27 = (ulonglong)uVar24;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar33;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = *(ulonglong *)(&DAT_1400c81f0 + uVar27 * 0x18);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar33;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = *(ulonglong *)(&DAT_1400c81f8 + uVar27 * 0x18);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar33;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)(&DAT_1400c8200 + uVar27 * 0x18);
          uVar27 = SUB168(auVar12 * auVar21,0);
          uVar44 = SUB168(auVar11 * auVar20,8) + uVar27 +
                   (ulonglong)CARRY8(SUB168(auVar11 * auVar20,0),SUB168(auVar10 * auVar19,8));
          uVar27 = SUB168(auVar12 * auVar21,8) + (ulonglong)(uVar44 < uVar27);
          uVar36 = uVar27 >> (bVar39 & 0xf);
          bVar40 = bVar39 & 0xf;
          uVar43 = uVar44 >> bVar40 | uVar27 << 0x40 - bVar40;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar43;
          uVar44 = SUB168(auVar13 * ZEXT816(0x31680a88f8953031),8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar43;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar36;
          uVar27 = SUB168(auVar15 * ZEXT816(0x31680a88f8953031),0);
          uVar42 = (int)((ulonglong)
                         CARRY8(SUB168(auVar14 * ZEXT816(0x89705f4136b4a597),0),uVar44 + uVar27) +
                         SUB168(auVar15 * ZEXT816(0x31680a88f8953031),8) +
                         SUB168(auVar14 * ZEXT816(0x89705f4136b4a597),8) +
                         uVar36 * -0x768fa0bec94b5a69 + (ulonglong)CARRY8(uVar44,uVar27) >> 0x1d) *
                   -1000000000 + (int)uVar43;
          uVar27 = (ulonglong)uVar42;
          if (uVar25 == 0) {
            if (uVar42 == 0) {
              uVar24 = 0;
            }
            else {
              uVar24 = 9;
              if ((((uVar42 < 100000000) && (uVar24 = 8, uVar42 < 10000000)) &&
                  ((uVar24 = 7, uVar42 < 1000000 &&
                   (((uVar24 = 6, uVar42 < 100000 && (uVar24 = 5, uVar42 < 10000)) &&
                    (uVar24 = 4, uVar42 < 1000)))))) && (uVar24 = 3, uVar42 < 100)) {
                uVar24 = 2 - (uVar42 < 10);
              }
              local_88 = (~(uint)uVar32 * 9 + uVar24) - 1;
              if (uVar30 < uVar24) goto LAB_140015b85;
              if (param_5 == 0) {
                if (pauVar47 == param_3) goto LAB_140015b46;
                (*pauVar47)[0] = (char)uVar43 + '0';
                pauVar47 = (undefined1 (*) [32])(*pauVar47 + 1);
              }
              else {
                if ((longlong)param_3 - (longlong)pauVar47 < (longlong)(ulonglong)(uVar24 + 1))
                goto LAB_140015b46;
                if (uVar42 < 10000) {
                  uVar44 = 0;
                }
                else {
                  uVar25 = 0;
                  uVar44 = uVar27;
                  do {
                    uVar42 = (uint)uVar44;
                    uVar27 = uVar44 / 10000;
                    uVar46 = (int)(uVar44 / 10000) * -10000 + uVar42;
                    lVar38 = ((ulonglong)uVar24 + 1) - (ulonglong)uVar25;
                    *(undefined2 *)((longlong)pauVar47 + lVar38 + -2) =
                         *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar46 % 100) * 2);
                    *(undefined2 *)((longlong)pauVar47 + lVar38 + -4) =
                         *(undefined2 *)(&DAT_1400b7520 + ((ulonglong)uVar46 / 100) * 2);
                    uVar25 = uVar25 + 4;
                    uVar44 = uVar27;
                  } while (99999999 < uVar42);
                  uVar44 = (ulonglong)uVar25;
                }
                uVar25 = (uint)uVar27;
                if (99 < uVar25) {
                  uVar42 = (uVar25 & 0xffff) / 100;
                  *(undefined2 *)(*pauVar47 + ~uVar44 + (ulonglong)uVar24) =
                       *(undefined2 *)
                        (&DAT_1400b7520 + (ulonglong)(uVar25 + uVar42 * -100 & 0xffff) * 2);
                  uVar27 = (ulonglong)uVar42;
                }
                if ((uint)uVar27 < 10) {
                  (*pauVar47)[1] = 0x2e;
                  bVar40 = (byte)uVar27 | 0x30;
                }
                else {
                  bVar40 = (&DAT_1400b7520)[uVar27 * 2];
                  (*pauVar47)[2] = (&DAT_1400b7521)[uVar27 * 2];
                  (*pauVar47)[1] = 0x2e;
                }
                (*pauVar47)[0] = bVar40;
                pauVar47 = (undefined1 (*) [32])(*pauVar47 + (uVar24 + 1));
              }
            }
          }
          else {
LAB_1400158ff:
            uVar24 = uVar25 + 9;
            if (uVar30 < uVar24) {
              uVar41 = 9;
              uVar24 = uVar25;
              goto LAB_140015b88;
            }
            if ((longlong)param_3 - (longlong)pauVar47 < 9) goto LAB_140015b46;
            FUN_14000da87(uVar27,pauVar47);
            pauVar47 = (undefined1 (*) [32])(*pauVar47 + 9);
          }
        }
        else {
          uVar27 = 0;
          if (uVar25 != 0) goto LAB_1400158ff;
          uVar24 = 0;
        }
        uVar32 = uVar32 + 1;
        uVar25 = uVar24;
      } while (uVar32 != uVar41 + 1);
    }
    else {
      uVar24 = 0;
      uVar41 = iVar35 + 0xfU >> 4;
      if (iVar35 < 0) {
        uVar41 = 0;
      }
      uVar32 = uVar26 << 8;
      bVar28 = (char)uVar41 * '\x10' - (char)iVar35;
      lVar38 = (ulonglong)*(ushort *)(&DAT_1400b78d0 + (ulonglong)uVar41 * 2) * 0x18;
      local_88 = 0;
      uVar33 = (ulonglong)((uVar41 * 0x134410 >> 0x12) * 0x1c72 + 0x2c722 >> 0x10);
      do {
        uVar36 = uVar33 - 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar32;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulonglong *)(&DAT_1400c0f30 + uVar36 * 0x18 + lVar38);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar32;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *(ulonglong *)(&DAT_1400c0f38 + uVar36 * 0x18 + lVar38);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar32;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(&DAT_1400c0f40 + uVar36 * 0x18 + lVar38);
        uVar27 = SUB168(auVar6 * auVar18,0);
        uVar44 = SUB168(auVar5 * auVar17,8) + uVar27 +
                 (ulonglong)CARRY8(SUB168(auVar5 * auVar17,0),SUB168(auVar4 * auVar16,8));
        uVar27 = SUB168(auVar6 * auVar18,8) + (ulonglong)(uVar44 < uVar27);
        uVar43 = uVar27 >> (bVar28 & 0x3f);
        bVar39 = bVar28 & 0x3f;
        uVar45 = uVar44 >> bVar39 | uVar27 << 0x40 - bVar39;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar45;
        uVar44 = SUB168(auVar7 * ZEXT816(0x31680a88f8953031),8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar45;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar43;
        uVar27 = SUB168(auVar9 * ZEXT816(0x31680a88f8953031),0);
        uVar41 = (int)((ulonglong)
                       CARRY8(SUB168(auVar8 * ZEXT816(0x89705f4136b4a597),0),uVar44 + uVar27) +
                       SUB168(auVar9 * ZEXT816(0x31680a88f8953031),8) +
                       SUB168(auVar8 * ZEXT816(0x89705f4136b4a597),8) + uVar43 * -0x768fa0bec94b5a69
                       + (ulonglong)CARRY8(uVar44,uVar27) >> 0x1d) * -1000000000 + (int)uVar45;
        uVar27 = (ulonglong)uVar41;
        if (uVar24 == 0) {
          if (uVar41 == 0) {
            uVar24 = 0;
          }
          else {
            uVar24 = 9;
            if (((((uVar41 < 100000000) && (uVar24 = 8, uVar41 < 10000000)) &&
                 (uVar24 = 7, uVar41 < 1000000)) &&
                ((uVar24 = 6, uVar41 < 100000 && (uVar24 = 5, uVar41 < 10000)))) &&
               ((uVar24 = 4, uVar41 < 1000 && (uVar24 = 3, uVar41 < 100)))) {
              uVar24 = 2 - (uVar41 < 10);
            }
            local_88 = ((int)uVar36 * 9 + uVar24) - 1;
            if (uVar30 < uVar24) goto LAB_140015b85;
            if (param_5 == 0) {
              if (pauVar47 == param_3) goto LAB_140015b46;
              (*pauVar47)[0] = (char)uVar45 + '0';
              pauVar47 = (undefined1 (*) [32])(*pauVar47 + 1);
            }
            else {
              if ((longlong)param_3 - (longlong)pauVar47 < (longlong)(ulonglong)(uVar24 + 1))
              goto LAB_140015b46;
              if (uVar41 < 10000) {
                uVar44 = 0;
              }
              else {
                uVar41 = 0;
                uVar44 = uVar27;
                do {
                  uVar25 = (uint)uVar44;
                  uVar27 = uVar44 / 10000;
                  uVar42 = (int)(uVar44 / 10000) * -10000 + uVar25;
                  lVar22 = ((ulonglong)uVar24 + 1) - (ulonglong)uVar41;
                  *(undefined2 *)((longlong)pauVar47 + lVar22 + -2) =
                       *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar42 % 100) * 2);
                  *(undefined2 *)((longlong)pauVar47 + lVar22 + -4) =
                       *(undefined2 *)(&DAT_1400b7520 + ((ulonglong)uVar42 / 100) * 2);
                  uVar41 = uVar41 + 4;
                  uVar44 = uVar27;
                } while (99999999 < uVar25);
                uVar44 = (ulonglong)uVar41;
              }
              uVar41 = (uint)uVar27;
              if (99 < uVar41) {
                uVar25 = (uVar41 & 0xffff) / 100;
                *(undefined2 *)(*pauVar47 + ~uVar44 + (ulonglong)uVar24) =
                     *(undefined2 *)
                      (&DAT_1400b7520 + (ulonglong)(uVar41 + uVar25 * -100 & 0xffff) * 2);
                uVar27 = (ulonglong)uVar25;
              }
              if ((uint)uVar27 < 10) {
                (*pauVar47)[1] = 0x2e;
                bVar39 = (byte)uVar27 | 0x30;
              }
              else {
                bVar39 = (&DAT_1400b7520)[uVar27 * 2];
                (*pauVar47)[2] = (&DAT_1400b7521)[uVar27 * 2];
                (*pauVar47)[1] = 0x2e;
              }
              (*pauVar47)[0] = bVar39;
              pauVar47 = (undefined1 (*) [32])(*pauVar47 + (uVar24 + 1));
            }
          }
        }
        else {
          if (uVar30 < uVar24 + 9) {
            uVar41 = 9;
            goto LAB_140015b88;
          }
          if ((longlong)param_3 - (longlong)pauVar47 < 9) goto LAB_140015b46;
          FUN_14000da87(uVar27,pauVar47);
          pauVar47 = (undefined1 (*) [32])(*pauVar47 + 9);
          uVar24 = uVar24 + 9;
        }
        bVar49 = 1 < uVar33;
        uVar33 = uVar36;
      } while (bVar49);
      if (iVar35 < 0) goto LAB_1400157d8;
    }
    uVar25 = uVar30 - uVar24;
    uVar27 = 0;
    uVar42 = 0;
    goto LAB_140015c22;
  }
  uVar31 = 0x84;
  if ((longlong)param_3 - (longlong)param_2 < (longlong)(int)((param_5 - (param_5 == 0)) + 6))
  goto LAB_140015eaf;
  (*param_2)[0] = 0x30;
  if (param_5 == 0) {
    puVar37 = (undefined4 *)(*param_2 + 1);
  }
  else {
    (*param_2)[1] = 0x2e;
    FUN_1400b3c00((undefined1 (*) [32])(*param_2 + 2),0x30,(ulonglong)param_5);
    puVar37 = (undefined4 *)(*param_2 + (ulonglong)param_5 + 2);
  }
  *puVar37 = 0x30302b65;
  param_3 = (undefined1 (*) [32])(puVar37 + 1);
  goto LAB_140015e87;
LAB_140015b46:
  uVar31 = 0x84;
  goto LAB_140015eaf;
LAB_140015b85:
  uVar41 = uVar24;
  uVar24 = 0;
LAB_140015b88:
  uVar25 = uVar30 - uVar24;
  uVar42 = 0;
  iVar34 = uVar41 - uVar25;
  if (uVar41 < uVar25 || iVar34 == 0) {
LAB_140015c22:
    cVar48 = 5 < uVar42;
  }
  else {
    iVar34 = iVar34 + (uint)(iVar34 == 0);
    do {
      uVar33 = uVar27;
      uVar27 = uVar33 / 10;
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    uVar42 = (int)uVar33 + (int)(uVar33 / 10) * -10;
    if (uVar42 != 5) goto LAB_140015c22;
    iVar34 = uVar30 - local_88;
    uVar30 = -(iVar35 + iVar34);
    if ((int)uVar30 < 1) {
      bVar49 = true;
LAB_140015ed0:
      if ((iVar34 < 0) && (bVar49)) {
        uVar30 = 0xffffffff;
        do {
          uVar33 = uVar26 / 5;
          uVar30 = uVar30 + 1;
          iVar35 = (int)uVar26;
          uVar26 = uVar33;
        } while ((int)uVar33 * 5 == iVar35);
        cVar48 = '\x01';
        if ((uint)-iVar34 <= uVar30) {
LAB_140015f27:
          cVar48 = '\x02';
        }
      }
      else {
        cVar48 = '\x01';
        if ((bool)(-1 < iVar34 & bVar49)) goto LAB_140015f27;
      }
    }
    else {
      cVar48 = '\x01';
      if (uVar30 < 0x3c) {
        bVar49 = (uVar26 & ~(-1L << ((byte)uVar30 & 0x3f))) == 0;
        goto LAB_140015ed0;
      }
    }
  }
  uVar30 = (uint)uVar27;
  if (uVar24 == 0) {
    if (param_5 == 0) {
      if (pauVar47 == param_3) goto LAB_140015eaa;
      (*pauVar47)[0] = (char)uVar27 + '0';
      pauVar47 = (undefined1 (*) [32])(*pauVar47 + 1);
    }
    else {
      if ((longlong)param_3 - (longlong)pauVar47 < (longlong)(ulonglong)(uVar25 + 1)) {
LAB_140015eaa:
        uVar31 = 0x84;
        goto LAB_140015eaf;
      }
      uVar26 = 0;
      if (9999 < uVar30) {
        do {
          uVar41 = (uint)uVar27;
          uVar30 = (uint)(uVar27 / 10000);
          uVar24 = (int)(uVar27 / 10000) * -10000 + uVar41;
          lVar38 = ((ulonglong)uVar25 + 1) - uVar26;
          *(undefined2 *)((longlong)pauVar47 + lVar38 + -2) =
               *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar24 % 100) * 2);
          *(undefined2 *)((longlong)pauVar47 + lVar38 + -4) =
               *(undefined2 *)(&DAT_1400b7520 + ((ulonglong)uVar24 / 100) * 2);
          uVar24 = (int)uVar26 + 4;
          uVar26 = (ulonglong)uVar24;
          uVar27 = uVar27 / 10000;
        } while (99999999 < uVar41);
        uVar26 = (ulonglong)uVar24;
      }
      uVar24 = uVar30;
      if (99 < uVar30) {
        uVar24 = (uVar30 & 0xffff) / 100;
        *(undefined2 *)(*pauVar47 + ~uVar26 + (ulonglong)uVar25) =
             *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar30 + uVar24 * -100 & 0xffff) * 2);
      }
      if (uVar24 < 10) {
        (*pauVar47)[1] = 0x2e;
        bVar28 = (byte)uVar24 | 0x30;
      }
      else {
        bVar28 = (&DAT_1400b7520)[(ulonglong)uVar24 * 2];
        (*pauVar47)[2] = (&DAT_1400b7521)[(ulonglong)uVar24 * 2];
        (*pauVar47)[1] = 0x2e;
      }
      (*pauVar47)[0] = bVar28;
      pauVar47 = (undefined1 (*) [32])(*pauVar47 + (uVar25 + 1));
    }
  }
  else {
    uVar26 = (ulonglong)uVar25;
    if ((longlong)param_3 - (longlong)pauVar47 < (longlong)uVar26) goto LAB_140015eaa;
    if (uVar30 == 0) {
      FUN_1400b3c00(pauVar47,0x30,uVar26);
    }
    else {
      FUN_14000f1ed(uVar25,uVar27,(longlong)pauVar47);
    }
    pauVar47 = (undefined1 (*) [32])(*pauVar47 + uVar26);
  }
  pauVar1 = pauVar47;
  if (cVar48 != '\0') {
    while (pauVar23 = pauVar1, pauVar23 != param_2) {
      pauVar1 = (undefined1 (*) [32])(pauVar23[-1] + 0x1f);
      bVar28 = pauVar23[-1][0x1f];
      if (bVar28 != 0x2e) {
        if (bVar28 != 0x39) {
          if ((cVar48 == '\x01') || ((bVar28 & 1) != 0)) {
            pauVar23[-1][0x1f] = bVar28 + 1;
          }
          goto LAB_140015dfe;
        }
        (*pauVar1)[0] = 0x30;
        cVar48 = '\x01';
      }
    }
    (*pauVar23)[0] = 0x31;
    local_88 = local_88 + 1;
  }
LAB_140015dfe:
  uVar30 = -local_88;
  if ((int)-local_88 < 0) {
    uVar30 = local_88;
  }
  uVar31 = 0x84;
  if ((longlong)param_3 - (longlong)pauVar47 < (longlong)(5 - (ulonglong)(uVar30 < 100)))
  goto LAB_140015eaf;
  (*pauVar47)[0] = 0x65;
  (*pauVar47)[1] = (char)((int)local_88 >> 0x1f) * -2 + '+';
  if (uVar30 < 100) {
    uVar29 = *(undefined2 *)(&DAT_1400b7520 + (ulonglong)uVar30 * 2);
    lVar38 = 4;
  }
  else {
    uVar24 = (uVar30 / 10) * 2;
    uVar29 = *(undefined2 *)(&DAT_1400b7520 + uVar24);
    (*pauVar47)[4] = (char)uVar30 + (char)uVar24 * -5 | 0x30;
    lVar38 = 5;
  }
  param_3 = (undefined1 (*) [32])(*pauVar47 + lVar38);
  *(undefined2 *)(*pauVar47 + 2) = uVar29;
LAB_140015e87:
  uVar31 = 0;
LAB_140015eaf:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar31;
  return param_1;
}

