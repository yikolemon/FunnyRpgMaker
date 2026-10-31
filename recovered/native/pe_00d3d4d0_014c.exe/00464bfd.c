/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00464bfd */

void __fastcall FUN_00464bfd(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_40 [3];
  char local_3d;
  uint local_3c;
  int local_38;
  byte *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_40;
  FUN_00463621(*(int *)(param_1 + 8));
  uVar10 = *(uint *)(param_1 + 0x14);
  local_38 = param_1;
  if (uVar10 != 0) {
    local_20 = param_1 + 0x1c;
    uVar15 = 0;
    do {
      local_34 = (byte *)(local_20 + uVar15 * 0x14);
      local_3d = FUN_00464e8d(local_34);
      local_24 = uVar15 + 1;
      local_28 = uVar15;
      if ((bool)local_3d) {
        local_28 = local_24;
      }
      local_3c = *(uint *)(local_20 + 0xc + uVar15 * 0x14);
      iVar14 = local_20 + local_28 * 0x14;
      uVar2 = *(uint *)(iVar14 + 0xc);
      bVar6 = FUN_00464ac8(local_34);
      uVar5 = local_3c;
      if (bVar6 == 0) {
        uVar8 = local_3c & 0xffff;
        uVar12 = uVar2 & 0xffff;
        uVar13 = 0x10000 - uVar12;
        if (0x10000 - uVar8 < 0x10000 - uVar12) {
          uVar13 = 0x10000 - uVar8;
        }
        if (uVar12 == 0) {
          uVar13 = 0;
        }
        if (uVar8 == 0) {
          uVar13 = 0;
        }
        if (uVar8 < uVar12) {
          uVar12 = uVar8;
        }
        uVar8 = -uVar12;
        local_30 = iVar14;
        local_2c = uVar2;
        if ((local_28 < uVar10 - 1) && (*(int *)(iVar14 + 0x20) < (int)(uVar2 + uVar13 + 0x8000))) {
          if ((((uVar15 != 0) &&
               (uVar10 = 0, (int)((local_3c - uVar12) + -0x8000) < *(int *)(local_34 + -8))) ||
              (uVar10 = uVar8, uVar13 < uVar12)) &&
             (bVar6 = FUN_00464ac8((byte *)(iVar14 + 0x14)), bVar6 == 0)) {
            local_1c = local_28;
            local_18 = uVar13 - uVar10;
            FUN_00463d3b(*(int **)(local_38 + 8),&local_1c);
          }
        }
        else if (((uVar15 == 0) ||
                 (uVar10 = uVar13, *(int *)(local_34 + -8) <= (int)((local_3c - uVar12) + -0x8000)))
                && (uVar10 = uVar8, uVar13 <= uVar12)) {
          uVar10 = uVar13;
        }
        *(uint *)(local_34 + 0xc) = uVar5 + uVar10;
        iVar14 = local_30;
        if (local_3d != '\0') {
          *(uint *)(local_30 + 0xc) = uVar10 + local_2c;
        }
      }
      pbVar1 = local_34;
      if ((uVar15 != 0) && (*(int *)(local_34 + 8) - *(int *)(local_34 + -0xc) != 0)) {
        iVar9 = FUN_0041eaa0(*(int *)(local_34 + 0xc) - *(int *)(local_34 + -8),
                             *(int *)(local_34 + 8) - *(int *)(local_34 + -0xc));
        *(int *)(pbVar1 + -4) = iVar9;
      }
      if ((local_3d != '\0') &&
         (uVar10 = *(int *)(iVar14 + 8) - *(int *)(iVar14 + -0xc), uVar15 = local_24, uVar10 != 0))
      {
        iVar9 = FUN_0041eaa0(*(int *)(iVar14 + 0xc) - *(int *)(iVar14 + -8),uVar10);
        *(int *)(iVar14 + -4) = iVar9;
        uVar15 = local_24;
      }
      uVar15 = uVar15 + 1;
      uVar10 = *(uint *)(local_38 + 0x14);
    } while (uVar15 < uVar10);
  }
  uVar10 = FUN_0046381a(*(int *)(local_38 + 8));
  iVar14 = local_38;
  if (uVar10 != 0) {
    iVar9 = local_38 + 0x1c;
    do {
      uVar10 = uVar10 - 1;
      piVar11 = (int *)FUN_004631af(*(int *)(local_38 + 8),uVar10);
      iVar3 = *piVar11;
      iVar4 = *(int *)(iVar14 + 0x28 + iVar3 * 0x14);
      if (piVar11[1] + iVar4 + 0x8000 <= *(int *)(iVar14 + 0x3c + iVar3 * 0x14)) {
        pbVar1 = (byte *)(iVar9 + iVar3 * 0x14);
        *(int *)(pbVar1 + 0xc) = piVar11[1] + iVar4;
        bVar7 = FUN_00464e8d(pbVar1);
        if (bVar7) {
          *(int *)(pbVar1 + -8) = *(int *)(pbVar1 + -8) + piVar11[1];
        }
      }
    } while (uVar10 != 0);
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_40);
  }
  return;
}

