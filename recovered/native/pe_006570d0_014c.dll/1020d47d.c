/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020d47d */

void __fastcall FUN_1020d47d(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_40 [3];
  char local_3d;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_40;
  FUN_1020bea9();
  uVar8 = *(uint *)(param_1 + 0x14);
  local_38 = param_1;
  if (uVar8 != 0) {
    local_20 = param_1 + 0x1c;
    uVar16 = 0;
    do {
      local_34 = local_20 + uVar16 * 0x14;
      local_3d = FUN_1020d70d();
      local_24 = uVar16 + 1;
      local_28 = uVar16;
      if (local_3d != '\0') {
        local_28 = local_24;
      }
      local_3c = *(uint *)(local_20 + 0xc + uVar16 * 0x14);
      iVar12 = local_20 + local_28 * 0x14;
      uVar2 = *(uint *)(iVar12 + 0xc);
      cVar6 = FUN_1020d348();
      uVar5 = local_3c;
      if (cVar6 == '\0') {
        uVar7 = local_3c & 0xffff;
        uVar14 = uVar2 & 0xffff;
        uVar15 = 0x10000 - uVar14;
        if (0x10000 - uVar7 < 0x10000 - uVar14) {
          uVar15 = 0x10000 - uVar7;
        }
        if (uVar14 == 0) {
          uVar15 = 0;
        }
        if (uVar7 == 0) {
          uVar15 = 0;
        }
        if (uVar7 < uVar14) {
          uVar14 = uVar7;
        }
        uVar7 = -uVar14;
        local_30 = iVar12;
        local_2c = uVar2;
        if ((local_28 < uVar8 - 1) && (*(int *)(iVar12 + 0x20) < (int)(uVar2 + uVar15 + 0x8000))) {
          if ((((uVar16 != 0) &&
               (uVar8 = 0, (int)((local_3c - uVar14) + -0x8000) < *(int *)(local_34 + -8))) ||
              (uVar8 = uVar7, uVar15 < uVar14)) && (cVar6 = FUN_1020d348(), cVar6 == '\0')) {
            local_1c = local_28;
            local_18 = uVar15 - uVar8;
            FUN_1020c5bf();
          }
        }
        else if (((uVar16 == 0) ||
                 (uVar8 = uVar15, *(int *)(local_34 + -8) <= (int)((local_3c - uVar14) + -0x8000)))
                && (uVar8 = uVar7, uVar15 <= uVar14)) {
          uVar8 = uVar15;
        }
        *(uint *)(local_34 + 0xc) = uVar5 + uVar8;
        iVar12 = local_30;
        if (local_3d != '\0') {
          *(uint *)(local_30 + 0xc) = uVar8 + local_2c;
        }
      }
      iVar11 = local_34;
      if ((uVar16 != 0) && (iVar9 = *(int *)(local_34 + 8) - *(int *)(local_34 + -0xc), iVar9 != 0))
      {
        uVar10 = FUN_101c2523(*(int *)(local_34 + 0xc) - *(int *)(local_34 + -8),iVar9);
        *(undefined4 *)(iVar11 + -4) = uVar10;
      }
      if ((local_3d != '\0') &&
         (iVar11 = *(int *)(iVar12 + 8) - *(int *)(iVar12 + -0xc), uVar16 = local_24, iVar11 != 0))
      {
        uVar10 = FUN_101c2523(*(int *)(iVar12 + 0xc) - *(int *)(iVar12 + -8),iVar11);
        *(undefined4 *)(iVar12 + -4) = uVar10;
        uVar16 = local_24;
      }
      uVar16 = uVar16 + 1;
      uVar8 = *(uint *)(local_38 + 0x14);
    } while (uVar16 < uVar8);
  }
  iVar12 = FUN_10151d91();
  iVar11 = local_38;
  if (iVar12 != 0) {
    iVar9 = local_38 + 0x1c;
    do {
      iVar12 = iVar12 + -1;
      piVar13 = (int *)FUN_1020ba37();
      iVar3 = *piVar13;
      iVar4 = *(int *)(iVar11 + 0x28 + iVar3 * 0x14);
      if (piVar13[1] + iVar4 + 0x8000 <= *(int *)(iVar11 + 0x3c + iVar3 * 0x14)) {
        iVar3 = iVar9 + iVar3 * 0x14;
        *(int *)(iVar3 + 0xc) = piVar13[1] + iVar4;
        cVar6 = FUN_1020d70d();
        if (cVar6 != '\0') {
          piVar1 = (int *)(iVar3 + -8);
          *piVar1 = *piVar1 + piVar13[1];
        }
      }
    } while (iVar12 != 0);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

