/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041f5df */

int __cdecl FUN_0041f5df(ushort *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  byte *local_78;
  byte *local_74;
  uint local_70;
  int local_6c;
  undefined4 local_68;
  byte *pbStack_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_78;
  if (param_1 == (ushort *)0x0) {
LAB_0041f9dc:
    iVar6 = 0x14;
  }
  else if (param_2 == (undefined4 *)0x0) {
    iVar6 = 6;
  }
  else {
    if (*param_1 != 0) {
      local_68 = param_2[4];
      local_6c = param_2[5];
      uVar7 = 0;
      uVar4 = 0xffffffff;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      local_5c = local_68;
      local_4c = local_6c;
      iStack_48 = local_6c;
      iStack_44 = local_6c;
      iStack_40 = local_6c;
      do {
        uVar10 = (uint)*(ushort *)(*(int *)(param_1 + 6) + uVar7 * 2);
        if ((int)uVar10 <= (int)uVar4) goto LAB_0041f9dc;
        pbVar8 = (byte *)(*(int *)(param_1 + 2) + uVar4 * 8);
        local_74 = pbVar8 + 8;
        local_78 = (byte *)(*(int *)(param_1 + 2) + uVar10 * 8);
        local_1c = (*(int *)local_74 << ((byte)local_68 & 0x1f)) - local_6c;
        local_18 = (*(int *)(pbVar8 + 0xc) << ((byte)local_68 & 0x1f)) - local_6c;
        local_24 = CONCAT44(local_18,local_1c);
        iVar6 = *(int *)(param_1 + 4);
        bVar2 = *(byte *)(iVar6 + 1 + uVar4);
        local_70 = uVar10;
        local_60 = uVar7;
        if ((bVar2 & 3) == 0) {
          iVar9 = ((int)*(undefined8 *)local_78 << CONCAT44(uStack_58,local_5c)) - local_4c;
          iVar12 = ((int)((ulonglong)*(undefined8 *)local_78 >> 0x20) <<
                   CONCAT44(uStack_58,local_5c)) - iStack_48;
          local_24 = CONCAT44(iVar12,iVar9);
          if ((*(byte *)(iVar6 + uVar10) & 3) == 1) {
            local_78 = local_78 + -8;
          }
          else {
            local_24 = CONCAT44((iVar12 + local_18) / 2,(iVar9 + local_1c) / 2);
          }
          pbVar5 = (byte *)(iVar6 + uVar4);
        }
        else {
          if ((bVar2 & 3) == 2) goto LAB_0041f9dc;
          pbVar5 = (byte *)(iVar6 + uVar4 + 1);
          pbVar8 = local_74;
        }
        iVar6 = (*(code *)*param_2)(&local_24,param_3);
        if (iVar6 != 0) goto LAB_0041f9ec;
        bVar11 = pbVar8 < local_78;
        uVar4 = uVar10;
        while (bVar11) {
          pbVar1 = pbVar8 + 8;
          if ((pbVar5[1] & 3) == 0) {
            local_1c = (*(int *)(pbVar8 + 8) << ((byte)local_68 & 0x1f)) - local_6c;
            local_18 = (*(int *)(pbVar8 + 0xc) << ((byte)local_68 & 0x1f)) - local_6c;
            if (local_78 <= pbVar1) {
LAB_0041f98f:
              iVar6 = (*(code *)param_2[2])(&local_1c,&local_24,param_3);
              uVar4 = local_70;
              goto LAB_0041f972;
            }
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 0x10;
            while( true ) {
              iVar6 = (*(int *)pbVar8 << ((byte)local_68 & 0x1f)) - local_6c;
              iVar9 = (*(int *)(pbVar8 + 4) << ((byte)local_68 & 0x1f)) - local_6c;
              uStack_2c = CONCAT44(iVar9,iVar6);
              local_74 = pbVar5;
              pbStack_64 = pbVar8;
              if ((*pbVar5 & 3) != 0) break;
              uStack_34 = CONCAT44((local_18 + iVar9) / 2,(local_1c + iVar6) / 2);
              iVar6 = (*(code *)param_2[2])(&local_1c,&uStack_34,param_3);
              if (iVar6 != 0) goto LAB_0041f9ec;
              local_18 = uStack_2c._4_4_;
              local_1c = (int)uStack_2c;
              pbVar5 = local_74 + 1;
              pbVar8 = pbStack_64 + 8;
              if (local_78 <= pbStack_64) goto LAB_0041f98f;
            }
            if ((*pbVar5 & 3) != 1) goto LAB_0041f9dc;
            iVar6 = (*(code *)param_2[2])(&local_1c,&uStack_2c,param_3);
            pbVar8 = pbStack_64;
            uVar4 = local_70;
            pbVar5 = local_74;
            if (iVar6 != 0) goto LAB_0041f9ec;
          }
          else if ((pbVar5[1] & 3) == 1) {
            uStack_2c = CONCAT44(((int)((ulonglong)*(undefined8 *)pbVar1 >> 0x20) <<
                                 CONCAT44(uStack_58,local_5c)) - iStack_48,
                                 ((int)*(undefined8 *)pbVar1 << CONCAT44(uStack_58,local_5c)) -
                                 local_4c);
            iVar6 = (*(code *)param_2[1])(&uStack_2c,param_3);
            if (iVar6 != 0) goto LAB_0041f9ec;
            pbVar8 = pbVar1;
            pbVar5 = pbVar5 + 1;
          }
          else {
            if ((local_78 < pbVar8 + 0x10) || ((pbVar5[2] & 3) != 2)) goto LAB_0041f9dc;
            lVar3 = CONCAT44(uStack_58,local_5c);
            uStack_2c = CONCAT44(((int)((ulonglong)*(undefined8 *)(pbVar8 + 8) >> 0x20) << lVar3) -
                                 iStack_48,((int)*(undefined8 *)(pbVar8 + 8) << lVar3) - local_4c);
            pbVar1 = pbVar8 + 0x18;
            uStack_34 = CONCAT44(((int)((ulonglong)*(undefined8 *)(pbVar8 + 0x10) >> 0x20) << lVar3)
                                 - iStack_48,
                                 ((int)*(undefined8 *)(pbVar8 + 0x10) << lVar3) - local_4c);
            if (local_78 < pbVar1) {
              iVar6 = (*(code *)param_2[3])(&uStack_2c,&uStack_34,&local_24,param_3);
              goto LAB_0041f972;
            }
            uStack_3c = CONCAT44(((int)((ulonglong)*(undefined8 *)pbVar1 >> 0x20) << lVar3) -
                                 iStack_48,((int)*(undefined8 *)pbVar1 << lVar3) - local_4c);
            iVar6 = (*(code *)param_2[3])(&uStack_2c,&uStack_34,&uStack_3c,param_3);
            if (iVar6 != 0) goto LAB_0041f9ec;
            pbVar8 = pbVar1;
            pbVar5 = pbVar5 + 3;
          }
          bVar11 = pbVar8 < local_78;
        }
        iVar6 = (*(code *)param_2[1])(&local_24,param_3);
LAB_0041f972:
        if (iVar6 != 0) goto LAB_0041f9ec;
        uVar7 = local_60 + 1;
      } while (uVar7 < *param_1);
    }
    iVar6 = 0;
  }
LAB_0041f9ec:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_78);
  }
  return iVar6;
}

