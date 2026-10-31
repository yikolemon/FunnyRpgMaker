/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400562ae */

ulonglong FUN_1400562ae(uint *param_1,longlong *param_2,uint param_3,uint param_4,char param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 extraout_var;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  undefined1 auStack_68 [40];
  ushort *local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  uVar8 = FUN_140020a41((longlong)param_2,param_4);
  local_34 = (uint)uVar8;
  if (local_34 != 0) goto LAB_1400565bf;
  uVar6 = FUN_140020aa5(param_2,&local_34);
  uVar8 = (ulonglong)local_34;
  if ((local_34 != 0) || (uVar8 = 6, uVar6 <= param_3)) goto LAB_1400565bf;
  uVar8 = FUN_140020a93((longlong)param_2,param_3 * 5);
  local_34 = (uint)uVar8;
  if (local_34 != 0) goto LAB_1400565bf;
  uVar6 = FUN_140020aa5(param_2,&local_34);
  uVar8 = (ulonglong)local_34;
  if (local_34 != 0) goto LAB_1400565bf;
  uVar7 = FUN_140021376(param_2,&local_34);
  uVar8 = (ulonglong)local_34;
  if (local_34 != 0) goto LAB_1400565bf;
  *param_1 = (uint)uVar6;
  param_1[1] = uVar7;
  uVar8 = FUN_140020a41((longlong)param_2,uVar7);
  local_34 = (uint)uVar8;
  if (local_34 != 0) goto LAB_1400565bf;
  local_34 = FUN_140021063(param_2,(uint)uVar6);
  uVar8 = CONCAT44(extraout_var,local_34);
  if (local_34 != 0) goto LAB_1400565bf;
  if (uVar6 < 0xd) {
LAB_1400565ab:
    local_34 = 8;
    puVar2 = local_40;
  }
  else {
    pbVar4 = (byte *)param_2[7];
    param_1[2] = (int)((uint)pbVar4[2] << 8 | (uint)pbVar4[1] << 0x10 | (uint)*pbVar4 << 0x18) >> 8;
    param_1[3] = (int)((uint)pbVar4[5] << 8 | (uint)pbVar4[4] << 0x10 | (uint)pbVar4[3] << 0x18) >>
                 8;
    param_1[4] = (int)((uint)pbVar4[8] << 8 | (uint)pbVar4[7] << 0x10 | (uint)pbVar4[6] << 0x18) >>
                 8;
    param_1[5] = (int)((uint)pbVar4[0xb] << 8 | (uint)pbVar4[10] << 0x10 | (uint)pbVar4[9] << 0x18)
                 >> 8;
    local_40 = (ushort *)(pbVar4 + 0xd);
    bVar3 = pbVar4[0xc];
    uVar7 = 0;
    if ((bVar3 & 4) != 0) {
      uVar11 = (uint)((bVar3 & 8) == 0);
      uVar7 = uVar11 ^ 5;
      if ((bVar3 & 3) != 0) {
        uVar7 = 2 - uVar11;
      }
    }
    if ((ulonglong)uVar6 <
        (ulonglong)((2 - ((bVar3 & 0x20) == 0) & (int)((uint)bVar3 << 0x1b) >> 0x1f) + uVar7) + 0xd)
    goto LAB_1400565ab;
    if ((bVar3 & 4) != 0) {
      uVar7 = (uint)(byte)*local_40;
      if ((bVar3 & 8) == 0) {
        puVar10 = (ushort *)(pbVar4 + 0xe);
      }
      else {
        puVar10 = (ushort *)(pbVar4 + 0xf);
        uVar7 = (int)(short)((ushort)(byte)*local_40 << 8) | (uint)pbVar4[0xe];
      }
      param_1[7] = uVar7;
      local_40 = puVar10;
      if ((bVar3 & 3) == 0) {
        local_40 = (ushort *)((longlong)puVar10 + 3);
        param_1[9] = (int)((uint)(byte)puVar10[1] << 8 |
                          (uint)*(byte *)((longlong)puVar10 + 1) << 0x10 |
                          (uint)(byte)*puVar10 << 0x18) >> 8;
      }
    }
    if ((bVar3 & 0x10) != 0) {
      uVar5 = *local_40;
      uVar7 = (uint)(byte)uVar5;
      if ((bVar3 & 0x20) == 0) {
        local_40 = (ushort *)((longlong)local_40 + 1);
      }
      else {
        pbVar1 = (byte *)((longlong)local_40 + 1);
        local_40 = local_40 + 1;
        uVar7 = (int)(short)((ushort)(byte)uVar5 << 8) | (uint)*pbVar1;
      }
      param_1[8] = uVar7;
    }
    puVar10 = (ushort *)(pbVar4 + uVar6);
    if (((bVar3 & 0x40) == 0) ||
       (local_34 = FUN_140056bad((ulonglong *)&local_40,(byte *)puVar10), puVar2 = local_40,
       local_34 == 0)) {
      puVar2 = (ushort *)((longlong)local_40 + 5);
      if (puVar10 < puVar2) goto LAB_1400565ab;
      uVar6 = *local_40 << 8 | *local_40 >> 8;
      param_1[10] = (uint)uVar6;
      param_1[0xb] = (uint)(byte)local_40[2] |
                     (uint)*(byte *)((longlong)local_40 + 3) << 8 | (uint)(byte)local_40[1] << 0x10;
      if (param_5 != '\0') {
        puVar9 = local_40 + 3;
        local_40 = puVar2;
        if (puVar10 < puVar9) goto LAB_1400565ab;
        param_1[10] = (uint)CONCAT12(*(byte *)puVar2,uVar6);
        puVar2 = puVar9;
      }
    }
  }
  local_40 = puVar2;
  FUN_140021187(param_2);
  uVar8 = (ulonglong)local_34;
LAB_1400565bf:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_68);
  }
  return uVar8;
}

