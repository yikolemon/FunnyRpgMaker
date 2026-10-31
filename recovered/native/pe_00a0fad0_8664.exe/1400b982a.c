/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b982a */

void FUN_1400b982a(longlong param_1,longlong param_2,byte *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  char cVar24;
  byte bVar25;
  char cVar26;
  undefined1 auStack_a8 [32];
  longlong local_88;
  byte *local_80;
  byte *local_78;
  byte local_6c [4];
  undefined8 local_68;
  undefined8 uStack_60;
  byte local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_a8;
  local_80 = param_3;
  if (param_3 == (byte *)0x0) {
    local_80 = local_6c;
  }
  local_6c[0] = 0;
  local_6c[1] = 0;
  local_6c[2] = 0;
  local_6c[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  local_58[0xf] = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar1 = *param_4;
  if (uVar1 < 0x3fc && 0x289 < (ushort)(uVar1 - 0x15e)) {
    if (uVar1 == 0x3f2) {
      cVar26 = '\0';
      cVar24 = '\0';
      uVar11 = 0;
      uVar22 = 0;
      lVar23 = 0;
      lVar10 = param_2;
      lVar21 = param_2;
      do {
        uVar15 = (ulonglong)((uint)lVar23 & 3);
        bVar25 = local_80[uVar15];
        cVar9 = (char)lVar23 * (char)lVar23;
        local_58[lVar23] =
             local_58[lVar23] ^ cVar9 * (*(char *)(lVar21 + (uVar22 / 0xf) * -0xf) + bVar25);
        bVar19 = local_80[uVar15 ^ 2];
        *(byte *)((longlong)&local_68 + lVar23) =
             *(byte *)((longlong)&local_68 + lVar23) ^
             (*(char *)(lVar10 + (uVar11 / 0xf) * -0xf) - cVar9) + bVar19;
        local_58[0xf] = local_58[0xf] ^ cVar26 + *(char *)(param_2 + lVar23) + bVar25;
        uStack_60 = CONCAT17(uStack_60._7_1_ ^ *(char *)(param_2 + lVar23) + cVar24 + bVar19,
                             (undefined7)uStack_60);
        lVar23 = lVar23 + 1;
        lVar21 = lVar21 + 7;
        uVar22 = uVar22 + 7;
        lVar10 = lVar10 + 0xb;
        uVar11 = uVar11 + 0xb;
        cVar24 = cVar24 + '\x05';
        cVar26 = cVar26 + '\x03';
      } while (lVar23 != 0xf);
    }
    else {
      cVar24 = '\0';
      cVar26 = '\0';
      uVar11 = 0;
      uVar22 = 0;
      lVar23 = 0;
      lVar10 = param_2;
      lVar21 = param_2;
      do {
        cVar9 = (char)lVar23 * (char)lVar23;
        local_58[lVar23] = local_58[lVar23] ^ *(char *)(lVar10 + (uVar22 / 0xf) * -0xf) + cVar9;
        *(byte *)((longlong)&local_68 + lVar23) =
             *(byte *)((longlong)&local_68 + lVar23) ^
             *(char *)(lVar21 + (uVar11 / 0xf) * -0xf) - cVar9;
        local_58[0xf] = local_58[0xf] ^ cVar24 + *(char *)(param_2 + lVar23);
        uStack_60 = CONCAT17(uStack_60._7_1_ ^ *(char *)(param_2 + lVar23) + cVar26,
                             (undefined7)uStack_60);
        lVar23 = lVar23 + 1;
        lVar10 = lVar10 + 7;
        uVar22 = uVar22 + 7;
        lVar21 = lVar21 + 0xb;
        uVar11 = uVar11 + 0xb;
        cVar26 = cVar26 + '\x05';
        cVar24 = cVar24 + '\x03';
      } while (lVar23 != 0xf);
    }
  }
  else {
    bVar25 = 0;
    uVar22 = 0;
    uVar11 = 0;
    do {
      uVar14 = (uint)uVar11;
      bVar19 = local_80[uVar14 & 3];
      bVar18 = *(byte *)(param_2 + uVar11);
      uVar20 = (uint)bVar18 + (uint)bVar18 * 2 ^ (byte)(bVar19 % 5 + 7) * uVar14;
      uVar15 = uVar11 + 1;
      bVar16 = local_80[(uint)uVar15 & 3];
      cVar24 = (char)((uint)bVar16 * 0x25 >> 8);
      uVar17 = uVar14 + 3;
      if (0xb < uVar11) {
        uVar17 = uVar14 - 0xc;
      }
      uVar17 = (uint)*(byte *)(param_2 + (ulonglong)uVar17) +
               (uint)*(byte *)(param_2 + (ulonglong)uVar17) * 4 ^
               (byte)(bVar16 + ((byte)(((byte)(bVar16 - cVar24) >> 1) + cVar24) >> 2) * -7 + 0xb) *
               uVar14;
      iVar13 = ((uint)*(byte *)(param_2 +
                               (ulonglong)(uVar20 + (uVar20 * 0x8889 >> 0x13) * -0xf & 0xffff)) <<
               ((byte)uVar11 + (char)(uVar22 / 3) * -3 & 0x1f)) + (uVar14 ^ bVar19);
      local_58[uVar11] =
           local_58[uVar11] ^ (char)iVar13 + (char)((uint)(iVar13 * 0x828d) >> 0x17) * '\x05';
      bVar16 = local_80[(ulonglong)(uVar14 & 3) ^ 2];
      uVar17 = (uVar14 * uVar14 ^ (uint)bVar16) +
               (uint)(*(byte *)(param_2 +
                               (ulonglong)(uVar17 + (uVar17 * 0x8889 >> 0x13) * -0xf & 0xffff)) >>
                     ((byte)uVar11 & 1));
      *(byte *)((longlong)&local_68 + uVar11) =
           *(byte *)((longlong)&local_68 + uVar11) ^
           (char)uVar17 + (char)((uVar17 & 0xffff) / 0xf6) * '\n';
      uVar17 = (((uint)bVar19 ^ (uint)uVar15) + (uint)bVar18) * 7;
      local_58[0xf] = local_58[0xf] ^ (char)uVar17 + (char)((uVar17 & 0xffff) / 0xfd) * '\x03';
      uStack_60 = CONCAT17(uStack_60._7_1_ ^ (bVar18 - (bVar16 ^ bVar25)) * '\v',
                           (undefined7)uStack_60);
      uVar22 = (ulonglong)((int)uVar22 + 1);
      bVar25 = bVar25 + 2;
      uVar11 = uVar15;
    } while (uVar15 != 0xf);
  }
  uVar8 = local_58._8_8_;
  uVar4 = local_58._0_8_;
  uVar5 = uStack_60;
  uVar3 = local_68;
  local_58[0] = local_58[0] ^ *local_80;
  uVar7 = local_58._0_8_;
  bVar25 = uStack_60._2_1_ ^ *local_80;
  uStack_60._0_3_ = CONCAT12(bVar25,(undefined2)uStack_60);
  uVar6 = uStack_60;
  pbVar12 = local_6c;
  if (param_3 != (byte *)0x0) {
    pbVar12 = param_3;
  }
  local_58[4] = SUB81(uVar4,4);
  local_58._5_3_ = SUB83(uVar4,5);
  local_58._0_4_ = (undefined4)uVar7;
  local_58[4] = local_58[4] ^ pbVar12[1];
  bVar25 = local_68._1_1_ ^ pbVar12[1];
  local_68._0_2_ = CONCAT11(bVar25,(undefined1)local_68);
  uVar4 = local_68;
  local_58[8] = local_58[8] ^ pbVar12[2];
  uVar7 = local_58._8_8_;
  local_68._4_1_ = SUB81(uVar3,4);
  local_68._4_1_ = local_68._4_1_ ^ pbVar12[2];
  local_68._5_3_ = SUB83(uVar3,5);
  local_68._0_4_ = (undefined4)uVar4;
  uVar2 = (undefined4)local_68;
  uVar4 = local_68;
  local_58[0xc] = SUB81(uVar8,4);
  local_58._13_3_ = SUB83(uVar8,5);
  local_58._8_4_ = (undefined4)uVar7;
  local_58[0xc] = local_58[0xc] ^ pbVar12[3];
  local_68._7_1_ = SUB81(uVar3,7);
  local_68 = CONCAT17(local_68._7_1_ ^ pbVar12[3],(int7)uVar4);
  lVar10 = 0;
  do {
    *(undefined4 *)(param_1 + lVar10 * 4) = *(undefined4 *)(local_58 + lVar10 * 4);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  uVar11 = 4;
  do {
    bVar25 = *(byte *)(param_1 + -4 + uVar11 * 4);
    bVar19 = *(byte *)(param_1 + -3 + uVar11 * 4);
    bVar18 = *(byte *)(param_1 + -2 + uVar11 * 4);
    bVar16 = *(byte *)(param_1 + -1 + uVar11 * 4);
    if ((uVar11 & 3) == 0) {
      uVar22 = (ulonglong)bVar25;
      bVar25 = (&DAT_1401635f0)[uVar11 >> 2 & 0x3fffffff] ^ (&DAT_1401634f0)[bVar19];
      bVar19 = (byte)(&DAT_1401634f0)[bVar18] >> 4;
      bVar18 = ~(&DAT_1401634f0)[bVar16];
      bVar16 = (&DAT_1401634f0)[uVar22] << 1 | (char)(&DAT_1401634f0)[uVar22] < '\0';
    }
    *(byte *)(param_1 + uVar11 * 4) = bVar25 ^ *(byte *)(param_1 + -0x10 + uVar11 * 4);
    *(byte *)(param_1 + 1 + uVar11 * 4) = bVar19 ^ *(byte *)(param_1 + -0xf + uVar11 * 4);
    *(byte *)(param_1 + 2 + uVar11 * 4) = bVar18 ^ *(byte *)(param_1 + -0xe + uVar11 * 4);
    *(byte *)(param_1 + 3 + uVar11 * 4) = bVar16 ^ *(byte *)(param_1 + -0xd + uVar11 * 4);
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x2c);
  uStack_60._4_4_ = SUB84(uVar5,4);
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0xb8) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0xbc) = uStack_60._4_4_;
  if (DAT_1401c9640 != (local_48 ^ (ulonglong)auStack_a8)) {
    local_88 = param_2;
    local_78 = param_3;
    uStack_60 = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_48 ^ (ulonglong)auStack_a8);
  }
  return;
}

