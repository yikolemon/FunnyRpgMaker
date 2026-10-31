/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e42d6 */

undefined8 FUN_1801e42d6(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  short sVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  short sVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong unaff_R14;
  ushort *puVar33;
  bool bVar34;
  bool bVar35;
  undefined1 auStack_118 [44];
  uint local_ec;
  uint local_e8;
  uint local_e4;
  ulonglong local_e0;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  uint *local_b0;
  ulonglong local_a8;
  ushort *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  byte *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined3 uStack_58;
  undefined4 uStack_55;
  undefined8 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_118;
  uVar14 = (ulonglong)param_2;
  local_88 = *param_1;
  local_80 = (byte *)0x0;
  puVar22 = (undefined8 *)param_1[6];
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  uVar27 = *(uint *)(param_1[0x230] + 0x40);
  uStack_58 = 0;
  uStack_55 = 0;
  uStack_51 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_78 = 0;
  uStack_70 = 0;
  uVar18 = -*(uint *)(param_1 + uVar14 * 0x113 + 0xd);
  if ((int)uVar18 < 0) {
    uVar18 = *(uint *)(param_1 + uVar14 * 0x113 + 0xd);
  }
  *(undefined4 *)(param_1 + uVar14 * 0x113 + 9) = 0;
  uVar29 = param_1[4];
  iVar4 = *(int *)((longlong)param_1 + 0x1c);
  uVar30 = (longlong)iVar4 * 0x30 + uVar29;
  if (param_2 == 0) {
    if (0 < iVar4) {
      do {
        *(int *)(uVar29 + 0x18) = (int)*(short *)(uVar29 + 0xc);
        *(int *)(uVar29 + 0x1c) = (int)*(short *)(uVar29 + 0xe);
        uVar29 = uVar29 + 0x30;
      } while (uVar29 < uVar30);
    }
  }
  else if (0 < iVar4) {
    do {
      *(int *)(uVar29 + 0x18) = (int)*(short *)(uVar29 + 0xe);
      *(int *)(uVar29 + 0x1c) = (int)*(short *)(uVar29 + 0xc);
      uVar29 = uVar29 + 0x30;
    } while (uVar29 < uVar30);
  }
  local_b0 = (uint *)(param_1 + uVar14 * 0x113 + 9);
  if (iVar3 < 1) {
LAB_1801e4945:
    uVar14 = *(ulonglong *)(local_b0 + 2);
    uVar11 = 0;
    if ((uVar14 != 0) && ((ulonglong)*local_b0 != 0)) {
      uVar29 = uVar14 + (ulonglong)*local_b0 * 0x48;
      do {
        lVar13 = *(longlong *)(uVar14 + 0x40);
        iVar3 = *(int *)(*(longlong *)(uVar14 + 0x38) + 0x1c);
        iVar4 = *(int *)(lVar13 + 0x1c);
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(uVar14 + 0x38) + 0x28) + 0x1c);
        if (iVar3 < iVar4) {
          if (iVar5 < iVar3) {
            *(short *)(uVar14 + 10) = *(short *)(uVar14 + 10) + (short)((uint)(iVar3 - iVar5) >> 1);
          }
          iVar3 = *(int *)(*(longlong *)(lVar13 + 0x20) + 0x1c);
          uVar27 = iVar3 - iVar4;
          if (uVar27 != 0 && iVar4 <= iVar3) {
            *(short *)(uVar14 + 10) = *(short *)(uVar14 + 10) + (short)(uVar27 >> 1);
          }
        }
        else {
          if (iVar5 - iVar3 != 0 && iVar3 <= iVar5) {
            *(short *)(uVar14 + 10) = *(short *)(uVar14 + 10) + (short)((uint)(iVar5 - iVar3) >> 1);
          }
          piVar1 = (int *)(*(longlong *)(lVar13 + 0x20) + 0x1c);
          uVar27 = iVar4 - *piVar1;
          if (uVar27 != 0 && *piVar1 <= iVar4) {
            *(short *)(uVar14 + 10) = *(short *)(uVar14 + 10) + (short)(uVar27 >> 1);
          }
        }
        uVar14 = uVar14 + 0x48;
        uVar11 = 0;
      } while (uVar14 < uVar29);
    }
LAB_1801e49de:
    if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_118)) {
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_48 ^ (ulonglong)auStack_118);
    }
    return uVar11;
  }
  local_b8 = (ulonglong)(uVar27 >> 1) / 7;
  local_98 = puVar22 + iVar3;
  pbVar20 = (byte *)0x0;
  local_e4 = uVar18;
  local_c4 = uVar18;
LAB_1801e43f6:
  puVar6 = (ushort *)*puVar22;
  puVar33 = puVar6;
  if ((((*puVar6 & 0x40) == 0) &&
      (bVar15 = (char)*(byte *)(*(longlong *)(puVar6 + 0x14) + 3) >> 7,
      local_c4 == (byte)((*(byte *)(*(longlong *)(puVar6 + 0x14) + 3) ^ bVar15) - bVar15))) &&
     (bVar15 = (char)*(byte *)((longlong)puVar6 + 3) >> 7,
     local_c4 == (byte)((*(byte *)((longlong)puVar6 + 3) ^ bVar15) - bVar15))) {
    do {
      puVar33 = *(ushort **)(puVar33 + 0x14);
      bVar15 = (char)*(byte *)((longlong)puVar33 + 3) >> 7;
      if (local_c4 != (byte)((*(byte *)((longlong)puVar33 + 3) ^ bVar15) - bVar15)) {
        puVar33 = *(ushort **)(puVar33 + 0x10);
        break;
      }
    } while (puVar33 != puVar6);
  }
  uVar18 = 0xffff8300;
  uVar12 = 32000;
  uVar10 = 0;
  bVar34 = false;
  uVar27 = 32000;
  uVar26 = 0xffff8300;
  uVar28 = 0;
  uVar32 = 32000;
  uVar31 = 0xffff8300;
  local_a8 = 0;
  pbVar24 = (byte *)0x0;
  local_e0 = 32000;
  local_c0 = 0xffff8300;
  local_e8 = 32000;
  local_ec = 0xffff8300;
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 32000;
  local_d4 = 0xffff8300;
  local_a0 = puVar33;
  local_90 = puVar22;
  do {
    if (bVar34) {
      uVar17 = *(uint *)(puVar33 + 0xc);
      if ((int)uVar17 < (int)uVar12) {
        uVar12 = uVar17;
      }
      uVar19 = uVar18;
      if ((int)uVar18 < (int)uVar17) {
        uVar19 = uVar17;
      }
      uVar18 = *(uint *)(puVar33 + 0xe);
      uVar17 = uVar27;
      if ((int)uVar18 < (int)uVar27) {
        uVar17 = uVar18;
      }
      uVar2 = *puVar33;
      if ((int)uVar18 < (int)uVar27) {
        uVar10 = (uint)uVar2;
      }
      if ((int)uVar26 < (int)uVar18) {
        uVar28 = (uint)uVar2;
        uVar26 = uVar18;
      }
      uVar8 = uVar32;
      if ((int)uVar18 < (int)uVar32) {
        uVar8 = uVar18;
      }
      if ((int)uVar18 <= (int)uVar31) {
        uVar18 = uVar31;
      }
      bVar34 = (uVar2 & 3) != 0;
      if (bVar34) {
        uVar8 = uVar32;
      }
      unaff_R14 = (ulonglong)uVar8;
      if (bVar34) {
        uVar18 = uVar31;
      }
      uVar31 = uVar18;
      sVar16 = (short)uVar17;
      sVar25 = (short)uVar26;
      uVar18 = uVar19;
      uVar27 = uVar17;
      if ((uVar2 & 0x40) == 0) {
        if ((local_e4 != (int)(char)*(byte *)((longlong)puVar33 + 3)) || (puVar33 == local_a0)) {
          if ((pbVar24 == (byte *)0x0) ||
             (*(longlong *)(pbVar20 + 0x38) != *(longlong *)(pbVar24 + 0x40))) goto LAB_1801e456a;
          uVar18 = (uint)local_e0;
          uVar32 = (uint)local_c0;
          if (*(byte *)(*(longlong *)(pbVar24 + 0x40) + 2) == (byte)puVar33[1]) {
            if ((int)uVar18 < (int)uVar12) {
              uVar12 = uVar18;
            }
            if ((int)uVar19 < (int)uVar32) {
              uVar19 = uVar32;
            }
            if ((int)local_e8 < (int)uVar17) {
              uVar10 = local_c8;
              uVar17 = local_e8;
            }
            if ((int)uVar26 < (int)local_ec) {
              uVar28 = local_cc;
              uVar26 = local_ec;
            }
            if ((int)local_d0 < (int)uVar8) {
              unaff_R14 = (ulonglong)local_d0;
            }
            if ((int)uVar31 < (int)local_d4) {
              uVar31 = local_d4;
            }
            *(ushort **)(pbVar24 + 0x40) = puVar33;
            *(short *)(pbVar24 + 2) = (short)(uVar12 + uVar19 >> 1);
            *(short *)(pbVar24 + 4) = (short)(uVar19 - uVar12 >> 1);
            *pbVar24 = *pbVar24 & 0xfe |
                       ((int)(uVar31 - (int)unaff_R14) < (int)local_b8 &&
                       ((uVar28 | uVar10) & 3) != 0);
            *(short *)(pbVar24 + 6) = (short)uVar17;
            *(short *)(pbVar24 + 8) = (short)uVar26;
            *(short *)(pbVar24 + 10) = (short)uVar26 - (short)uVar17;
            uVar18 = uVar19;
            uVar27 = uVar17;
          }
          else {
            uVar21 = local_e8 - local_ec;
            if ((int)local_e8 < (int)local_ec) {
              uVar21 = local_ec - local_e8;
            }
            uVar7 = uVar17 - uVar26;
            if ((int)uVar17 < (int)uVar26) {
              uVar7 = uVar26 - uVar17;
            }
            local_e0 = local_e0 & 0xffffffff;
            if ((int)uVar12 < (int)uVar18) {
              local_e0 = (ulonglong)uVar12;
            }
            local_c0 = local_c0 & 0xffffffff;
            if ((int)uVar32 < (int)uVar19) {
              local_c0 = (ulonglong)uVar19;
            }
            uVar18 = (uint)local_c0;
            uVar32 = (uint)local_e0;
            if (uVar7 < uVar21) {
              *(ushort **)(pbVar24 + 0x40) = puVar33;
              *(short *)(pbVar24 + 2) = (short)(uVar32 + uVar18 >> 1);
              *(short *)(pbVar24 + 4) = (short)(uVar18 - uVar32 >> 1);
              uVar18 = uVar19;
            }
            else {
              *(ushort **)(pbVar20 + 0x40) = puVar33;
              *(short *)(pbVar20 + 2) = (short)(uVar32 + uVar18 >> 1);
              *(short *)(pbVar20 + 4) = (short)(uVar18 - uVar32 >> 1);
              if ((((uVar28 | uVar10) & 3) != 0) && ((int)(uVar31 - uVar8) < (int)local_b8)) {
                *pbVar20 = *pbVar20 | 1;
              }
              *(short *)(pbVar20 + 6) = sVar16;
              *(short *)(pbVar20 + 8) = sVar25;
              *(short *)(pbVar20 + 10) = (short)(uVar26 - uVar17);
              pbVar23 = pbVar24;
              for (lVar13 = 9; uVar12 = uVar32, local_ec = uVar26, local_e8 = uVar17,
                  local_d4 = uVar31, local_d0 = uVar8, local_cc = uVar28, local_c8 = uVar10,
                  lVar13 != 0; lVar13 = lVar13 + -1) {
                *(undefined8 *)pbVar23 = *(undefined8 *)pbVar20;
                pbVar20 = pbVar20 + 8;
                pbVar23 = pbVar23 + 8;
              }
            }
          }
          *local_b0 = *local_b0 - 1;
          goto LAB_1801e45ed;
        }
        bVar34 = true;
        bVar9 = true;
      }
      else {
LAB_1801e456a:
        *(ushort **)(pbVar20 + 0x40) = puVar33;
        *(short *)(pbVar20 + 2) = (short)(uVar12 + uVar19 >> 1);
        *(short *)(pbVar20 + 4) = (short)(uVar19 - uVar12 >> 1);
        if ((((uVar28 | uVar10) & 3) != 0) && ((int)(uVar31 - uVar8) < (int)local_b8)) {
          *pbVar20 = *pbVar20 | 1;
        }
        *(short *)(pbVar20 + 6) = sVar16;
        *(short *)(pbVar20 + 8) = sVar25;
        *(short *)(pbVar20 + 10) = sVar25 - sVar16;
        local_e0 = (ulonglong)uVar12;
        local_c0 = (ulonglong)uVar19;
        pbVar24 = pbVar20;
        local_ec = uVar26;
        local_e8 = uVar17;
        local_d4 = uVar31;
        local_d0 = uVar8;
        local_cc = uVar28;
        local_c8 = uVar10;
LAB_1801e45ed:
        local_80 = (byte *)0x0;
        pbVar20 = (byte *)0x0;
        bVar9 = false;
        bVar34 = false;
      }
      uVar32 = (uint)unaff_R14;
    }
    else {
      bVar9 = false;
      bVar34 = false;
    }
    if (puVar33 == local_a0) {
      bVar35 = (char)local_a8 != '\0';
      unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
      local_a8 = unaff_R14;
      if (bVar35) break;
    }
    if (!bVar9 && (*puVar33 & 0x40) == 0) {
      bVar15 = *(byte *)((longlong)puVar33 + 3);
      unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),bVar15);
      uVar19 = (uint)(char)bVar15;
      uVar17 = -uVar19;
      if ((int)-uVar19 < 0) {
        uVar17 = uVar19;
      }
      if ((uVar17 == local_c4) || (bVar34 = false, puVar33 == *(ushort **)(puVar33 + 0x14))) {
        if (1000 < *local_b0) {
          *local_b0 = 0;
          uVar11 = 0;
          goto LAB_1801e49de;
        }
        uVar11 = FUN_1801e4edc(local_b0,local_88,&local_80);
        if ((int)uVar11 != 0) goto LAB_1801e49de;
        *local_80 = 0;
        *(undefined8 *)(local_80 + 1) = local_78;
        *(undefined8 *)(local_80 + 9) = uStack_70;
        *(undefined4 *)(local_80 + 0x11) = (undefined4)uStack_68;
        *(undefined4 *)(local_80 + 0x15) = uStack_68._4_4_;
        *(undefined4 *)(local_80 + 0x19) = uStack_60;
        *(undefined4 *)(local_80 + 0x1d) = uStack_5c;
        *(uint *)(local_80 + 0x20) = CONCAT31(uStack_58,uStack_5c._3_1_);
        *(undefined4 *)(local_80 + 0x24) = uStack_55;
        *(undefined4 *)(local_80 + 0x28) = (undefined4)uStack_51;
        *(undefined4 *)(local_80 + 0x2c) = uStack_51._4_4_;
        local_80[0x30] = 0;
        local_80[0x31] = 0x7d;
        local_80[0x32] = 0;
        local_80[0x33] = 0;
        local_80[0x34] = 0;
        local_80[0x35] = 0;
        local_80[0x36] = 0;
        local_80[0x37] = 0;
        local_80[1] = bVar15;
        *(ushort **)(local_80 + 0x38) = puVar33;
        *(ushort **)(local_80 + 0x40) = puVar33;
        pbVar23 = local_80 + -0x48;
        if (pbVar24 == (byte *)0x0) {
          pbVar23 = pbVar24;
        }
        uVar27 = *(uint *)(puVar33 + 0xe);
        uVar2 = *puVar33;
        uVar10 = (uint)uVar2;
        bVar34 = (uVar2 & 3) == 0;
        uVar32 = 32000;
        if (bVar34) {
          uVar32 = uVar27;
        }
        uVar31 = 0xffff8300;
        if (bVar34) {
          uVar31 = uVar27;
        }
        uVar18 = *(uint *)(puVar33 + 0xc);
        bVar34 = true;
        if (puVar33 == *(ushort **)(puVar33 + 0x14)) {
          *(short *)(local_80 + 2) = (short)uVar18;
          if ((*puVar33 & 3) != 0) {
            *local_80 = 1;
          }
          *(ushort *)(local_80 + 6) = puVar33[0xe];
          *(ushort *)(local_80 + 8) = puVar33[0xe];
          local_80[10] = 0;
          local_80[0xb] = 0;
          local_80 = (byte *)0x0;
          bVar34 = false;
        }
        uVar28 = (uint)uVar2;
        pbVar20 = local_80;
        pbVar24 = pbVar23;
        uVar12 = uVar18;
        local_e4 = uVar19;
        uVar26 = uVar27;
      }
    }
    puVar33 = *(ushort **)(puVar33 + 0x10);
  } while( true );
  puVar22 = local_90 + 1;
  if (local_98 <= puVar22) goto LAB_1801e4945;
  goto LAB_1801e43f6;
}

