/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102263d1 */

undefined4 __fastcall
FUN_102263d1(uint param_1,int param_2,int param_3,int *param_4,uint *param_5,undefined *param_6)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  undefined *local_84;
  undefined *local_80;
  int local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  ushort auStack_54 [16];
  ushort local_34 [16];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_a4;
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[8] = 0;
  local_34[9] = 0;
  local_34[10] = 0;
  local_34[0xb] = 0;
  local_34[0xc] = 0;
  local_34[0xd] = 0;
  local_34[0xe] = 0;
  local_34[0xf] = 0;
  if (param_3 != 0) {
    iVar5 = 0;
    do {
      local_34[*(ushort *)(param_2 + iVar5 * 2)] = local_34[*(ushort *)(param_2 + iVar5 * 2)] + 1;
      iVar5 = iVar5 + 1;
    } while (param_3 != iVar5);
  }
  iVar5 = 0xe;
  do {
    local_a0 = param_1;
    if (local_34[iVar5 + 1] != 0) {
      local_74 = iVar5 + 1;
      uVar8 = *param_5;
      if (local_74 <= *param_5) {
        uVar8 = local_74;
      }
      uVar13 = 1;
      local_a4 = uVar13;
      if (local_74 < 2) goto LAB_102264b1;
      local_a4 = 1;
      iVar6 = iVar5;
      goto LAB_102264a0;
    }
    bVar17 = iVar5 != 0;
    iVar5 = iVar5 + -1;
  } while (bVar17);
  puVar2 = (undefined4 *)*param_4;
  *param_4 = (int)(puVar2 + 1);
  *puVar2 = 0x140;
  puVar2 = (undefined4 *)*param_4;
  *param_4 = (int)(puVar2 + 1);
  *puVar2 = 0x140;
  uVar8 = 1;
LAB_10226454:
  *param_5 = uVar8;
  uVar11 = 0;
  goto LAB_1022645f;
  while( true ) {
    local_a4 = local_a4 + 1;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) break;
LAB_102264a0:
    if (local_34[local_a4] != 0) goto LAB_102264b1;
  }
  local_a4 = iVar5 + 1;
LAB_102264b1:
  if (uVar8 <= local_a4) {
    uVar8 = local_a4;
  }
  uVar11 = 0xffffffff;
  uVar14 = uVar13;
  do {
    uVar14 = uVar14 * 2 - (uint)local_34[uVar13];
    local_9c = uVar8;
    if ((int)uVar14 < 0) goto LAB_1022645f;
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x10);
  if ((uVar14 == 0) || (iVar5 == 0 && param_1 != 0)) {
    auStack_54[1] = 0;
    uVar4 = 0;
    iVar6 = 0;
    do {
      uVar4 = uVar4 + local_34[iVar6 + 1];
      auStack_54[iVar6 + 2] = uVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xe);
    if (param_3 != 0) {
      iVar6 = 0;
      do {
        uVar13 = (uint)*(ushort *)(param_2 + iVar6 * 2);
        if (uVar13 != 0) {
          uVar4 = auStack_54[uVar13];
          auStack_54[uVar13] = uVar4 + 1;
          *(short *)(param_6 + (uint)uVar4 * 2) = (short)iVar6;
        }
        iVar6 = iVar6 + 1;
      } while (param_3 != iVar6);
    }
    if (param_1 == 0) {
      uVar13 = 0x14;
      local_8c = 0;
      local_84 = param_6;
      local_80 = param_6;
      local_90 = 0;
      goto LAB_102265ac;
    }
    if (param_1 == 1) {
      if (uVar8 < 10) {
        local_90 = CONCAT31((int3)((uint)param_3 >> 8),1);
        uVar13 = 0x101;
        local_80 = &DAT_1032344e;
        local_84 = &DAT_10323410;
        local_8c = 0;
        goto LAB_102265ac;
      }
    }
    else {
      uVar13 = 0;
      local_80 = &DAT_103234cc;
      local_84 = &DAT_1032348c;
      local_8c = CONCAT31((int3)((uint)param_2 >> 8),param_1 == 2);
      if (param_1 != 2) {
        local_90 = 0;
LAB_102265ac:
        local_88 = 1 << ((byte)uVar8 & 0x1f);
        local_64 = local_88 - 1;
        local_78 = *param_4;
        local_94 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_70 = 0xffffffff;
        uVar14 = uVar8;
        do {
          local_68 = 1 << ((byte)uVar14 & 0x1f);
          local_5c = local_78 + 2;
          do {
            bVar7 = (char)local_a4 - (byte)local_98;
            uVar4 = *(ushort *)(param_6 + local_94 * 2);
            uVar14 = (uint)uVar4;
            if (uVar14 + 1 < uVar13) {
              uVar3 = 0;
            }
            else if (uVar14 < uVar13) {
              uVar3 = 0x60;
              uVar4 = 0;
            }
            else {
              uVar3 = local_80[(uVar14 - uVar13) * 2];
              uVar4 = *(ushort *)(local_84 + (uVar14 - uVar13) * 2);
            }
            iVar16 = -1 << (bVar7 & 0x1f);
            local_58 = iVar5 - local_a4;
            iVar9 = iVar16 * 4 + (local_a0 >> ((byte)local_98 & 0x1f)) * 4 + local_5c;
            iVar6 = local_68;
            do {
              iVar12 = iVar6 + iVar16;
              *(undefined1 *)(iVar9 + -2 + iVar6 * 4) = uVar3;
              *(byte *)(iVar9 + -1 + iVar6 * 4) = bVar7;
              *(ushort *)(iVar9 + iVar6 * 4) = uVar4;
              iVar6 = iVar12;
            } while (iVar12 != 0);
            uVar11 = 1;
            uVar14 = 1 << ((char)local_a4 - 1U & 0x1f);
            do {
              uVar10 = uVar14;
              uVar14 = uVar10 >> 1;
            } while ((uVar10 & local_a0) != 0);
            local_a0 = (uVar10 - 1 & local_a0) + uVar10;
            if (uVar10 == 0) {
              local_a0 = 0;
            }
            puVar1 = local_34 + local_a4;
            *puVar1 = *puVar1 - 1;
            local_6c = iVar5;
            local_60 = uVar13;
            if (*puVar1 == 0) {
              if (local_58 == -1) {
                if (local_a0 != 0) {
                  *(undefined1 *)(local_78 + local_a0 * 4) = 0x40;
                  *(byte *)(local_78 + 1 + local_a0 * 4) = bVar7;
                  *(undefined2 *)(local_78 + 2 + local_a0 * 4) = 0;
                }
                *param_4 = *param_4 + local_88 * 4;
                local_7c = param_2;
                goto LAB_10226454;
              }
              local_a4 = (uint)*(ushort *)
                                (param_2 + (uint)*(ushort *)(param_6 + local_94 * 2 + 2) * 2);
            }
            local_94 = local_94 + 1;
          } while ((local_a4 <= uVar8) || (uVar10 = local_a0 & local_64, uVar10 == local_70));
          if (local_98 == 0) {
            local_98 = uVar8;
          }
          uVar14 = local_a4 - local_98;
          iVar6 = 1 << ((byte)uVar14 & 0x1f);
          if (local_a4 < local_74) {
            uVar14 = (iVar5 - local_98) + 1;
            uVar15 = local_a4;
            do {
              iVar9 = iVar6 - (uint)local_34[uVar15];
              if (iVar9 == 0 || iVar6 < (int)(uint)local_34[uVar15]) {
                uVar14 = uVar15 - local_98;
                break;
              }
              iVar6 = iVar9 * 2;
              uVar15 = uVar15 + 1;
            } while (uVar15 < local_74);
            iVar6 = 1 << ((byte)uVar14 & 0x1f);
          }
          local_88 = local_88 + iVar6;
          local_7c = param_2;
          if ((((byte)local_90 & 0x354 < local_88) != 0) ||
             ((0x250 < local_88 & (byte)local_8c) != 0)) goto LAB_1022645f;
          local_78 = local_78 + local_68 * 4;
          *(char *)(*param_4 + uVar10 * 4) = (char)uVar14;
          *(byte *)(*param_4 + 1 + uVar10 * 4) = (byte)uVar8;
          *(short *)(*param_4 + 2 + uVar10 * 4) = (short)((uint)(local_78 - *param_4) >> 2);
          local_70 = uVar10;
        } while( true );
      }
      local_90 = 0;
      local_7c = param_2;
      if (uVar8 < 10) goto LAB_102265ac;
    }
    uVar11 = 1;
  }
LAB_1022645f:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_a4)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar11;
}

