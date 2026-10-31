/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400565fe */

ulonglong FUN_1400565fe(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar9;
  longlong lVar10;
  ushort *puVar11;
  byte *pbVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined1 auStackY_a8 [32];
  ushort *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  lVar10 = param_2[6];
  *param_1 = lVar10;
  *(uint *)(param_1 + 1) = param_3;
  param_1[0x18] = 0;
  param_1[0x19] = (longlong)(param_1 + 0x18);
  uVar8 = FUN_140020a41((longlong)param_2,param_3);
  if ((int)uVar8 != 0) goto LAB_1400566ad;
  local_4c = FUN_140021063(param_2,param_4);
  uVar8 = CONCAT44(extraout_var,local_4c);
  if (local_4c != 0) goto LAB_1400566ad;
  puVar16 = (ushort *)param_2[7];
  param_1[0x1b] = (longlong)puVar16;
  puVar4 = local_58;
  if (param_4 < 0xf) {
LAB_140056680:
    local_58 = puVar4;
    local_4c = 8;
  }
  else {
    *(uint *)((longlong)param_1 + 0xc) = (uint)(ushort)(*puVar16 << 8 | *puVar16 >> 8);
    uVar5 = puVar16[1] << 8 | puVar16[1] >> 8;
    *(uint *)(param_1 + 2) = (uint)uVar5;
    uVar15 = (uint)(ushort)(puVar16[2] << 8 | puVar16[2] >> 8);
    *(uint *)((longlong)param_1 + 0x14) = uVar15;
    *(uint *)(param_1 + 3) =
         (int)(short)((ushort)(byte)puVar16[3] << 8) | (uint)*(byte *)((longlong)puVar16 + 7);
    *(uint *)((longlong)param_1 + 0x1c) =
         (int)(short)((ushort)(byte)puVar16[4] << 8) | (uint)*(byte *)((longlong)puVar16 + 9);
    *(uint *)(param_1 + 4) =
         (int)(short)((ushort)(byte)puVar16[5] << 8) | (uint)*(byte *)((longlong)puVar16 + 0xb);
    *(uint *)((longlong)param_1 + 0x24) =
         (int)(short)((ushort)(byte)puVar16[6] << 8) | (uint)*(byte *)((longlong)puVar16 + 0xd);
    local_58 = (ushort *)((longlong)puVar16 + 0xf);
    bVar1 = (byte)puVar16[7];
    *(uint *)(param_1 + 5) = (uint)bVar1;
    puVar4 = local_58;
    if ((uVar5 == 0) || (uVar15 == 0)) goto LAB_140056680;
    if ((bVar1 & 4) == 0) {
      if (param_4 < 0x11) goto LAB_140056680;
      local_58 = (ushort *)((longlong)puVar16 + 0x11);
      *(uint *)((longlong)param_1 + 0x2c) =
           (int)(short)((ushort)*(byte *)((longlong)puVar16 + 0xf) << 8) | (uint)(byte)puVar16[8];
    }
    puVar16 = (ushort *)((longlong)puVar16 + (ulonglong)param_4);
    if (((char)bVar1 < '\0') &&
       (local_4c = FUN_140056bb8((ulonglong *)&local_58,(byte *)puVar16,(uint *)&DAT_1400f82b0,
                                 param_1), local_4c != 0)) goto LAB_140056688;
    puVar17 = (ushort *)((longlong)local_58 + 3);
    puVar4 = local_58;
    if (puVar16 < puVar17) goto LAB_140056680;
    uVar15 = (uint)(byte)local_58[1] |
             (uint)*(byte *)((longlong)local_58 + 1) << 8 | (uint)(byte)*local_58 << 0x10;
    puVar11 = puVar17;
    local_58 = puVar17;
    if (uVar15 != 0) {
      puVar11 = (ushort *)((ulonglong)uVar15 + (longlong)puVar17);
      local_58 = puVar11;
      puVar4 = puVar17;
      if (puVar16 < puVar11) goto LAB_140056680;
      do {
        if ((puVar11 < puVar17 + 2) || (uVar5 = *puVar17 << 8 | *puVar17 >> 8, uVar5 < 4)) break;
        if (uVar15 < uVar5) break;
        uVar6 = puVar17[1] << 8 | puVar17[1] >> 8;
        if (uVar6 == 3) {
          plVar14 = param_1 + 0xe;
LAB_1400568a6:
          local_4c = FUN_140056c67((undefined8 *)(puVar17 + 2),uVar5 - 4,lVar10,plVar14);
          uVar8 = CONCAT44(extraout_var_00,local_4c);
          if (local_4c != 0) goto LAB_1400566ad;
        }
        else if (uVar6 == 2) {
          if (0x23 < uVar5) {
            *(uint *)(param_1 + 6) =
                 (int)(short)((ushort)(byte)puVar17[7] << 8) |
                 (uint)*(byte *)((longlong)puVar17 + 0xf);
            *(uint *)((longlong)param_1 + 0x34) =
                 (int)(short)((ushort)(byte)puVar17[8] << 8) |
                 (uint)*(byte *)((longlong)puVar17 + 0x11);
            *(uint *)(param_1 + 7) =
                 (int)(short)((ushort)(byte)puVar17[9] << 8) |
                 (uint)*(byte *)((longlong)puVar17 + 0x13);
          }
        }
        else if (uVar6 == 1) {
          plVar14 = param_1 + 0xd;
          goto LAB_1400568a6;
        }
        puVar17 = (ushort *)((longlong)puVar17 + (ulonglong)uVar5);
        uVar15 = uVar15 - uVar5;
      } while (uVar15 != 0);
    }
    puVar17 = (ushort *)((longlong)puVar11 + 1);
    puVar4 = local_58;
    if (puVar16 < puVar17) goto LAB_140056680;
    bVar2 = (byte)*puVar11;
    *(uint *)(param_1 + 0x11) = (uint)bVar2;
    puVar4 = puVar17;
    if (puVar16 < (ushort *)((longlong)puVar17 + (ulonglong)((uint)bVar2 + (uint)bVar2)))
    goto LAB_140056680;
    local_58 = puVar17;
    lVar9 = FUN_14001f231(lVar10,4,0,(uint)bVar2,0,(int *)&local_4c);
    param_1[0x12] = lVar9;
    if (local_4c == 0) {
      if (bVar2 != 0) {
        uVar8 = 0;
        do {
          *(uint *)(param_1[0x12] + uVar8 * 2) =
               (int)(short)((ushort)*(byte *)((longlong)puVar17 + uVar8) << 8) |
               (uint)*(byte *)((longlong)puVar11 + uVar8 + 2);
          uVar8 = uVar8 + 2;
        } while ((uint)bVar2 + (uint)bVar2 != uVar8);
        puVar17 = (ushort *)((longlong)puVar17 + uVar8);
      }
      puVar11 = puVar17 + 4;
      puVar4 = local_58;
      if (puVar11 <= puVar16) {
        *(uint *)(param_1 + 0x13) = (uint)(byte)*puVar17;
        *(uint *)((longlong)param_1 + 0x9c) = (uint)*(byte *)((longlong)puVar17 + 1);
        *(uint *)(param_1 + 10) = (uint)(ushort)(puVar17[1] << 8 | puVar17[1] >> 8);
        *(uint *)(param_1 + 8) = (uint)(ushort)(puVar17[2] << 8 | puVar17[2] >> 8);
        uVar5 = puVar17[3] << 8 | puVar17[3] >> 8;
        *(uint *)(param_1 + 0x14) = (uint)uVar5;
        param_1[0x15] = (longlong)((longlong)puVar11 + ((ulonglong)param_3 - param_2[7]));
        puVar4 = puVar11;
        if (uVar5 != 0) {
          uVar15 = bVar1 >> 3 & 1;
          uVar8 = (ulonglong)uVar15;
          if ((ushort *)
              ((ulonglong)
               ((((bVar1 & 4) >> 1 | uVar15) + ((bVar1 & 0x20) >> 5) + ((bVar1 & 0x10) >> 4) +
                (5 - (uint)((bVar1 & 2) == 0))) * (uint)uVar5) + (longlong)puVar11) <= puVar16) {
            local_58 = puVar11;
            lVar10 = FUN_14001f231(lVar10,0x10,0,(uint)uVar5,0,(int *)&local_4c);
            param_1[0x16] = lVar10;
            if (local_4c == 0) {
              lVar10 = 0;
              do {
                uVar15 = (uint)(byte)*puVar11;
                if ((bVar1 & 2) == 0) {
                  puVar16 = (ushort *)((longlong)puVar11 + 1);
                }
                else {
                  puVar16 = puVar11 + 1;
                  uVar15 = (uint)CONCAT11((byte)*puVar11,*(byte *)((longlong)puVar11 + 1));
                }
                lVar9 = param_1[0x16];
                *(uint *)(lVar9 + lVar10) = uVar15;
                if ((bVar1 & 4) == 0) {
                  uVar15 = *(uint *)((longlong)param_1 + 0x2c);
                }
                else {
                  uVar6 = *puVar16;
                  pbVar12 = (byte *)((longlong)puVar16 + 1);
                  puVar16 = puVar16 + 1;
                  uVar15 = (int)(short)((ushort)(byte)uVar6 << 8) | (uint)*pbVar12;
                }
                *(uint *)(lVar9 + 4 + lVar10) = uVar15;
                uVar15 = (uint)*(byte *)((longlong)puVar16 + uVar8);
                if ((bVar1 & 0x10) == 0) {
                  lVar3 = uVar8 + 1;
                }
                else {
                  lVar3 = uVar8 + 2;
                  uVar15 = (uint)CONCAT11(*(byte *)((longlong)puVar16 + uVar8),
                                          *(byte *)((longlong)puVar16 + uVar8 + 1));
                }
                pbVar12 = (byte *)((longlong)puVar16 + lVar3);
                *(uint *)(lVar9 + 8 + lVar10) = uVar15;
                uVar15 = (uint)pbVar12[1];
                if ((bVar1 & 0x20) == 0) {
                  puVar11 = (ushort *)(pbVar12 + 2);
                  uVar13 = (uint)*pbVar12 << 8;
                }
                else {
                  uVar15 = (uint)pbVar12[1] << 8 | (uint)*pbVar12 << 0x10;
                  uVar13 = (uint)pbVar12[2];
                  puVar11 = (ushort *)(pbVar12 + 3);
                }
                *(uint *)(lVar9 + 0xc + lVar10) = uVar13 | uVar15;
                lVar10 = lVar10 + 0x10;
              } while ((ulonglong)uVar5 * 0x10 != lVar10);
            }
            goto LAB_140056688;
          }
        }
      }
      goto LAB_140056680;
    }
  }
LAB_140056688:
  FUN_140021187(param_2);
  uVar7 = FUN_140020f72((longlong)param_2);
  *(undefined4 *)(param_1 + 0x1a) = uVar7;
  param_1[0x1b] = 0;
  uVar8 = (ulonglong)local_4c;
LAB_1400566ad:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
  }
  return uVar8;
}

