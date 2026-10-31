/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180208fc2 */

ulonglong FUN_180208fc2(undefined8 *param_1,longlong param_2,uint param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ushort *puVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ushort *puVar19;
  ushort *puVar20;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint *local_80;
  ulonglong local_70;
  uint local_64;
  undefined8 local_60;
  ushort *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar11;
  *(uint *)(param_1 + 1) = param_3;
  param_1[0x18] = 0;
  param_1[0x19] = param_1 + 0x18;
  uVar9 = FUN_1801ce63e(param_2,param_3);
  if ((int)uVar9 != 0) goto LAB_180209071;
  uVar9 = FUN_1801cec60(param_2,param_4);
  local_4c = (uint)uVar9;
  if (local_4c != 0) goto LAB_180209071;
  puVar19 = *(ushort **)(param_2 + 0x38);
  param_1[0x1b] = puVar19;
  puVar5 = local_58;
  if (param_4 < 0xf) {
LAB_180209044:
    local_58 = puVar5;
    local_4c = 8;
  }
  else {
    *(uint *)((longlong)param_1 + 0xc) = (uint)(ushort)(*puVar19 << 8 | *puVar19 >> 8);
    uVar6 = puVar19[1] << 8 | puVar19[1] >> 8;
    *(uint *)(param_1 + 2) = (uint)uVar6;
    uVar18 = (uint)(ushort)(puVar19[2] << 8 | puVar19[2] >> 8);
    *(uint *)((longlong)param_1 + 0x14) = uVar18;
    *(uint *)(param_1 + 3) =
         (int)(short)((ushort)(byte)puVar19[3] << 8) | (uint)*(byte *)((longlong)puVar19 + 7);
    *(uint *)((longlong)param_1 + 0x1c) =
         (int)(short)((ushort)(byte)puVar19[4] << 8) | (uint)*(byte *)((longlong)puVar19 + 9);
    *(uint *)(param_1 + 4) =
         (int)(short)((ushort)(byte)puVar19[5] << 8) | (uint)*(byte *)((longlong)puVar19 + 0xb);
    *(uint *)((longlong)param_1 + 0x24) =
         (int)(short)((ushort)(byte)puVar19[6] << 8) | (uint)*(byte *)((longlong)puVar19 + 0xd);
    local_58 = (ushort *)((longlong)puVar19 + 0xf);
    bVar1 = (byte)puVar19[7];
    uVar15 = (ulonglong)bVar1;
    *(uint *)(param_1 + 5) = (uint)bVar1;
    puVar5 = local_58;
    if ((uVar6 == 0) || (uVar18 == 0)) goto LAB_180209044;
    local_64 = bVar1 & 4;
    if ((bVar1 & 4) == 0) {
      if (param_4 < 0x11) goto LAB_180209044;
      local_58 = (ushort *)((longlong)puVar19 + 0x11);
      *(uint *)((longlong)param_1 + 0x2c) =
           (int)(short)((ushort)*(byte *)((longlong)puVar19 + 0xf) << 8) | (uint)(byte)puVar19[8];
    }
    puVar19 = (ushort *)((longlong)puVar19 + (ulonglong)param_4);
    if (((char)bVar1 < '\0') &&
       (local_4c = FUN_18020957c(&local_58,puVar19,&DAT_18033b180,param_1), local_4c != 0))
    goto LAB_18020904c;
    puVar20 = (ushort *)((longlong)local_58 + 3);
    puVar5 = local_58;
    if (puVar19 < puVar20) goto LAB_180209044;
    uVar18 = (uint)(byte)local_58[1] |
             (uint)*(byte *)((longlong)local_58 + 1) << 8 | (uint)(byte)*local_58 << 0x10;
    puVar13 = puVar20;
    local_58 = puVar20;
    if (uVar18 != 0) {
      puVar13 = (ushort *)((ulonglong)uVar18 + (longlong)puVar20);
      uVar9 = uVar15;
      puVar4 = puVar13;
      local_58 = puVar13;
      puVar5 = puVar20;
      if (puVar19 < puVar13) goto LAB_180209044;
      do {
        local_60 = puVar4;
        local_70 = uVar9;
        if ((puVar13 < puVar20 + 2) || (uVar6 = *puVar20 << 8 | *puVar20 >> 8, uVar6 < 4)) break;
        if (uVar18 < uVar6) break;
        uVar7 = puVar20[1] << 8 | puVar20[1] >> 8;
        if (uVar7 == 3) {
          puVar17 = param_1 + 0xe;
LAB_18020926a:
          uVar9 = FUN_18020962b(puVar20 + 2,uVar6 - 4,uVar11,puVar17);
          local_4c = (uint)uVar9;
          puVar13 = local_60;
          uVar15 = local_70;
          if (local_4c != 0) goto LAB_180209071;
        }
        else if (uVar7 == 2) {
          if (0x23 < uVar6) {
            *(uint *)(param_1 + 6) =
                 (int)(short)((ushort)(byte)puVar20[7] << 8) |
                 (uint)*(byte *)((longlong)puVar20 + 0xf);
            *(uint *)((longlong)param_1 + 0x34) =
                 (int)(short)((ushort)(byte)puVar20[8] << 8) |
                 (uint)*(byte *)((longlong)puVar20 + 0x11);
            *(uint *)(param_1 + 7) =
                 (int)(short)((ushort)(byte)puVar20[9] << 8) |
                 (uint)*(byte *)((longlong)puVar20 + 0x13);
          }
        }
        else if (uVar7 == 1) {
          puVar17 = param_1 + 0xd;
          goto LAB_18020926a;
        }
        puVar20 = (ushort *)((longlong)puVar20 + (ulonglong)uVar6);
        uVar18 = uVar18 - uVar6;
        uVar9 = local_70;
        puVar4 = local_60;
      } while (uVar18 != 0);
    }
    puVar20 = (ushort *)((longlong)puVar13 + 1);
    puVar5 = local_58;
    if (puVar19 < puVar20) goto LAB_180209044;
    bVar1 = (byte)*puVar13;
    *(uint *)(param_1 + 0x11) = (uint)bVar1;
    puVar5 = puVar20;
    if (puVar19 < (ushort *)((longlong)puVar20 + (ulonglong)((uint)bVar1 + (uint)bVar1)))
    goto LAB_180209044;
    local_80 = &local_4c;
    local_88 = 0;
    local_70 = uVar15;
    local_58 = puVar20;
    uVar10 = FUN_1801cc8d6(uVar11,4,0,(uint)bVar1);
    param_1[0x12] = uVar10;
    if (local_4c == 0) {
      if (bVar1 != 0) {
        uVar9 = 0;
        do {
          *(uint *)(param_1[0x12] + uVar9 * 2) =
               (int)(short)((ushort)*(byte *)((longlong)puVar20 + uVar9) << 8) |
               (uint)*(byte *)((longlong)puVar13 + uVar9 + 2);
          uVar9 = uVar9 + 2;
        } while ((uint)bVar1 + (uint)bVar1 != uVar9);
        puVar20 = (ushort *)((longlong)puVar20 + uVar9);
      }
      puVar13 = puVar20 + 4;
      puVar5 = local_58;
      if (puVar13 <= puVar19) {
        *(uint *)(param_1 + 0x13) = (uint)(byte)*puVar20;
        *(uint *)((longlong)param_1 + 0x9c) = (uint)*(byte *)((longlong)puVar20 + 1);
        *(uint *)(param_1 + 10) = (uint)(ushort)(puVar20[1] << 8 | puVar20[1] >> 8);
        *(uint *)(param_1 + 8) = (uint)(ushort)(puVar20[2] << 8 | puVar20[2] >> 8);
        uVar6 = puVar20[3] << 8 | puVar20[3] >> 8;
        *(uint *)(param_1 + 0x14) = (uint)uVar6;
        param_1[0x15] =
             (byte *)((longlong)puVar13 + ((ulonglong)param_3 - *(longlong *)(param_2 + 0x38)));
        puVar5 = puVar13;
        if (uVar6 != 0) {
          uVar16 = (uint)local_70;
          uVar18 = (uint)(local_70 >> 3) & 1;
          uVar15 = (ulonglong)uVar18;
          uVar9 = local_70 & 0x10;
          local_60 = (ushort *)(CONCAT44(local_60._4_4_,uVar16) & 0xffffffff00000020);
          if ((ushort *)
              ((ulonglong)
               (((local_64 >> 1 | uVar18) + ((uVar16 & 0x20) >> 5) + ((uVar16 & 0x10) >> 4) +
                (5 - (uint)((local_70 & 2) == 0))) * (uint)uVar6) + (longlong)puVar13) <= puVar19) {
            local_88 = 0;
            local_80 = &local_4c;
            local_58 = puVar13;
            uVar11 = FUN_1801cc8d6(uVar11,0x10,0,uVar6);
            param_1[0x16] = uVar11;
            if (local_4c == 0) {
              lVar12 = 0;
              do {
                uVar18 = (uint)(byte)*puVar13;
                if ((local_70 & 2) == 0) {
                  puVar19 = (ushort *)((longlong)puVar13 + 1);
                }
                else {
                  puVar19 = puVar13 + 1;
                  uVar18 = (uint)CONCAT11((byte)*puVar13,*(byte *)((longlong)puVar13 + 1));
                }
                lVar2 = param_1[0x16];
                *(uint *)(lVar2 + lVar12) = uVar18;
                if (local_64 == 0) {
                  uVar18 = *(uint *)((longlong)param_1 + 0x2c);
                }
                else {
                  uVar7 = *puVar19;
                  pbVar14 = (byte *)((longlong)puVar19 + 1);
                  puVar19 = puVar19 + 1;
                  uVar18 = (int)(short)((ushort)(byte)uVar7 << 8) | (uint)*pbVar14;
                }
                *(uint *)(lVar2 + 4 + lVar12) = uVar18;
                uVar18 = (uint)*(byte *)((longlong)puVar19 + uVar15);
                if (uVar9 == 0) {
                  lVar3 = uVar15 + 1;
                }
                else {
                  lVar3 = uVar15 + 2;
                  uVar18 = (uint)CONCAT11(*(byte *)((longlong)puVar19 + uVar15),
                                          *(byte *)((longlong)puVar19 + uVar15 + 1));
                }
                pbVar14 = (byte *)((longlong)puVar19 + lVar3);
                *(uint *)(lVar2 + 8 + lVar12) = uVar18;
                uVar18 = (uint)pbVar14[1];
                if ((int)local_60 == 0) {
                  puVar13 = (ushort *)(pbVar14 + 2);
                  uVar16 = (uint)*pbVar14 << 8;
                }
                else {
                  uVar18 = (uint)pbVar14[1] << 8 | (uint)*pbVar14 << 0x10;
                  uVar16 = (uint)pbVar14[2];
                  puVar13 = (ushort *)(pbVar14 + 3);
                }
                *(uint *)(lVar2 + 0xc + lVar12) = uVar16 | uVar18;
                lVar12 = lVar12 + 0x10;
              } while ((ulonglong)uVar6 * 0x10 != lVar12);
            }
            goto LAB_18020904c;
          }
        }
      }
      goto LAB_180209044;
    }
  }
LAB_18020904c:
  FUN_1801ced84(param_2);
  uVar8 = FUN_1801ceb6f(param_2);
  *(undefined4 *)(param_1 + 0x1a) = uVar8;
  param_1[0x1b] = 0;
  uVar9 = (ulonglong)local_4c;
LAB_180209071:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
  }
  return uVar9;
}

