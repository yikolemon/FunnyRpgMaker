/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003faff */

int FUN_14003faff(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 auStackY_98 [32];
  int local_5c;
  ushort local_58;
  ushort local_56;
  int local_54;
  ushort local_50;
  byte local_4e;
  int local_4c;
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  plVar3 = *(longlong **)(param_1 + 0xa0);
  lVar4 = plVar3[6];
  lVar5 = *(longlong *)(param_1 + 0x408);
  local_44 = (**(code **)(param_1 + 0x2a0))(param_1,0x67766172,plVar3,&local_48);
  if (local_44 != 0) goto LAB_14003fbb9;
  iVar7 = FUN_140020f72((longlong)plVar3);
  local_44 = FUN_1400214cf(plVar3,0x1400f4740,(longlong)&local_5c);
  if (local_44 != 0) goto LAB_14003fbb9;
  if ((((local_5c != 0x10000) || (local_58 != **(ushort **)(lVar5 + 0x18))) ||
      (local_48 >> 1 < (uint)local_56 * (uint)local_58)) ||
     (uVar14 = local_50 + 1 << (local_4e & 1) + 1, local_48 < uVar14)) {
    local_44 = 8;
    goto LAB_14003fbb9;
  }
  *(uint *)(lVar5 + 0x90) = local_48;
  local_44 = FUN_140021063(plVar3,uVar14);
  if (local_44 != 0) goto LAB_14003fbb9;
  lVar11 = plVar3[7];
  lVar9 = FUN_14001f231(lVar4,4,0,local_50 + 1,0,&local_44);
  *(longlong *)(lVar5 + 0x88) = lVar9;
  if (local_44 == 0) {
    local_48 = local_48 + iVar7;
    if ((local_4e & 1) == 0) {
      if ((longlong)(ulonglong)((uint)local_50 * 2) <= plVar3[8] - plVar3[7]) {
        uVar14 = 0;
        uVar12 = 0xffffffffffffffff;
        do {
          *(uint *)(*(longlong *)(lVar5 + 0x88) + 4 + uVar12 * 4) =
               (uint)*(byte *)(lVar11 + 2 + uVar12 * 2) * 0x200 +
               (uint)*(byte *)(lVar11 + 3 + uVar12 * 2) * 2 + local_4c + iVar7;
          lVar9 = *(longlong *)(lVar5 + 0x88);
          uVar8 = *(uint *)(lVar9 + 4 + uVar12 * 4);
          uVar6 = uVar8;
          if (uVar8 < uVar14) {
            *(uint *)(lVar9 + 4 + uVar12 * 4) = uVar14;
            lVar9 = *(longlong *)(lVar5 + 0x88);
            uVar8 = *(uint *)(lVar9 + 4 + uVar12 * 4);
            uVar6 = uVar14;
          }
          uVar14 = uVar6;
          if (local_48 < uVar8) {
            *(uint *)(lVar9 + 4 + uVar12 * 4) = local_48;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < local_50);
LAB_14003fd4d:
        *(uint *)(lVar5 + 0x80) = (uint)local_50;
        FUN_140021187(plVar3);
        if (local_56 == 0) goto LAB_14003fbb9;
        uVar10 = FUN_140020a41((longlong)plVar3,iVar7 + local_54);
        local_44 = (int)uVar10;
        if ((local_44 == 0) &&
           (local_44 = FUN_140021063(plVar3,(uint)local_58 * (uint)local_56 * 2), local_44 == 0)) {
          pbVar15 = (byte *)plVar3[7];
          uVar14 = 0;
          lVar11 = FUN_14001f231(lVar4,4,0,(uint)local_56 * (uint)local_58,0,&local_44);
          *(longlong *)(lVar5 + 0x70) = lVar11;
          if (local_44 == 0) {
            if (local_56 != 0) {
              uVar8 = 0;
              lVar11 = 0;
              uVar13 = local_58;
              do {
                if (uVar13 == 0) {
                  uVar13 = 0;
                }
                else {
                  uVar14 = (uint)uVar13;
                  lVar9 = 0;
                  do {
                    bVar2 = *pbVar15;
                    pbVar1 = pbVar15 + 1;
                    pbVar15 = pbVar15 + 2;
                    *(uint *)(*(longlong *)(lVar5 + 0x70) + ((ulonglong)uVar14 * lVar11 + lVar9) * 4
                             ) = ((int)(short)((ushort)bVar2 << 8) | (uint)*pbVar1) << 2;
                    uVar14 = (uint)local_58;
                    lVar9 = lVar9 + 1;
                    uVar13 = local_58;
                  } while ((uint)lVar9 < uVar14);
                }
                uVar8 = uVar8 + 1;
                uVar14 = (uint)local_56;
                lVar11 = lVar11 + 1;
              } while (uVar8 < uVar14);
            }
            lVar11 = FUN_14001c617(lVar4,4,0,uVar14,0,&local_44);
            *(longlong *)(lVar5 + 0x78) = lVar11;
            if (local_44 == 0) {
              *(uint *)(lVar5 + 0x68) = (uint)local_56;
              FUN_140021187(plVar3);
              goto LAB_14003fbb9;
            }
          }
          goto LAB_14003fc3e;
        }
        goto LAB_14003fda1;
      }
    }
    else if ((longlong)((ulonglong)local_50 * 4) <= plVar3[8] - plVar3[7]) {
      uVar14 = 0;
      uVar12 = 0xffffffffffffffff;
      do {
        uVar8 = *(uint *)(lVar11 + 4 + uVar12 * 4);
        *(uint *)(*(longlong *)(lVar5 + 0x88) + 4 + uVar12 * 4) =
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) +
             local_4c + iVar7;
        lVar9 = *(longlong *)(lVar5 + 0x88);
        uVar8 = *(uint *)(lVar9 + 4 + uVar12 * 4);
        uVar6 = uVar8;
        if (uVar8 < uVar14) {
          *(uint *)(lVar9 + 4 + uVar12 * 4) = uVar14;
          lVar9 = *(longlong *)(lVar5 + 0x88);
          uVar8 = *(uint *)(lVar9 + 4 + uVar12 * 4);
          uVar6 = uVar14;
        }
        uVar14 = uVar6;
        if (local_48 < uVar8) {
          *(uint *)(lVar9 + 4 + uVar12 * 4) = local_48;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < local_50);
      goto LAB_14003fd4d;
    }
    local_44 = 8;
  }
  else {
LAB_14003fc3e:
    FUN_140021187(plVar3);
  }
LAB_14003fda1:
  FUN_14001c53d(lVar4,*(longlong *)(lVar5 + 0x88));
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined4 *)(lVar5 + 0x80) = 0;
LAB_14003fbb9:
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStackY_98);
  }
  return local_44;
}

