/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016b569 */

void FUN_18016b569(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  float *local_148;
  char local_131;
  ulonglong local_130;
  undefined4 local_124;
  undefined1 *local_120;
  undefined8 local_118;
  ulonglong local_110;
  char local_102;
  byte local_101;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  lVar6 = DAT_180419160;
  local_c0 = DAT_180402640 ^ (ulonglong)auStack_178;
  lVar4 = *(longlong *)(DAT_180419160 + 0x1608);
  if (*(char *)(lVar4 + 0x10e) == '\0') {
    lVar5 = *(longlong *)(DAT_180419160 + 0x24f8);
    if (lVar5 == 0) {
      if (DAT_180402640 == (local_c0 ^ (ulonglong)auStack_178)) {
        FUN_180101698("Call should only be done while in BeginTable() scope!");
        return;
      }
      goto LAB_18016bd33;
    }
    iVar15 = *(int *)(lVar5 + 0x74);
    uVar11 = (ulonglong)iVar15;
    lVar14 = uVar11 * 0x74 + *(longlong *)(lVar5 + 0x18);
    puVar13 = &DAT_1803861e4;
    if (param_1 != (undefined1 *)0x0) {
      puVar13 = param_1;
    }
    local_118 = FUN_180101d94(puVar13,0);
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,0xbf800000);
    FUN_1801023ca(&local_cc,puVar13,local_118,0);
    uVar12 = *(ulonglong *)(lVar4 + 0x158);
    local_d8 = uVar12;
    FUN_18016a505(&local_e8,lVar5,iVar15);
    fVar16 = (float)FUN_180102463(local_c8,*(float *)(lVar5 + 0x84) -
                                           (*(float *)(lVar5 + 0x88) + *(float *)(lVar5 + 0x88)));
    local_c4 = 0;
    fVar19 = (float)uVar12;
    fVar18 = local_e0;
    local_130 = uVar12;
    local_110 = uVar11;
    if (((*(byte *)(lVar5 + 4) & 8) == 0) || ((*(byte *)(lVar14 + 1) & 2) != 0)) {
      fVar22 = 0.0;
      fVar20 = local_cc + fVar19 + 0.0;
LAB_18016b771:
      local_e0 = (float)FUN_1800eebe2(fVar20,local_e0);
      fVar21 = 0.0;
    }
    else {
      fVar22 = (float)(int)(*(float *)(lVar6 + 0x1320) * DAT_1802de7b4 + *(float *)(lVar6 + 0xdf4));
      uVar2 = *(ushort *)(lVar14 + 0x5e);
      if ((short)uVar2 < 1) {
        fVar21 = 0.0;
        fVar20 = local_cc + fVar19 + 0.0 + fVar22;
        if (uVar2 == 0xffff) goto LAB_18016b771;
      }
      else {
        FUN_1800fead5(&local_c4,4,&DAT_18036b4b0,uVar2 + 1);
        fVar21 = *(float *)(lVar6 + 0xe0c);
        local_158 = (undefined1 *)CONCAT44(local_158._4_4_,0xbf800000);
        FUN_1801023ca(&local_f8,&local_c4,0,0);
        fVar21 = fVar21 + local_f8;
        fVar20 = local_cc + fVar19 + fVar21 + fVar22;
        fVar18 = local_e0;
      }
    }
    uVar17 = FUN_180102463(*(undefined4 *)(lVar14 + 0x4c),local_e0);
    *(undefined4 *)(lVar14 + 0x4c) = uVar17;
    uVar17 = FUN_180102463(*(undefined4 *)(lVar14 + 0x50),fVar20);
    *(undefined4 *)(lVar14 + 0x50) = uVar17;
    uVar17 = FUN_180106d4e(lVar4,puVar13,0);
    local_ec = (float)FUN_180102463(local_dc,*(float *)(lVar6 + 0xe18) + *(float *)(lVar6 + 0xe18) +
                                             fVar16 + local_e4);
    local_f8 = local_e8;
    local_f4 = local_e4;
    local_100 = 0.0;
    local_fc = fVar16;
    FUN_180111514(&local_100,DAT_1802bb8e0);
    cVar8 = FUN_1801116b6(&local_f8,uVar17,0,0);
    uVar7 = local_118;
    if (cVar8 != '\0') {
      sVar3 = *(short *)(lVar5 + 0x20e);
      local_158 = (undefined1 *)CONCAT44(local_158._4_4_,0x1000);
      local_124 = uVar17;
      local_120 = puVar13;
      local_131 = FUN_18013386b(&local_f8,uVar17,&local_101,&local_102);
      uVar11 = local_110;
      iVar15 = (int)local_110;
      if (((local_102 == '\0') && (local_101 == 0)) && (iVar15 != sVar3)) {
        uVar12 = local_130;
        if ((*(byte *)(lVar5 + 0x94) & 1) == 0) {
          uVar17 = *(undefined4 *)(lVar5 + 0x74);
          uVar9 = FUN_18010129b(0x30,DAT_1802ac570);
          uVar12 = local_130;
          FUN_18016a5a7(3,uVar9,uVar17);
        }
      }
      else {
        iVar10 = 0x1b;
        if (local_102 == '\0') {
          iVar10 = local_101 + 0x19;
        }
        uVar17 = FUN_18010129b(iVar10,DAT_1802ac570);
        FUN_18016a5a7(3,uVar17,*(undefined4 *)(lVar5 + 0x74));
        uVar12 = local_130;
      }
      FUN_180102b0e(&local_f8,local_124,10);
      puVar13 = local_120;
      if (local_102 == '\0') {
        *(float *)(lVar4 + 0x15c) =
             *(float *)(lVar6 + 0xe08) * DAT_1802de848 + *(float *)(lVar4 + 0x15c);
      }
      else {
        *(short *)(lVar5 + 0x216) = (short)uVar11;
        *(float *)(lVar4 + 0x15c) =
             *(float *)(lVar6 + 0xe08) * DAT_1802de848 + *(float *)(lVar4 + 0x15c);
        if ((((*(byte *)(lVar5 + 4) & 2) != 0) &&
            (cVar8 = FUN_1801083e1(0,DAT_1802bb8e0), cVar8 != '\0')) &&
           (*(char *)(lVar6 + 0x2428) == '\0')) {
          *(undefined2 *)(lVar5 + 0x7a) = *(undefined2 *)(lVar5 + 0x78);
          fVar16 = *(float *)(lVar6 + 0x104);
          if (((fVar16 < 0.0) &&
              (*(float *)(lVar6 + 0x118) <= local_e8 && local_e8 != *(float *)(lVar6 + 0x118))) &&
             (((longlong)*(short *)(lVar14 + 0x5a) != -1 && (*(longlong *)(lVar5 + 0x18) != 0)))) {
            FUN_180166536(lVar5,uVar11 & 0xffffffff,
                          (int)*(short *)(*(longlong *)(lVar5 + 0x18) + 0x56 +
                                         (longlong)*(short *)(lVar14 + 0x5a) * 0x74));
            fVar16 = *(float *)(lVar6 + 0x104);
          }
          if ((((0.0 < fVar16) && (fVar18 < *(float *)(lVar6 + 0x118))) &&
              ((longlong)*(short *)(lVar14 + 0x5c) != -1)) && (*(longlong *)(lVar5 + 0x18) != 0)) {
            FUN_180166536(lVar5,uVar11 & 0xffffffff,
                          (int)*(short *)(*(longlong *)(lVar5 + 0x18) + 0x56 +
                                         (longlong)*(short *)(lVar14 + 0x5c) * 0x74));
          }
        }
      }
      fVar16 = (fVar18 - fVar22) - fVar21;
      fVar18 = (float)FUN_180102463(fVar16,fVar19);
      if (((*(byte *)(lVar5 + 4) & 8) != 0) && ((*(byte *)(lVar14 + 1) & 2) == 0)) {
        if (*(short *)(lVar14 + 0x5e) != -1) {
          uVar12 = uVar12 & 0xffffffff00000000;
          fVar19 = (float)FUN_180102463(local_e8,fVar16);
          local_130 = uVar12;
          if (0 < *(short *)(lVar14 + 0x5e)) {
            uVar17 = FUN_18010129b(0,DAT_1802dc414);
            FUN_1801013be(0,uVar17);
            FUN_180101dc8((uint)(*(float *)(lVar6 + 0xe0c) + fVar19) | uVar12,&local_c4,0,1);
            FUN_180101625(1);
            fVar19 = fVar19 + fVar21;
          }
          bVar1 = *(byte *)(lVar14 + 0x71);
          uVar17 = FUN_18010129b(0,DAT_1802ac570);
          local_158 = (undefined1 *)CONCAT44(local_158._4_4_,0x3f266666);
          FUN_18019b80a(*(undefined8 *)(lVar4 + 800),(uint)fVar19 | local_130,uVar17,
                        (bVar1 & 3) == 1 ^ 3);
        }
        if ((local_131 != '\0') && (iVar15 != *(short *)(lVar5 + 0x21a))) {
          uVar17 = FUN_18016aecf(lVar14);
          FUN_18016af1f(uVar11 & 0xffffffff,uVar17,*(undefined1 *)(lVar6 + 0x139));
        }
      }
      local_fc = local_ec;
      local_148 = &local_cc;
      local_150 = uVar7;
      local_158 = puVar13;
      local_100 = fVar18;
      FUN_180102527(*(undefined8 *)(lVar4 + 800),&local_d8,&local_100,fVar18);
      if (((fVar18 - (float)local_d8 < local_cc) && (local_101 != 0)) &&
         (*(int *)(lVar6 + 0x167c) == 0)) {
        FUN_18011ab06(&DAT_180364193,(int)uVar7 - (int)puVar13,puVar13);
      }
      cVar8 = FUN_18011b73a(0,local_124);
      if (cVar8 != '\0') {
        FUN_180169352(uVar11 & 0xffffffff);
      }
    }
  }
  if (DAT_180402640 == (local_c0 ^ (ulonglong)auStack_178)) {
    return;
  }
LAB_18016bd33:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_c0 ^ (ulonglong)auStack_178);
}

