/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d9abd */

int __fastcall FUN_101d9abd(undefined4 *param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  ushort *puVar17;
  int iVar18;
  byte *pbVar19;
  byte bVar20;
  short sVar21;
  uint uVar22;
  uint *puVar23;
  short sVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  bool bVar28;
  bool bVar29;
  int local_a0;
  uint local_9c;
  uint local_98;
  byte *local_94;
  uint local_90;
  byte *local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  ushort *local_7c;
  int local_78;
  uint *local_74;
  int local_70;
  ushort *local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  byte *local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined3 uStack_20;
  undefined4 uStack_1d;
  undefined4 uStack_19;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_a0;
  local_38 = *param_1;
  local_34 = (byte *)0x0;
  uVar16 = *(uint *)(param_1[0x2b1] + 0x2c) >> 1;
  local_68 = (uint)((ulonglong)uVar16 * 0x92492493 >> 0x20);
  iVar18 = param_1[9];
  puVar27 = (undefined4 *)param_1[10];
  uStack_20 = 0;
  uStack_1d = 0;
  uStack_19 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_44 = -param_1[param_2 * 0x151 + 0x13];
  if ((int)local_44 < 0) {
    local_44 = param_1[param_2 * 0x151 + 0x13];
  }
  param_1[param_2 * 0x151 + 0xd] = 0;
  iVar3 = param_1[6];
  uVar26 = param_1[7];
  uVar22 = uVar26 + iVar3 * 0x28;
  if (param_2 == 0) {
    if (0 < iVar3) {
      do {
        *(int *)(uVar26 + 0x18) = (int)*(short *)(uVar26 + 0xc);
        *(int *)(uVar26 + 0x1c) = (int)*(short *)(uVar26 + 0xe);
        uVar26 = uVar26 + 0x28;
      } while (uVar26 < uVar22);
    }
  }
  else if (0 < iVar3) {
    do {
      *(int *)(uVar26 + 0x18) = (int)*(short *)(uVar26 + 0xe);
      *(int *)(uVar26 + 0x1c) = (int)*(short *)(uVar26 + 0xc);
      uVar26 = uVar26 + 0x28;
    } while (uVar26 < uVar22);
  }
  puVar23 = param_1 + param_2 * 0x151 + 0xd;
  local_58 = puVar27;
  if (iVar18 < 1) {
LAB_101da1a2:
    uVar16 = puVar23[2];
    iVar18 = 0;
    if ((uVar16 != 0) && (*puVar23 != 0)) {
      uVar22 = *puVar23 * 0x2c + uVar16;
      do {
        iVar3 = *(int *)(uVar16 + 0x28);
        iVar5 = *(int *)(*(int *)(uVar16 + 0x24) + 0x1c);
        iVar6 = *(int *)(iVar3 + 0x1c);
        iVar7 = *(int *)(*(int *)(*(int *)(uVar16 + 0x24) + 0x24) + 0x1c);
        if (iVar5 < iVar6) {
          if (iVar7 < iVar5) {
            *(short *)(uVar16 + 10) = *(short *)(uVar16 + 10) + (short)((uint)(iVar5 - iVar7) >> 1);
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 0x1c);
          uVar26 = iVar3 - iVar6;
          if (uVar26 != 0 && iVar6 <= iVar3) {
            *(short *)(uVar16 + 10) = *(short *)(uVar16 + 10) + (short)(uVar26 >> 1);
          }
        }
        else {
          if (iVar7 - iVar5 != 0 && iVar5 <= iVar7) {
            *(short *)(uVar16 + 10) = *(short *)(uVar16 + 10) + (short)((uint)(iVar7 - iVar5) >> 1);
          }
          piVar1 = (int *)(*(int *)(iVar3 + 0x20) + 0x1c);
          uVar26 = iVar6 - *piVar1;
          if (uVar26 != 0 && *piVar1 <= iVar6) {
            *(short *)(uVar16 + 10) = *(short *)(uVar16 + 10) + (short)(uVar26 >> 1);
          }
        }
        uVar16 = uVar16 + 0x2c;
      } while (uVar16 < uVar22);
    }
LAB_101da213:
    if (DAT_10388d00 != (local_14 ^ (uint)&local_a0)) {
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    return iVar18;
  }
  local_3c = puVar27 + iVar18;
  local_68 = uVar16 / 7;
  local_94 = (byte *)0x0;
  local_80 = local_44;
  local_74 = param_1 + param_2 * 0x151 + 0xd;
LAB_101d9ba3:
  puVar4 = (ushort *)*puVar27;
  puVar17 = puVar4;
  if ((((*puVar4 & 0x40) == 0) &&
      (bVar20 = (char)*(byte *)(*(int *)(puVar4 + 0x12) + 3) >> 7,
      local_44 == (byte)((*(byte *)(*(int *)(puVar4 + 0x12) + 3) ^ bVar20) - bVar20))) &&
     (bVar20 = (char)*(byte *)((int)puVar4 + 3) >> 7,
     local_44 == (byte)((*(byte *)((int)puVar4 + 3) ^ bVar20) - bVar20))) {
    do {
      puVar17 = *(ushort **)(puVar17 + 0x12);
      bVar20 = (char)*(byte *)((int)puVar17 + 3) >> 7;
      if (local_44 != (byte)((*(byte *)((int)puVar17 + 3) ^ bVar20) - bVar20)) {
        puVar17 = *(ushort **)(puVar17 + 0x10);
        break;
      }
    } while (puVar17 != puVar4);
  }
  bVar29 = false;
  local_a0 = -32000;
  local_88 = 32000;
  uVar22 = 32000;
  local_98 = 0xffff8300;
  local_90 = 0;
  local_5c = 32000;
  uVar26 = 0xffff8300;
  local_40 = 0;
  local_8c = (byte *)0x0;
  local_70 = 32000;
  local_78 = -32000;
  local_60 = 32000;
  local_64 = 0xffff8300;
  local_50 = 32000;
  local_54 = 0xffff8300;
  local_48 = 0;
  local_4c = 0;
  uVar16 = 0;
  local_6c = puVar17;
  local_58 = puVar27;
  do {
    local_9c = uVar16;
    if (bVar29) {
      iVar18 = *(int *)(puVar17 + 0xc);
      if (iVar18 < local_88) {
        local_88 = iVar18;
      }
      if (local_a0 < iVar18) {
        local_a0 = iVar18;
      }
      uVar16 = *(uint *)(puVar17 + 0xe);
      local_84 = uVar22;
      if ((int)uVar16 < (int)uVar22) {
        local_84 = uVar16;
      }
      uVar2 = *puVar17;
      if ((int)uVar16 < (int)uVar22) {
        local_9c = (uint)uVar2;
      }
      if ((int)local_98 < (int)uVar16) {
        local_90 = (uint)uVar2;
        local_98 = uVar16;
      }
      uVar25 = local_5c;
      if ((int)uVar16 < (int)local_5c) {
        uVar25 = uVar16;
      }
      if ((int)uVar16 <= (int)uVar26) {
        uVar16 = uVar26;
      }
      if ((uVar2 & 3) != 0) {
        uVar16 = uVar26;
        uVar25 = local_5c;
      }
      sVar24 = (short)local_84;
      sVar21 = (short)local_98;
      if ((uVar2 & 0x40) == 0) {
        if ((local_80 == (int)(char)*(byte *)((int)puVar17 + 3)) &&
           (bVar15 = true, puVar17 != local_6c)) {
          local_7c = (ushort *)0x1;
          bVar29 = true;
          uVar22 = local_84;
          uVar26 = uVar16;
          local_5c = uVar25;
          goto LAB_101d9e11;
        }
        if ((local_8c == (byte *)0x0) || (*(int *)(local_94 + 0x24) != *(int *)(local_8c + 0x28)))
        goto LAB_101d9d60;
        if (*(byte *)(*(int *)(local_8c + 0x28) + 2) == (byte)puVar17[1]) {
          if (local_70 < local_88) {
            local_88 = local_70;
          }
          if (local_a0 < local_78) {
            local_a0 = local_78;
          }
          if ((int)local_60 < (int)local_84) {
            local_9c = local_48;
            local_84 = local_60;
          }
          if ((int)local_98 < (int)local_64) {
            local_90 = local_4c;
            local_98 = local_64;
          }
          if ((int)local_50 < (int)uVar25) {
            uVar25 = local_50;
          }
          if ((int)uVar16 < (int)local_54) {
            uVar16 = local_54;
          }
          *(ushort **)(local_8c + 0x28) = puVar17;
          *(short *)(local_8c + 2) = (short)((uint)(local_88 + local_a0) >> 1);
          *(short *)(local_8c + 4) = (short)((uint)(local_a0 - local_88) >> 1);
          *local_8c = *local_8c & 0xfe |
                      ((int)(uVar16 - uVar25) < (int)local_68 && ((local_90 | local_9c) & 3) != 0);
          *(short *)(local_8c + 6) = (short)local_84;
          *(short *)(local_8c + 8) = (short)local_98;
          *(short *)(local_8c + 10) = (short)local_98 - (short)local_84;
        }
        else {
          uVar22 = local_60 - local_64;
          if ((int)local_60 < (int)local_64) {
            uVar22 = local_64 - local_60;
          }
          uVar26 = local_84 - local_98;
          if ((int)local_84 < (int)local_98) {
            uVar26 = local_98 - local_84;
          }
          if (local_88 < local_70) {
            local_70 = local_88;
          }
          if (local_78 < local_a0) {
            local_78 = local_a0;
          }
          if (uVar26 < uVar22) {
            *(ushort **)(local_8c + 0x28) = puVar17;
            *(short *)(local_8c + 2) = (short)((uint)(local_70 + local_78) >> 1);
            *(short *)(local_8c + 4) = (short)((uint)(local_78 - local_70) >> 1);
            local_7c = puVar17;
          }
          else {
            *(ushort **)(local_94 + 0x28) = puVar17;
            *(short *)(local_94 + 2) = (short)((uint)(local_70 + local_78) >> 1);
            *(short *)(local_94 + 4) = (short)((uint)(local_78 - local_70) >> 1);
            if ((((local_90 | local_9c) & 3) != 0) && ((int)(uVar16 - uVar25) < (int)local_68)) {
              *local_94 = *local_94 | 1;
            }
            *(short *)(local_94 + 6) = sVar24;
            *(short *)(local_94 + 8) = sVar21;
            *(short *)(local_94 + 10) = (short)(local_98 - local_84);
            uVar8 = *(undefined4 *)(local_94 + 0x10);
            uVar9 = *(undefined4 *)(local_94 + 0x14);
            uVar10 = *(undefined4 *)(local_94 + 0x18);
            uVar11 = *(undefined4 *)(local_94 + 0x1c);
            uVar12 = *(undefined4 *)(local_94 + 0x20);
            uVar13 = *(undefined4 *)(local_94 + 0x24);
            uVar14 = *(undefined4 *)(local_94 + 0x28);
            *(undefined4 *)(local_8c + 0x1c) = *(undefined4 *)(local_94 + 0x1c);
            *(undefined4 *)(local_8c + 0x20) = uVar12;
            *(undefined4 *)(local_8c + 0x24) = uVar13;
            *(undefined4 *)(local_8c + 0x28) = uVar14;
            *(undefined4 *)(local_8c + 0x10) = uVar8;
            *(undefined4 *)(local_8c + 0x14) = uVar9;
            *(undefined4 *)(local_8c + 0x18) = uVar10;
            *(undefined4 *)(local_8c + 0x1c) = uVar11;
            uVar8 = *(undefined4 *)(local_94 + 4);
            uVar9 = *(undefined4 *)(local_94 + 8);
            uVar10 = *(undefined4 *)(local_94 + 0xc);
            *(undefined4 *)local_8c = *(undefined4 *)local_94;
            *(undefined4 *)(local_8c + 4) = uVar8;
            *(undefined4 *)(local_8c + 8) = uVar9;
            *(undefined4 *)(local_8c + 0xc) = uVar10;
            local_a0 = local_78;
            local_88 = local_70;
            local_7c = puVar17;
            local_64 = local_98;
            local_60 = local_84;
            local_54 = uVar16;
            local_50 = uVar25;
            local_4c = local_90;
            local_48 = local_9c;
          }
        }
        *local_74 = *local_74 - 1;
      }
      else {
LAB_101d9d60:
        *(ushort **)(local_94 + 0x28) = puVar17;
        *(short *)(local_94 + 2) = (short)((uint)(local_a0 + local_88) >> 1);
        *(short *)(local_94 + 4) = (short)((uint)(local_a0 - local_88) >> 1);
        if ((((local_90 | local_9c) & 3) != 0) && ((int)(uVar16 - uVar25) < (int)local_68)) {
          *local_94 = *local_94 | 1;
        }
        *(short *)(local_94 + 6) = sVar24;
        *(short *)(local_94 + 8) = sVar21;
        *(short *)(local_94 + 10) = sVar21 - sVar24;
        local_8c = local_94;
        local_78 = local_a0;
        local_70 = local_88;
        local_64 = local_98;
        local_60 = local_84;
        local_54 = uVar16;
        local_50 = uVar25;
        local_4c = local_90;
        local_48 = local_9c;
      }
      local_34 = (byte *)0x0;
      local_94 = (byte *)0x0;
      bVar15 = false;
      bVar29 = false;
      uVar22 = local_84;
      uVar26 = uVar16;
      local_5c = uVar25;
    }
    else {
      bVar15 = false;
      bVar29 = false;
    }
LAB_101d9e11:
    if (puVar17 == local_6c) {
      bVar28 = (char)local_40 != '\0';
      local_40 = CONCAT31((int3)(uVar16 >> 8),1);
      if (bVar28) break;
    }
    if (!bVar15 && (*puVar17 & 0x40) == 0) {
      bVar20 = *(byte *)((int)puVar17 + 3);
      uVar25 = (uint)(char)bVar20;
      uVar16 = -uVar25;
      if ((int)-uVar25 < 0) {
        uVar16 = uVar25;
      }
      if ((uVar16 == local_44) || (bVar29 = false, puVar17 == *(ushort **)(puVar17 + 0x12))) {
        if (1000 < *local_74) {
          *local_74 = 0;
          iVar18 = 0;
          goto LAB_101da213;
        }
        iVar18 = FUN_101da6d5(&local_34);
        if (iVar18 != 0) goto LAB_101da213;
        *local_34 = 0;
        *(undefined4 *)(local_34 + 1) = uStack_30;
        *(undefined4 *)(local_34 + 5) = uStack_2c;
        *(undefined4 *)(local_34 + 9) = uStack_28;
        *(undefined4 *)(local_34 + 0xd) = uStack_24;
        *(uint *)(local_34 + 0xc) = CONCAT31((undefined3)uStack_24,uStack_28._3_1_);
        *(uint *)(local_34 + 0x10) = CONCAT31(uStack_20,uStack_24._3_1_);
        *(undefined4 *)(local_34 + 0x14) = uStack_1d;
        *(undefined4 *)(local_34 + 0x18) = uStack_19;
        local_34[0x1c] = 0;
        local_34[0x1d] = 0x7d;
        local_34[0x1e] = 0;
        local_34[0x1f] = 0;
        local_34[0x20] = 0;
        local_34[0x21] = 0;
        local_34[0x22] = 0;
        local_34[0x23] = 0;
        local_34[1] = bVar20;
        *(ushort **)(local_34 + 0x24) = puVar17;
        *(ushort **)(local_34 + 0x28) = puVar17;
        pbVar19 = local_34 + -0x2c;
        if (local_8c == (byte *)0x0) {
          pbVar19 = local_8c;
        }
        local_a0 = *(int *)(puVar17 + 0xc);
        uVar22 = *(uint *)(puVar17 + 0xe);
        local_9c = (uint)*puVar17;
        bVar29 = (*puVar17 & 3) == 0;
        local_5c = 32000;
        if (bVar29) {
          local_5c = uVar22;
        }
        uVar26 = 0xffff8300;
        if (bVar29) {
          uVar26 = uVar22;
        }
        local_8c = pbVar19;
        local_80 = uVar25;
        local_88 = local_a0;
        local_90 = local_9c;
        local_98 = uVar22;
        if (puVar17 == *(ushort **)(puVar17 + 0x12)) {
          *(short *)(local_34 + 2) = (short)local_a0;
          if ((*puVar17 & 3) != 0) {
            *local_34 = 1;
          }
          *(ushort *)(local_34 + 6) = puVar17[0xe];
          *(ushort *)(local_34 + 8) = puVar17[0xe];
          local_34[10] = 0;
          local_34[0xb] = 0;
          local_34 = (byte *)0x0;
          bVar29 = false;
          local_94 = local_34;
        }
        else {
          bVar29 = true;
          local_94 = local_34;
          local_7c = puVar17;
        }
      }
    }
    puVar17 = *(ushort **)(puVar17 + 0x10);
    uVar16 = local_9c;
  } while( true );
  puVar27 = local_58 + 1;
  puVar23 = local_74;
  if (local_3c <= puVar27) goto LAB_101da1a2;
  goto LAB_101d9ba3;
}

