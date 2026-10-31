/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10206a7e */

int __fastcall FUN_10206a7e(uint *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined8 uVar11;
  int local_30;
  bool local_29;
  int local_28;
  undefined1 local_21;
  int local_20;
  uint local_1c;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  pbVar9 = (byte *)*param_1;
  iVar3 = 0;
  local_18 = pbVar9;
  if (param_2 <= pbVar9) goto LAB_10206c83;
  bVar2 = *pbVar9;
  if ((bVar2 == 0x2d) || (local_29 = true, bVar2 == 0x2b)) {
    pbVar9 = pbVar9 + 1;
    local_18 = pbVar9;
    if (pbVar9 == param_2) goto LAB_10206c83;
    local_29 = bVar2 != 0x2d;
    bVar2 = *pbVar9;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_10206c83;
  }
  local_20 = 0;
  local_18 = pbVar9;
  if (bVar2 == 0x2e) {
    local_1c = 0;
    iVar7 = 0;
LAB_10206b24:
    local_28 = param_3;
    if ((local_18 < param_2) && (*local_18 == 0x2e)) {
      pbVar9 = local_18 + 1;
      if (pbVar9 < param_2) {
        local_20 = 0;
        local_30 = 1;
        do {
          bVar2 = *pbVar9;
          uVar4 = (uint)bVar2;
          local_18 = pbVar9;
          if ((((uVar4 - 9 < 0x18) && ((0x80001bU >> (uVar4 - 9 & 0x1f) & 1) != 0)) || (uVar4 == 0))
             || (((char)bVar2 < '\0' || ((byte)(bVar2 - 0x3a) < 0xf6)))) break;
          if ((local_30 < 0xccccccc) && (local_20 < 0xccccccc)) {
            local_20 = (int)(char)(&DAT_103124d8)[uVar4] + local_20 * 10;
            if (local_28 < 1 || iVar7 != 0) {
              local_30 = local_30 * 10;
            }
            else {
              local_28 = local_28 + -1;
            }
          }
          pbVar9 = pbVar9 + 1;
          local_18 = param_2;
        } while (pbVar9 != param_2);
      }
      else {
        local_30 = 1;
        local_20 = 0;
        local_18 = pbVar9;
      }
    }
    else {
      local_30 = 1;
    }
    pbVar9 = local_18 + 1;
    bVar1 = true;
    iVar10 = local_28;
    if ((pbVar9 < param_2) && ((*local_18 | 0x20) == 0x65)) {
      local_18 = pbVar9;
      iVar3 = FUN_10206d76();
      if (pbVar9 == local_18) goto LAB_10206c81;
      local_21 = -0x3e9 < iVar3;
      local_1c = local_1c & 0xff;
      if (1000 < iVar3) {
        local_1c = 1;
      }
      iVar10 = 0;
      if (iVar3 + 1000U < 0x7d1) {
        iVar10 = iVar3;
      }
      iVar10 = local_28 + iVar10;
      bVar1 = (bool)local_21;
    }
    *param_1 = (uint)local_18;
    iVar3 = 0;
    if (iVar7 != 0 || local_20 != 0) {
      iVar6 = 0x7fffffff;
      if ((char)local_1c == '\0') {
        if (!bVar1) goto LAB_10206c83;
        iVar5 = local_30;
        iVar8 = local_20;
        if (iVar10 < 1) {
          if (iVar10 < 0) {
            do {
              local_28 = iVar10;
              if (iVar5 < 0xccccccc) {
                iVar5 = iVar5 * 10;
              }
              else {
                iVar8 = iVar8 / 10;
              }
              if ((0xffffffec < iVar7 - 10U) && (iVar8 == 0)) goto LAB_10206c83;
              iVar7 = iVar7 / 10;
              iVar10 = local_28 + 1;
            } while (local_28 + 1 != 0);
          }
        }
        else {
          iVar10 = iVar10 + 1;
          do {
            if (0xccccccb < iVar7) goto LAB_10206c73;
            if (iVar8 < 0xccccccc) {
              iVar8 = iVar8 * 10;
            }
            else {
              if (iVar5 == 1) goto LAB_10206c73;
              iVar5 = iVar5 / 10;
            }
            iVar7 = iVar7 * 10;
            iVar10 = iVar10 + -1;
          } while (1 < iVar10);
        }
        iVar6 = iVar7;
        if (iVar8 != 0) {
          iVar3 = FUN_101c2523(iVar8,iVar5);
          iVar6 = iVar3 + iVar6;
        }
      }
LAB_10206c73:
      iVar3 = -iVar6;
      if (local_29 != false) {
        iVar3 = iVar6;
      }
    }
  }
  else {
    uVar11 = FUN_10206d76();
    iVar3 = (int)uVar11;
    if (local_18 != pbVar9) {
      local_1c = CONCAT31((int3)((ulonglong)uVar11 >> 0x28),0x7fff < iVar3);
      iVar7 = iVar3 << 0x10;
      if (0x7fff < iVar3) {
        iVar7 = iVar3;
      }
      goto LAB_10206b24;
    }
LAB_10206c81:
    iVar3 = 0;
  }
LAB_10206c83:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

