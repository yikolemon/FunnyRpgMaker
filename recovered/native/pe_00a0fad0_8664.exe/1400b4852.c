/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b4852 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b4852(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_2a8 [32];
  byte local_288 [64];
  undefined8 local_248;
  char acStack_240 [8];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  int local_218;
  undefined8 local_214;
  undefined4 local_20c;
  byte abStack_148 [264];
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_2a8;
  if (DAT_1401ccd30 == '\x01') {
    uVar9 = param_3 + 0xff;
    if (-1 < (longlong)param_3) {
      uVar9 = param_3;
    }
    uVar3 = (uint)param_3 - ((uint)uVar9 & 0xffffff00);
    uVar2 = (uint)(uVar9 >> 8);
    uVar7 = uVar2 + 0xff;
    if (-1 < (longlong)uVar9 >> 8) {
      uVar7 = uVar2;
    }
    uVar2 = uVar2 - (uVar7 & 0xffffff00);
    if (DAT_1401ccd32 < 0x3fc && 0x289 < (ushort)(DAT_1401ccd32 - 0x15e)) {
      if (param_2 != 0) {
        uVar9 = param_3 + 0xffff;
        if (-1 < (longlong)param_3) {
          uVar9 = param_3;
        }
        uVar7 = (uint)(uVar9 >> 0x10);
        uVar8 = uVar7 + 0xff;
        if (-1 < (longlong)uVar9 >> 0x10) {
          uVar8 = uVar7;
        }
        iVar5 = uVar7 - (uVar8 & 0xffffff00);
        uVar9 = 0;
        do {
          uVar10 = (ulonglong)uVar3;
          uVar3 = uVar3 + 1;
          *(byte *)(param_1 + uVar9) =
               *(byte *)(param_1 + uVar9) ^
               (&DAT_1401ccb30)[(int)uVar2] ^ (&DAT_1401cca30)[uVar10] ^ (&DAT_1401ccc30)[iVar5];
          if (uVar3 == 0x100) {
            uVar2 = uVar2 + 1;
            uVar3 = 0;
            if (uVar2 == 0x100) {
              uVar2 = iVar5 + 0x100;
              if (-1 < (int)(iVar5 + 1U)) {
                uVar2 = iVar5 + 1U;
              }
              iVar5 = (iVar5 - (uVar2 & 0xffffff00)) + 1;
              uVar3 = 0;
              uVar2 = 0;
            }
          }
          uVar9 = uVar9 + 1;
        } while (param_2 != uVar9);
      }
    }
    else {
      bVar4 = 0;
      uVar9 = 0;
      do {
        *(byte *)((longlong)&local_248 + uVar9) = (&DAT_1401cca30)[uVar9 & 0xff] ^ bVar4;
        uVar9 = uVar9 + 1;
        bVar4 = bVar4 + 7;
      } while (uVar9 != 0x200);
      if (param_2 != 0) {
        uVar9 = 0;
        do {
          uVar10 = (ulonglong)uVar3;
          uVar3 = uVar3 + 1;
          *(byte *)(param_1 + uVar9) =
               *(byte *)(param_1 + uVar9) ^
               abStack_148[(int)uVar2] ^ *(byte *)((longlong)&local_248 + uVar10);
          if (uVar3 == 0x100) {
            uVar3 = 0;
            uVar2 = uVar2 + 1 & 0xff;
          }
          uVar9 = uVar9 + 1;
        } while (param_2 != uVar9);
      }
    }
  }
  else if (DAT_1401ccd31 == '\x01') {
    local_288[0x30] = 0;
    local_288[0x31] = 0;
    local_288[0x32] = 0;
    local_288[0x33] = 0;
    local_288[0x34] = 0;
    local_288[0x35] = 0;
    local_288[0x36] = 0;
    local_288[0x37] = 0;
    local_288[0x38] = 0;
    local_288[0x39] = 0;
    local_288[0x3a] = 0;
    local_288[0x3b] = 0;
    local_288[0x3c] = 0;
    local_288[0x3d] = 0;
    local_288[0x3e] = 0;
    local_288[0x3f] = 0;
    local_288[0x20] = 0;
    local_288[0x21] = 0;
    local_288[0x22] = 0;
    local_288[0x23] = 0;
    local_288[0x24] = 0;
    local_288[0x25] = 0;
    local_288[0x26] = 0;
    local_288[0x27] = 0;
    local_288[0x28] = 0;
    local_288[0x29] = 0;
    local_288[0x2a] = 0;
    local_288[0x2b] = 0;
    local_288[0x2c] = 0;
    local_288[0x2d] = 0;
    local_288[0x2e] = 0;
    local_288[0x2f] = 0;
    local_288[0x10] = 0;
    local_288[0x11] = 0;
    local_288[0x12] = 0;
    local_288[0x13] = 0;
    local_288[0x14] = 0;
    local_288[0x15] = 0;
    local_288[0x16] = 0;
    local_288[0x17] = 0;
    local_288[0x18] = 0;
    local_288[0x19] = 0;
    local_288[0x1a] = 0;
    local_288[0x1b] = 0;
    local_288[0x1c] = 0;
    local_288[0x1d] = 0;
    local_288[0x1e] = 0;
    local_288[0x1f] = 0;
    local_288[0] = 0;
    local_288[1] = 0;
    local_288[2] = 0;
    local_288[3] = 0;
    local_288[4] = 0;
    local_288[5] = 0;
    local_288[6] = 0;
    local_288[7] = 0;
    local_288[8] = 0;
    local_288[9] = 0;
    local_288[10] = 0;
    local_288[0xb] = 0;
    local_288[0xc] = 0;
    local_288[0xd] = 0;
    local_288[0xe] = 0;
    local_288[0xf] = 0;
    local_248 = s_expand_32_byte_k_140164f80._0_8_;
    acStack_240 = (char  [8])s_expand_32_byte_k_140164f80._8_8_;
    local_238 = _DAT_1401ca070;
    uStack_230 = uRam00000001401ca078;
    local_228 = _DAT_1401ca080;
    uStack_224 = uRam00000001401ca084;
    uStack_220 = uRam00000001401ca088;
    uStack_21c = uRam00000001401ca08c;
    local_214 = DAT_1401ca090;
    local_20c = DAT_1401ca098;
    local_218 = ((uint)(param_3 >> 6) & 0x3ffffff) + 1;
    if (param_2 != 0) {
      uVar9 = (ulonglong)((uint)param_3 & 0x3f);
      uVar10 = 0;
      do {
        uVar11 = param_2 - uVar10;
        if (0x40 - uVar9 <= param_2 - uVar10) {
          uVar11 = 0x40 - uVar9;
        }
        FUN_1400ba7c5(&local_248);
        if (param_2 != uVar10) {
          uVar6 = 0;
          do {
            pbVar1 = (byte *)(param_1 + uVar10 + uVar6);
            *pbVar1 = *pbVar1 ^ local_288[uVar6 + uVar9];
            uVar6 = uVar6 + 1;
          } while (uVar11 != uVar6);
        }
        uVar10 = uVar10 + uVar11;
        uVar9 = 0;
      } while (uVar10 < param_2);
    }
  }
  else if (param_4 != 0) {
    param_3 = (longlong)param_3 % 7;
    if ((longlong)param_2 < 0x100000000) {
      if (0 < (longlong)param_2) {
        uVar9 = 0;
        do {
          *(byte *)(param_1 + uVar9) =
               *(byte *)(param_1 + uVar9) ^ *(byte *)(param_4 + (param_3 & 0xffffffff));
          uVar2 = (int)param_3 + 1;
          if (uVar2 == 7) {
            uVar2 = 0;
          }
          param_3 = (ulonglong)uVar2;
          uVar9 = uVar9 + 1;
        } while (param_2 != uVar9);
      }
    }
    else {
      uVar9 = 0;
      do {
        *(byte *)(param_1 + uVar9) = *(byte *)(param_1 + uVar9) ^ *(byte *)(param_4 + param_3);
        param_3 = param_3 + 1;
        if (param_3 == 7) {
          param_3 = 0;
        }
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
    }
  }
  if (DAT_1401c9640 == (local_40 ^ (ulonglong)auStack_2a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_40 ^ (ulonglong)auStack_2a8);
}

