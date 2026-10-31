/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b909c */

void FUN_1400b909c(ushort *param_1,longlong param_2,longlong param_3,byte *param_4,longlong param_5,
                  longlong *param_6,longlong *param_7,char *param_8,char *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  size_t sVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  byte bVar14;
  longlong lVar15;
  byte bVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  short sVar22;
  longlong lVar23;
  uint uVar24;
  byte bVar25;
  bool bVar26;
  undefined1 auStack_328 [40];
  ulonglong local_300;
  longlong local_2f8;
  longlong local_2f0;
  ushort *local_2e8;
  longlong local_2e0;
  uint local_2d4;
  uint local_2d0;
  byte local_2cc [4];
  byte local_2c8 [640];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_328;
  local_2cc[2] = 0;
  local_2cc[0] = 0;
  local_2cc[1] = 0;
  pbVar1 = (byte *)(param_2 + 2);
  pbVar2 = (byte *)(param_2 + 5);
  pbVar3 = (byte *)(param_2 + 0xc);
  if (*param_8 == '\0') {
    pbVar4 = (byte *)(param_2 + 0xb);
    if (2 < *pbVar4) {
      uVar19 = 0;
      bVar25 = 0;
      do {
        bVar25 = bVar25 ^ *(byte *)(param_2 + (uVar19 / 0xf) * -0xf);
        bVar25 = (bVar25 << 5 | bVar25 >> 3) ^ (byte)uVar19;
        uVar19 = uVar19 + 1;
        param_2 = param_2 + 1;
      } while (*pbVar4 / 3 != (byte)uVar19);
      goto LAB_1400b9192;
    }
  }
  else {
    bVar16 = *(byte *)(param_2 + 8) >> 2;
    if (bVar16 != 0) {
      uVar19 = 0;
      bVar25 = 0;
      do {
        bVar25 = bVar25 ^ *(byte *)(param_2 + (uVar19 / 0xf) * -0xf);
        bVar25 = (bVar25 << 6 | bVar25 >> 2) ^ (byte)uVar19;
        uVar19 = uVar19 + 1;
        param_2 = param_2 + 1;
      } while (bVar16 != (byte)uVar19);
      goto LAB_1400b9192;
    }
  }
  bVar25 = 0;
LAB_1400b9192:
  uVar19 = (ulonglong)bVar25;
  local_2e8 = param_1;
  local_2e0 = param_3;
  FUN_140117538((uint)*pbVar2 * (uint)*pbVar1 + (uint)*pbVar3 + (uint)bVar25);
  bVar16 = FUN_140117550();
  local_2cc[bVar25 % 3] = bVar16;
  local_300 = uVar19;
  if ((*param_8 == '\0') && (0x3fb < *local_2e8 || (ushort)(*local_2e8 - 0x15e) < 0x28a)) {
    iVar9 = FUN_140117550();
    local_2cc[1] = (char)iVar9 +
                   ((char)(uint)((ulonglong)((longlong)iVar9 * 0x828cbfbf) >> 0x27) -
                   (char)(iVar9 >> 0x1f)) * '\x05';
  }
  bVar14 = local_2cc[2];
  bVar7 = local_2cc[1];
  bVar16 = local_2cc[0];
  lVar23 = local_2e0;
  lVar15 = -0x100;
  do {
    uVar8 = FUN_140117550();
    bVar6 = FUN_140117550();
    *(byte *)(lVar23 + 0x100 + lVar15) = bVar6 ^ bVar16;
    *(byte *)(lVar23 + 0x200 + lVar15) = (byte)((ushort)uVar8 >> 8) ^ bVar7;
    *(byte *)(lVar23 + 0x300 + lVar15) = (byte)uVar8 ^ bVar14;
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0);
  if (param_4 != (byte *)0x0) {
    lVar15 = 0;
    do {
      uVar8 = FUN_140117550();
      *(byte *)(lVar23 + lVar15) =
           (byte)((ushort)uVar8 >> 8) ^ param_4[2] ^ *(byte *)(lVar23 + lVar15) ^ bVar25;
      *(byte *)(lVar23 + 0x100 + lVar15) =
           (byte)uVar8 ^ *param_4 ^ *(byte *)(lVar23 + 0x100 + lVar15) ^ bVar25;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x80);
  }
  if (*param_8 == '\x01') {
    local_2c8[0x70] = 0;
    local_2c8[0x71] = 0;
    local_2c8[0x72] = 0;
    local_2c8[0x73] = 0;
    local_2c8[0x74] = 0;
    local_2c8[0x75] = 0;
    local_2c8[0x76] = 0;
    local_2c8[0x77] = 0;
    local_2c8[0x78] = 0;
    local_2c8[0x79] = 0;
    local_2c8[0x7a] = 0;
    local_2c8[0x7b] = 0;
    local_2c8[0x7c] = 0;
    local_2c8[0x7d] = 0;
    local_2c8[0x7e] = 0;
    local_2c8[0x7f] = 0;
    local_2c8[0x60] = 0;
    local_2c8[0x61] = 0;
    local_2c8[0x62] = 0;
    local_2c8[99] = 0;
    local_2c8[100] = 0;
    local_2c8[0x65] = 0;
    local_2c8[0x66] = 0;
    local_2c8[0x67] = 0;
    local_2c8[0x68] = 0;
    local_2c8[0x69] = 0;
    local_2c8[0x6a] = 0;
    local_2c8[0x6b] = 0;
    local_2c8[0x6c] = 0;
    local_2c8[0x6d] = 0;
    local_2c8[0x6e] = 0;
    local_2c8[0x6f] = 0;
    local_2c8[0x50] = 0;
    local_2c8[0x51] = 0;
    local_2c8[0x52] = 0;
    local_2c8[0x53] = 0;
    local_2c8[0x54] = 0;
    local_2c8[0x55] = 0;
    local_2c8[0x56] = 0;
    local_2c8[0x57] = 0;
    local_2c8[0x58] = 0;
    local_2c8[0x59] = 0;
    local_2c8[0x5a] = 0;
    local_2c8[0x5b] = 0;
    local_2c8[0x5c] = 0;
    local_2c8[0x5d] = 0;
    local_2c8[0x5e] = 0;
    local_2c8[0x5f] = 0;
    local_2c8[0x40] = 0;
    local_2c8[0x41] = 0;
    local_2c8[0x42] = 0;
    local_2c8[0x43] = 0;
    local_2c8[0x44] = 0;
    local_2c8[0x45] = 0;
    local_2c8[0x46] = 0;
    local_2c8[0x47] = 0;
    local_2c8[0x48] = 0;
    local_2c8[0x49] = 0;
    local_2c8[0x4a] = 0;
    local_2c8[0x4b] = 0;
    local_2c8[0x4c] = 0;
    local_2c8[0x4d] = 0;
    local_2c8[0x4e] = 0;
    local_2c8[0x4f] = 0;
    local_2c8[0x30] = 0;
    local_2c8[0x31] = 0;
    local_2c8[0x32] = 0;
    local_2c8[0x33] = 0;
    local_2c8[0x34] = 0;
    local_2c8[0x35] = 0;
    local_2c8[0x36] = 0;
    local_2c8[0x37] = 0;
    local_2c8[0x38] = 0;
    local_2c8[0x39] = 0;
    local_2c8[0x3a] = 0;
    local_2c8[0x3b] = 0;
    local_2c8[0x3c] = 0;
    local_2c8[0x3d] = 0;
    local_2c8[0x3e] = 0;
    local_2c8[0x3f] = 0;
    local_2c8[0x20] = 0;
    local_2c8[0x21] = 0;
    local_2c8[0x22] = 0;
    local_2c8[0x23] = 0;
    local_2c8[0x24] = 0;
    local_2c8[0x25] = 0;
    local_2c8[0x26] = 0;
    local_2c8[0x27] = 0;
    local_2c8[0x28] = 0;
    local_2c8[0x29] = 0;
    local_2c8[0x2a] = 0;
    local_2c8[0x2b] = 0;
    local_2c8[0x2c] = 0;
    local_2c8[0x2d] = 0;
    local_2c8[0x2e] = 0;
    local_2c8[0x2f] = 0;
    local_2c8[0x10] = 0;
    local_2c8[0x11] = 0;
    local_2c8[0x12] = 0;
    local_2c8[0x13] = 0;
    local_2c8[0x14] = 0;
    local_2c8[0x15] = 0;
    local_2c8[0x16] = 0;
    local_2c8[0x17] = 0;
    local_2c8[0x18] = 0;
    local_2c8[0x19] = 0;
    local_2c8[0x1a] = 0;
    local_2c8[0x1b] = 0;
    local_2c8[0x1c] = 0;
    local_2c8[0x1d] = 0;
    local_2c8[0x1e] = 0;
    local_2c8[0x1f] = 0;
    local_2c8[0] = 0;
    local_2c8[1] = 0;
    local_2c8[2] = 0;
    local_2c8[3] = 0;
    local_2c8[4] = 0;
    local_2c8[5] = 0;
    local_2c8[6] = 0;
    local_2c8[7] = 0;
    local_2c8[8] = 0;
    local_2c8[9] = 0;
    local_2c8[10] = 0;
    local_2c8[0xb] = 0;
    local_2c8[0xc] = 0;
    local_2c8[0xd] = 0;
    local_2c8[0xe] = 0;
    local_2c8[0xf] = 0;
    uVar5 = *local_2e8;
    if (uVar5 == 0x15e) {
      uVar19 = 0;
      do {
        local_2c8[uVar19] = (char)((uVar19 & 0xffffffff) / 3) + (&DAT_140170b3d)[uVar19 % 3];
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80);
    }
    else {
      sVar10 = strlen(param_9);
      uVar19 = 0;
      do {
        local_2c8[uVar19] =
             (char)((uVar19 & 0xffffffff) / (sVar10 & 0xffffffff)) +
             param_9[(uVar19 & 0xffffffff) % (sVar10 & 0xffffffff)];
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80);
    }
    bVar26 = (ushort)(uVar5 - 0x15e) < 0x28a;
    bVar11 = 0x3fb < uVar5 || bVar26;
    local_2d0 = (uint)bVar11 + (uint)bVar11 * 8 + 7;
    local_2d4 = (uint)local_300 + 0x22 & 0xff;
    if (0x3fb >= uVar5 && !bVar26) {
      local_2d4 = (uint)local_300;
    }
    lVar15 = 0;
    do {
      local_2f8 = lVar15;
      local_2f0 = lVar23;
      uVar19 = 3;
      uVar18 = 7;
      uVar24 = 0;
      sVar22 = 0;
      lVar23 = 0;
      uVar12 = local_2d4;
      do {
        bVar25 = local_2c8[(uint)lVar23 & 0x7f];
        local_300 = local_2f8 + lVar23;
        bVar16 = local_2c8[(uint)local_300 & 0x7f];
        bVar7 = *(byte *)(local_2f0 + lVar23);
        bVar14 = bVar7 ^ bVar25;
        bVar17 = (byte)uVar12;
        bVar6 = bVar14;
        switch((uint)CONCAT11(bVar25,bVar16) % local_2d0) {
        case 1:
          bVar11 = (byte)(bVar16 * -0x5d) < 0x18;
LAB_1400b9538:
          bVar6 = bVar14;
          if (bVar11) {
            bVar6 = bVar7;
            bVar14 = bVar7;
          }
          break;
        case 2:
          bVar6 = bVar14 ^ -((byte)(bVar25 * '5') < 9);
          bVar14 = bVar6;
          break;
        case 3:
          if ((short)((short)(uVar19 / 0x25) * 0x25 + -3) != (short)lVar23) {
            bVar16 = 0;
          }
          bVar6 = bVar14 ^ bVar16;
          bVar14 = bVar14 ^ bVar16;
          break;
        case 4:
          bVar7 = 0;
          if ((ushort)(((ushort)bVar16 + (ushort)bVar25) * -0x5c5f) < 0x2a4) {
            bVar7 = bVar25;
          }
          bVar6 = bVar7 + bVar14;
          bVar14 = bVar7 + bVar14;
          break;
        case 5:
          uVar12 = (uVar24 & 0xffff) * 0xa69 >> 0x10;
          if ((short)((short)(((uVar24 - uVar12 & 0xffff) >> 1) + uVar12 >> 6) * 0x7b + sVar22) == 0
             ) {
            bVar6 = bVar14 ^ bVar17;
            bVar14 = bVar14 ^ bVar17;
          }
          break;
        case 6:
          bVar7 = bVar14;
          if (bVar25 == 0xff && bVar16 == 0) {
            bVar7 = 0;
          }
          bVar6 = -(bVar25 == 0xff && bVar16 == 0) ^ bVar14;
          bVar14 = bVar7;
          break;
        case 7:
          uVar5 = *local_2e8;
          if (0x12 < (ushort)(uVar5 - 0x3e9) && 0x153 < uVar5) {
            if (0x3fb < uVar5) {
              bVar14 = bVar7;
            }
            bVar6 = bVar14;
            if ((short)((short)(uVar18 / 0x33) * 0x33 + -7) == (short)lVar23) {
              bVar6 = bVar7;
              bVar14 = bVar7;
            }
          }
          break;
        case 8:
          uVar5 = *local_2e8;
          if (0x12 < (ushort)(uVar5 - 0x3e9) && 0x153 < uVar5) {
            if (0x3fb < uVar5) {
              bVar14 = bVar7;
            }
            bVar11 = (byte)(bVar25 * '5') < 9;
            goto LAB_1400b9538;
          }
        }
        if ((int)((local_300 & 0xffffffff) % (ulonglong)(byte)(bVar25 % 5 + 1)) == 0) {
          bVar6 = bVar14 ^ bVar17;
        }
        *(byte *)(local_2f0 + lVar23) = bVar6;
        lVar23 = lVar23 + 1;
        uVar19 = uVar19 + 1;
        sVar22 = sVar22 + -5;
        uVar24 = uVar24 + 5;
        uVar18 = uVar18 + 1;
        uVar12 = (uint)(byte)(bVar17 + (char)local_2f8);
      } while (lVar23 != 0x100);
      lVar23 = local_2f0 + 0x100;
      lVar15 = local_2f8 + 1;
    } while (local_2f8 + 1 != 3);
    lVar23 = *param_6;
    lVar15 = *param_7;
    lVar13 = lVar23 + 0xff;
    if (-1 < lVar23) {
      lVar13 = lVar23;
    }
    uVar24 = (int)lVar23 - ((uint)lVar13 & 0xffffff00);
    uVar12 = (uint)((ulonglong)lVar13 >> 8);
    uVar20 = uVar12 + 0xff;
    if (-1 < lVar13 >> 8) {
      uVar20 = uVar12;
    }
    uVar12 = uVar12 - (uVar20 & 0xffffff00);
    if (*local_2e8 < 0x3fc && 0x289 < (ushort)(*local_2e8 - 0x15e)) {
      if (lVar15 != lVar23) {
        lVar13 = lVar23 + 0xffff;
        if (-1 < lVar23) {
          lVar13 = lVar23;
        }
        uVar20 = (uint)((ulonglong)lVar13 >> 0x10);
        uVar21 = uVar20 + 0xff;
        if (-1 < lVar13 >> 0x10) {
          uVar21 = uVar20;
        }
        iVar9 = uVar20 - (uVar21 & 0xffffff00);
        do {
          uVar19 = (ulonglong)uVar24;
          uVar24 = uVar24 + 1;
          *(byte *)(param_5 + lVar23) =
               *(byte *)(param_5 + lVar23) ^
               *(byte *)(local_2e0 + 0x100 + (longlong)(int)uVar12) ^ *(byte *)(local_2e0 + uVar19)
               ^ *(byte *)(local_2e0 + 0x200 + (longlong)iVar9);
          if (uVar24 == 0x100) {
            uVar12 = uVar12 + 1;
            uVar24 = 0;
            if (uVar12 == 0x100) {
              uVar12 = iVar9 + 0x100;
              if (-1 < (int)(iVar9 + 1U)) {
                uVar12 = iVar9 + 1U;
              }
              iVar9 = (iVar9 - (uVar12 & 0xffffff00)) + 1;
              uVar24 = 0;
              uVar12 = 0;
            }
          }
          lVar23 = lVar23 + 1;
        } while (lVar15 != lVar23);
      }
    }
    else {
      bVar25 = 0;
      uVar19 = 0;
      do {
        local_2c8[uVar19 + 0x80] = *(byte *)(local_2e0 + (uVar19 & 0xff)) ^ bVar25;
        uVar19 = uVar19 + 1;
        bVar25 = bVar25 + 7;
      } while (uVar19 != 0x200);
      for (; lVar15 != lVar23; lVar23 = lVar23 + 1) {
        uVar19 = (ulonglong)uVar24;
        uVar24 = uVar24 + 1;
        *(byte *)(param_5 + lVar23) =
             *(byte *)(param_5 + lVar23) ^
             local_2c8[(longlong)(int)uVar12 + 0x180] ^ local_2c8[uVar19 + 0x80];
        if (uVar24 == 0x100) {
          uVar24 = 0;
          uVar12 = uVar12 + 1 & 0xff;
        }
      }
    }
  }
  if (DAT_1401c9640 == (local_48 ^ (ulonglong)auStack_328)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_328);
}

