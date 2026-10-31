/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bee2a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bee2a(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  ulonglong local_60;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar3 = (undefined4 *)FUN_101bd5e3();
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 4) {
    if (0 < *(int *)(param_1 + 0x48)) {
      FUN_101bf1c7();
      return;
    }
  }
  else if (iVar2 == 3) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      puVar4 = *(undefined4 **)(param_1 + 8);
      puVar7 = *(ushort **)(param_1 + 0x44);
      puVar5 = puVar7 + *(int *)(param_1 + 0x3c) * 4;
      do {
        uVar6 = (uint)*puVar7;
        uVar1 = puVar7[1];
        local_60 = (ulonglong)CONCAT24(uVar1,uVar6);
        local_58 = 0;
        iStack_54 = puVar7[2] + uVar6;
        iStack_50 = (uint)puVar7[3] + (uint)uVar1;
        uStack_4c = 1;
        (**(code **)(*(int *)puVar3[1] + 0xc0))
                  ((int *)puVar3[1],*puVar4,0,&local_60,
                   (*(int *)(param_1 + 0x1c) * (uint)uVar1 + uVar6) * *(int *)(param_1 + 0x24) +
                   *(int *)(param_1 + 0x28),*(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x1c),0);
        puVar7 = puVar7 + 4;
      } while (puVar7 != puVar5);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else if (iVar2 == 2) {
    uVar8 = *(undefined4 *)(param_1 + 0x28);
    puVar4 = (undefined4 *)FUN_100fa1fa(8,uVar8);
    puVar4[1] = 0;
    *puVar4 = 0;
    local_38 = 0;
    local_48 = 0;
    uStack_44 = 0;
    uStack_3c = 0;
    local_60 = *(ulonglong *)(param_1 + 0x1c);
    local_58 = _DAT_102bb410;
    iStack_54 = _UNK_102bb414;
    iStack_50 = _UNK_102bb418;
    uStack_4c = _UNK_102bb41c;
    uStack_40 = 8;
    local_30 = *(int *)(param_1 + 0x1c) << 2;
    local_2c = 0;
    local_34 = uVar8;
    (**(code **)(*(int *)*puVar3 + 0x14))((int *)*puVar3,&local_60,&local_34,puVar4);
    uStack_24 = 0;
    uStack_28 = 0;
    local_38 = 0x1c;
    local_34 = 4;
    local_2c = local_58;
    local_30 = 0;
    (**(code **)(*(int *)*puVar3 + 0x1c))((int *)*puVar3,*puVar4,&local_38,puVar4 + 1);
    iVar2 = puVar4[1];
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(param_1 + 0x14) = iVar2 >> 0x1f;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 **)(param_1 + 8) = puVar4;
  }
  return;
}

