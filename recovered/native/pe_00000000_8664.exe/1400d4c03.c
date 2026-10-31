/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d4c03 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d4c03(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  ulonglong local_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  puVar6 = (undefined8 *)FUN_1400d30d4();
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 4) {
    if (0 < *(int *)(param_1 + 0x50)) {
      FUN_1400d509e(param_1);
      return;
    }
  }
  else if (iVar4 == 3) {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 8);
      puVar8 = *(ushort **)(param_1 + 0x48);
      puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x40) * 4;
      do {
        uVar2 = *puVar8;
        uVar3 = puVar8[1];
        local_90 = (ulonglong)CONCAT24(uVar3,(uint)uVar2);
        local_88 = 0;
        iStack_84 = (uint)puVar8[2] + (uint)uVar2;
        iStack_80 = (uint)puVar8[3] + (uint)uVar3;
        uStack_7c = 1;
        (**(code **)(*(longlong *)puVar6[1] + 0x180))
                  ((longlong *)puVar6[1],*puVar7,0,&local_90,
                   (longlong)
                   (int)((*(int *)(param_1 + 0x1c) * (uint)uVar3 + (uint)uVar2) *
                        *(int *)(param_1 + 0x24)) + *(longlong *)(param_1 + 0x28),
                   *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x1c),0);
        puVar8 = puVar8 + 4;
      } while (puVar8 != puVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else if (iVar4 == 2) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar7 = (undefined8 *)FUN_140077ab4(0x10);
    *puVar7 = 0;
    puVar7[1] = 0;
    local_68 = 0;
    local_78 = 0;
    local_90 = *(ulonglong *)(param_1 + 0x1c);
    local_88 = _DAT_140e82290;
    iStack_84 = _UNK_140e82294;
    iStack_80 = _UNK_140e82298;
    uStack_7c = _UNK_140e8229c;
    uStack_70 = 8;
    local_58 = *(int *)(param_1 + 0x1c) << 2;
    local_54 = 0;
    local_60 = uVar5;
    (**(code **)(*(longlong *)*puVar6 + 0x28))((longlong *)*puVar6,&local_90,&local_60,puVar7);
    local_40 = 0;
    local_50 = 0x40000001c;
    local_44 = local_88;
    local_48 = 0;
    (**(code **)(*(longlong *)*puVar6 + 0x38))((longlong *)*puVar6,*puVar7,&local_50,puVar7 + 1);
    *(undefined8 *)(param_1 + 0x10) = puVar7[1];
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined8 **)(param_1 + 8) = puVar7;
  }
  return;
}

