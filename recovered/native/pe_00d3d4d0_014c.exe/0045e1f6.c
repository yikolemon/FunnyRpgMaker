/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045e1f6 */

uint __fastcall FUN_0045e1f6(uint *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint local_30;
  bool local_29;
  int local_28;
  undefined1 local_21;
  uint local_20;
  uint local_1c;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_30;
  pbVar8 = (byte *)*param_1;
  uVar3 = 0;
  local_18 = pbVar8;
  if (param_2 <= pbVar8) goto LAB_0045e3fb;
  bVar2 = *pbVar8;
  if ((bVar2 == 0x2d) || (local_29 = true, bVar2 == 0x2b)) {
    pbVar8 = pbVar8 + 1;
    local_18 = pbVar8;
    if (pbVar8 == param_2) goto LAB_0045e3fb;
    local_29 = bVar2 != 0x2d;
    bVar2 = *pbVar8;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_0045e3fb;
  }
  local_20 = 0;
  local_18 = pbVar8;
  if (bVar2 == 0x2e) {
    local_1c = 0;
    uVar6 = 0;
LAB_0045e29c:
    local_28 = param_3;
    if ((local_18 < param_2) && (*local_18 == 0x2e)) {
      pbVar8 = local_18 + 1;
      if (pbVar8 < param_2) {
        local_20 = 0;
        local_30 = 1;
        do {
          bVar2 = *pbVar8;
          uVar3 = (uint)bVar2;
          local_18 = pbVar8;
          if ((((uVar3 - 9 < 0x18) && ((0x80001bU >> (uVar3 - 9 & 0x1f) & 1) != 0)) || (uVar3 == 0))
             || (((char)bVar2 < '\0' || ((byte)(bVar2 - 0x3a) < 0xf6)))) break;
          if (((int)local_30 < 0xccccccc) && ((int)local_20 < 0xccccccc)) {
            local_20 = (int)(char)(&DAT_004e6a78)[uVar3] + local_20 * 10;
            if (local_28 < 1 || uVar6 != 0) {
              local_30 = local_30 * 10;
            }
            else {
              local_28 = local_28 + -1;
            }
          }
          pbVar8 = pbVar8 + 1;
          local_18 = param_2;
        } while (pbVar8 != param_2);
      }
      else {
        local_30 = 1;
        local_20 = 0;
        local_18 = pbVar8;
      }
    }
    else {
      local_30 = 1;
    }
    pbVar8 = local_18 + 1;
    bVar1 = true;
    iVar9 = local_28;
    if ((pbVar8 < param_2) && ((*local_18 | 0x20) == 0x65)) {
      local_18 = pbVar8;
      uVar3 = FUN_0045e4ee(&local_18,param_2);
      if (pbVar8 == local_18) goto LAB_0045e3f9;
      local_21 = -0x3e9 < (int)uVar3;
      local_1c = local_1c & 0xff;
      if (1000 < (int)uVar3) {
        local_1c = 1;
      }
      uVar5 = 0;
      if (uVar3 + 1000 < 0x7d1) {
        uVar5 = uVar3;
      }
      iVar9 = local_28 + uVar5;
      bVar1 = (bool)local_21;
    }
    *param_1 = (uint)local_18;
    uVar3 = 0;
    if (uVar6 != 0 || local_20 != 0) {
      uVar5 = 0x7fffffff;
      if ((char)local_1c == '\0') {
        if (!bVar1) goto LAB_0045e3fb;
        uVar4 = local_30;
        uVar7 = local_20;
        if (iVar9 < 1) {
          if (iVar9 < 0) {
            do {
              local_28 = iVar9;
              if ((int)uVar4 < 0xccccccc) {
                uVar4 = uVar4 * 10;
              }
              else {
                uVar7 = (int)uVar7 / 10;
              }
              if ((0xffffffec < uVar6 - 10) && (uVar7 == 0)) goto LAB_0045e3fb;
              uVar6 = (int)uVar6 / 10;
              iVar9 = local_28 + 1;
            } while (local_28 + 1 != 0);
          }
        }
        else {
          iVar9 = iVar9 + 1;
          do {
            if (0xccccccb < (int)uVar6) goto LAB_0045e3eb;
            if ((int)uVar7 < 0xccccccc) {
              uVar7 = uVar7 * 10;
            }
            else {
              if (uVar4 == 1) goto LAB_0045e3eb;
              uVar4 = (int)uVar4 / 10;
            }
            uVar6 = uVar6 * 10;
            iVar9 = iVar9 + -1;
          } while (1 < iVar9);
        }
        uVar5 = uVar6;
        if (uVar7 != 0) {
          iVar9 = FUN_0041eaa0(uVar7,uVar4);
          uVar5 = iVar9 + uVar5;
        }
      }
LAB_0045e3eb:
      uVar3 = -uVar5;
      if (local_29 != false) {
        uVar3 = uVar5;
      }
    }
  }
  else {
    uVar3 = FUN_0045e4ee(&local_18,param_2);
    if (local_18 != pbVar8) {
      local_1c = CONCAT31((int3)((uint)extraout_EDX >> 8),0x7fff < (int)uVar3);
      uVar6 = uVar3 << 0x10;
      if (0x7fff < (int)uVar3) {
        uVar6 = uVar3;
      }
      goto LAB_0045e29c;
    }
LAB_0045e3f9:
    uVar3 = 0;
  }
LAB_0045e3fb:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_30);
  }
  return uVar3;
}

