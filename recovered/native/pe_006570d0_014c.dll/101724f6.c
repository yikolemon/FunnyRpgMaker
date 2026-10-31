/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101724f6 */

undefined4 __fastcall FUN_101724f6(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  size_t _Size;
  int iVar9;
  int local_9dc;
  int local_9d8;
  byte local_9d4 [20];
  byte abStack_9c0 [456];
  ushort local_7f8 [1010];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_9dc;
  uVar7 = param_1[2];
  if ((int)uVar7 < 5) {
    FUN_10172a07();
    uVar7 = param_1[2];
  }
  uVar8 = param_1[4];
  uVar2 = uVar8 >> 5;
  param_1[4] = uVar2;
  uVar4 = uVar7 - 5;
  param_1[2] = uVar4;
  if ((int)uVar7 < 10) {
    FUN_10172a07();
    uVar4 = param_1[2];
    uVar2 = param_1[4];
  }
  uVar3 = uVar2 >> 5;
  param_1[4] = uVar3;
  uVar7 = uVar4 - 5;
  param_1[2] = uVar7;
  if ((int)uVar4 < 9) {
    FUN_10172a07();
    uVar7 = param_1[2];
    uVar3 = param_1[4];
  }
  local_9d8 = (uVar8 & 0x1f) + 0x101;
  local_9dc = (uVar2 & 0x1f) + 1;
  param_1[4] = uVar3 >> 4;
  uVar7 = uVar7 - 4;
  param_1[2] = uVar7;
  local_9d4[0] = 0;
  local_9d4[1] = 0;
  local_9d4[2] = 0;
  local_9d4[3] = 0;
  local_9d4[4] = 0;
  local_9d4[5] = 0;
  local_9d4[6] = 0;
  local_9d4[7] = 0;
  local_9d4[8] = 0;
  local_9d4[9] = 0;
  local_9d4[10] = 0;
  local_9d4[0xb] = 0;
  local_9d4[0xc] = 0;
  local_9d4[0xd] = 0;
  local_9d4[0xe] = 0;
  local_9d4[0xf] = 0;
  local_9d4[0x10] = 0;
  local_9d4[0x11] = 0;
  local_9d4[0x12] = 0;
  uVar8 = 0xfffffffc;
  uVar4 = uVar3 >> 4;
  do {
    if ((int)uVar7 < 3) {
      FUN_10172a07();
      uVar7 = param_1[2];
      uVar4 = param_1[4];
    }
    param_1[4] = uVar4 >> 3;
    uVar7 = uVar7 - 3;
    param_1[2] = uVar7;
    local_9d4[(byte)(&UNK_102bad2d)[uVar8]] = (byte)uVar4 & 7;
    uVar8 = uVar8 + 1;
    uVar4 = uVar4 >> 3;
  } while ((uVar3 & 0xf) != uVar8);
  iVar5 = FUN_101722f3(0x13);
  if (iVar5 != 0) {
    iVar5 = local_9dc + local_9d8;
    iVar9 = 0;
    do {
      if ((int)param_1[2] < 0x10) {
        if (*param_1 < param_1[1]) {
          FUN_10172a07();
        }
        else {
          if (param_1[3] != 0) goto LAB_10172767;
          param_1[3] = 1;
          param_1[2] = param_1[2] + 0x10;
        }
      }
      uVar1 = local_7f8[param_1[4] & 0x1ff];
      if (uVar1 == 0) {
        uVar7 = FUN_10172aab();
      }
      else {
        param_1[4] = param_1[4] >> ((byte)(uVar1 >> 9) & 0x1f);
        param_1[2] = param_1[2] - (uint)(uVar1 >> 9);
        uVar7 = uVar1 & 0x1ff;
      }
      if (0x12 < uVar7) goto LAB_10172767;
      if (uVar7 < 0x10) {
        abStack_9c0[iVar9 + 1] = (byte)uVar7;
        iVar9 = iVar9 + 1;
      }
      else {
        uVar4 = param_1[2];
        if (uVar7 == 0x11) {
          if ((int)uVar4 < 3) {
            FUN_10172a07();
            uVar4 = param_1[2];
          }
          uVar7 = param_1[4];
          param_1[4] = uVar7 >> 3;
          param_1[2] = uVar4 - 3;
          _Size = (uVar7 & 7) + 3;
LAB_1017270a:
          uVar7 = 0;
        }
        else {
          if (uVar7 != 0x10) {
            if ((int)uVar4 < 7) {
              FUN_10172a07();
              uVar4 = param_1[2];
            }
            uVar7 = param_1[4];
            param_1[4] = uVar7 >> 7;
            param_1[2] = uVar4 - 7;
            _Size = (uVar7 & 0x7f) + 0xb;
            goto LAB_1017270a;
          }
          if ((int)uVar4 < 2) {
            FUN_10172a07();
            uVar4 = param_1[2];
          }
          uVar7 = param_1[4];
          param_1[4] = uVar7 >> 2;
          param_1[2] = uVar4 - 2;
          if (iVar9 == 0) goto LAB_10172767;
          _Size = (uVar7 & 3) + 3;
          uVar7 = (uint)abStack_9c0[iVar9];
        }
        if (iVar5 - iVar9 < (int)_Size) goto LAB_10172767;
        _memset(abStack_9c0 + iVar9 + 1,uVar7,_Size);
        iVar9 = iVar9 + _Size;
      }
    } while (iVar9 < iVar5);
    if (iVar9 == iVar5) {
      iVar5 = FUN_101722f3(local_9d8);
      if (iVar5 != 0) {
        uVar6 = FUN_101722f3(local_9dc);
        goto LAB_10172773;
      }
    }
    else {
LAB_10172767:
      FUN_10170e07();
    }
  }
  uVar6 = 0;
LAB_10172773:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_9dc)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

