/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006a1b1 */

void FUN_14006a1b1(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  byte *pbVar16;
  undefined1 auStack_98 [39];
  char local_71;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  FUN_140068a0a(*(longlong *)(param_1 + 0x10));
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) != 0) {
    lVar15 = param_1 + 0x28;
    uVar12 = 0;
    local_70 = param_1;
    local_60 = lVar15;
    do {
      pbVar16 = (byte *)(lVar15 + uVar12 * 0x20);
      local_71 = FUN_14006a442(pbVar16);
      local_68 = uVar12 + 1;
      uVar13 = uVar12;
      if ((bool)local_71) {
        uVar13 = local_68;
      }
      uVar11 = *(uint *)(lVar15 + 0x14 + uVar12 * 0x20);
      lVar1 = lVar15 + uVar13 * 0x20;
      uVar2 = *(uint *)(lVar15 + 0x14 + uVar13 * 0x20);
      bVar3 = FUN_14006a05c(pbVar16);
      if (bVar3 == 0) {
        uVar5 = uVar11 & 0xffff;
        uVar9 = uVar2 & 0xffff;
        uVar14 = 0x10000 - uVar5;
        if (0x10000 - uVar9 <= 0x10000 - uVar5) {
          uVar14 = 0x10000 - uVar9;
        }
        if (uVar9 == 0) {
          uVar14 = 0;
        }
        if (uVar5 == 0) {
          uVar14 = 0;
        }
        if (uVar9 <= uVar5) {
          uVar5 = uVar9;
        }
        uVar9 = -uVar5;
        if ((uVar13 < (int)uVar7 - 1) && (*(int *)(lVar1 + 0x34) < (int)(uVar14 + uVar2 + 0x8000)))
        {
          if ((((uVar12 != 0) &&
               (uVar10 = 0, (int)((uVar11 - uVar5) + -0x8000) < *(int *)(pbVar16 + -0xc))) ||
              (uVar10 = uVar9, uVar14 < uVar5)) &&
             (bVar3 = FUN_14006a05c((byte *)(lVar1 + 0x20)), bVar3 == 0)) {
            local_50 = uVar14 - uVar10;
            local_58 = uVar13;
            FUN_140069279(*(longlong **)(local_70 + 0x10),&local_58);
          }
        }
        else if (((uVar12 == 0) ||
                 (uVar10 = uVar14, *(int *)(pbVar16 + -0xc) <= (int)((uVar11 - uVar5) + -0x8000)))
                && (uVar10 = uVar9, uVar14 <= uVar5)) {
          uVar10 = uVar14;
        }
        *(uint *)(pbVar16 + 0x14) = uVar11 + uVar10;
        lVar15 = local_60;
        if (local_71 != '\0') {
          *(uint *)(lVar1 + 0x14) = uVar10 + uVar2;
        }
      }
      if ((uVar12 != 0) && (*(int *)(pbVar16 + 0x10) - *(int *)(pbVar16 + -0x10) != 0)) {
        iVar6 = FUN_14001ecff(*(int *)(pbVar16 + 0x14) - *(int *)(pbVar16 + -0xc),
                              *(int *)(pbVar16 + 0x10) - *(int *)(pbVar16 + -0x10));
        *(int *)(pbVar16 + -8) = iVar6;
      }
      param_1 = local_70;
      if ((local_71 != '\0') &&
         (uVar11 = *(int *)(lVar1 + 0x10) - *(int *)(lVar1 + -0x10), uVar12 = local_68, uVar11 != 0)
         ) {
        iVar6 = FUN_14001ecff(*(int *)(lVar1 + 0x14) - *(int *)(lVar1 + -0xc),uVar11);
        *(int *)(lVar1 + -8) = iVar6;
        uVar12 = local_68;
      }
      uVar12 = uVar12 + 1;
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x20);
    } while (uVar12 < uVar7);
  }
  uVar7 = FUN_140068c2d(*(longlong *)(param_1 + 0x10));
  if (uVar7 != 0) {
    do {
      uVar7 = uVar7 - 1;
      plVar8 = (longlong *)FUN_1400684c4(*(longlong *)(param_1 + 0x10),uVar7);
      lVar15 = *plVar8 * 0x20;
      iVar6 = *(int *)(param_1 + 0x3c + lVar15);
      if ((int)plVar8[1] + iVar6 + 0x8000 <= *(int *)(param_1 + 0x5c + lVar15)) {
        pbVar16 = (byte *)(lVar15 + param_1 + 0x28);
        *(int *)(pbVar16 + 0x14) = (int)plVar8[1] + iVar6;
        bVar4 = FUN_14006a442(pbVar16);
        if (bVar4) {
          *(int *)(pbVar16 + -0xc) = *(int *)(pbVar16 + -0xc) + (int)plVar8[1];
        }
      }
    } while (uVar7 != 0);
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

