/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00474eeb */

undefined4 __fastcall FUN_00474eeb(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_54 [4];
  int local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_54;
  puVar4 = *(undefined8 **)(param_2 + 4);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = puVar4 + *(ushort *)(param_2 + 2);
  }
  uVar2 = 0x62;
  if ((param_3[1] & 0x3fffe000U) == 0) {
    local_4c = 3;
    local_48 = &LAB_004752fc;
    local_38 = &local_24;
    local_34 = 0;
    local_30 = 0;
    local_2c = param_3[1] << 2;
    local_28 = *param_3 * 4;
    local_20 = param_3[2];
    local_24 = (*param_3 + -1) * local_20;
    if (local_20 < 0) {
      local_24 = 0;
    }
    local_24 = local_24 + param_3[3];
    puVar3 = puVar4;
    local_50 = param_2;
    if (puVar4 < puVar5) {
      do {
        *puVar3 = CONCAT44((int)((ulonglong)*puVar3 >> 0x20) << 2,(int)*puVar3 << 2);
        puVar3 = puVar3 + 1;
      } while (puVar3 < puVar5);
      uVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),auStack_54);
      do {
        iVar6 = (int)*puVar4;
        iVar1 = (int)((ulonglong)*puVar4 >> 0x20);
        *puVar4 = CONCAT44((int)(((uint)(iVar1 >> 0x1f) >> 0x1e) + iVar1) >> 2,
                           (int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2);
        puVar4 = puVar4 + 1;
      } while (puVar4 < puVar5);
    }
    else {
      uVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),auStack_54);
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_54)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_54);
  }
  return uVar2;
}

