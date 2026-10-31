/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002fa4c */

void __fastcall FUN_1002fa4c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 *local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined1 local_cc [132];
  int local_48;
  uint local_44;
  uint local_40;
  undefined1 *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_dc;
  local_14 = 0xffffffff;
  local_18 = &LAB_100599e0;
  local_1c = ExceptionList;
  local_28 = param_1[1];
  local_dc = (undefined1 *)0x0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = FUN_1002f980;
  ExceptionList = &local_1c;
  FUN_1002fcc0(param_1);
  local_14 = 0;
  local_40 = local_28 * 2;
  uVar4 = param_1[2];
  local_24 = param_1;
  if (uVar4 < local_40) {
    (*(code *)param_1[3])(param_1,local_40);
    uVar4 = local_24[2];
  }
  if (local_40 < uVar4) {
    uVar4 = local_40;
  }
  local_24[1] = uVar4;
  if ((int)local_28 < 1) {
    uVar1 = 0;
    uVar4 = 0;
    uVar7 = 0;
  }
  else {
    uVar4 = 0;
    local_3c = (undefined1 *)0x1;
    local_38 = 0;
    local_30 = 0;
    uVar1 = 0;
    uVar2 = 0;
    do {
      local_44 = uVar2;
      puVar3 = (uint *)(local_dc + local_44);
      puVar6 = (undefined1 *)0x0;
      uVar2 = 0;
      uVar8 = uVar4;
      local_34 = uVar1;
      do {
        uVar5 = (uint)((ulonglong)*puVar3 * (ulonglong)*(uint *)(local_dc + (int)puVar6 * 4) >> 0x20
                      );
        uVar4 = (uint)((ulonglong)*puVar3 * (ulonglong)*(uint *)(local_dc + (int)puVar6 * 4));
        bVar9 = CARRY4(uVar8,uVar4);
        uVar8 = uVar8 + uVar4;
        uVar7 = (uint)bVar9;
        uVar1 = local_30 + uVar5;
        uVar4 = uVar1 + uVar7;
        uVar1 = (uint)(CARRY4(local_30,uVar5) || CARRY4(uVar1,uVar7));
        uVar7 = local_34 + uVar1;
        uVar1 = uVar2 + CARRY4(local_34,uVar1);
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + -1;
        uVar2 = uVar1;
        local_34 = uVar7;
        local_30 = uVar4;
      } while (local_3c != puVar6);
      *(uint *)(*local_24 + local_38 * 4) = uVar8;
      local_38 = local_38 + 1;
      local_3c = local_3c + 1;
      uVar2 = local_44 + 4;
      local_30 = uVar7;
    } while (local_38 != local_28);
  }
  if ((int)local_28 < (int)local_40) {
    local_48 = local_28 - 1;
    local_34 = 1;
    uVar2 = local_28;
    uVar8 = 4;
    do {
      local_38 = uVar8;
      local_44 = uVar2;
      local_2c = 0;
      uVar2 = uVar4;
      local_30 = uVar1;
      if ((int)(local_44 - local_48) < (int)local_28) {
        local_3c = local_dc;
        puVar3 = (uint *)(local_dc + local_38);
        uVar1 = local_28;
        do {
          uVar8 = (uint)((ulonglong)*(uint *)(local_dc + uVar1 * 4 + -4) * (ulonglong)*puVar3 >>
                        0x20);
          uVar2 = (uint)((ulonglong)*(uint *)(local_dc + uVar1 * 4 + -4) * (ulonglong)*puVar3);
          bVar9 = CARRY4(uVar4,uVar2);
          uVar4 = uVar4 + uVar2;
          uVar2 = (uint)bVar9;
          bVar9 = CARRY4(uVar7,uVar8);
          uVar8 = uVar7 + uVar8;
          uVar7 = uVar8 + uVar2;
          uVar2 = (uint)(bVar9 || CARRY4(uVar8,uVar2));
          bVar9 = CARRY4(local_30,uVar2);
          local_30 = local_30 + uVar2;
          local_2c = local_2c + bVar9;
          uVar1 = uVar1 - 1;
          puVar3 = puVar3 + 1;
          uVar2 = uVar4;
        } while (local_34 != uVar1);
      }
      uVar4 = uVar7;
      *(uint *)(*local_24 + local_44 * 4) = uVar2;
      local_34 = local_34 + 1;
      uVar2 = local_44 + 1;
      uVar1 = local_2c;
      uVar7 = local_30;
      uVar8 = local_38 + 4;
    } while (local_44 + 1 != local_40);
  }
  local_2c = 0;
  local_14 = 0;
  FUN_1002fc7e();
  local_24[0x25] = local_24[0x25] << 1;
  local_14 = 0xffffffff;
  if (local_dc != local_cc) {
    thunk_FUN_10274120(local_dc);
  }
  ExceptionList = local_1c;
  return;
}

