/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10064946 */

undefined4 * FUN_10064946(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int local_48;
  int *local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_48;
  local_18 = &LAB_100c2180;
  local_1c = ExceptionList;
  local_34 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_10066658();
  local_24 = (int *)0x0;
  while (local_24 < (int *)param_2[4]) {
    puVar1 = param_2;
    if (3 < (uint)param_2[5]) {
      puVar1 = (undefined4 *)*param_2;
    }
    if (puVar1[(int)local_24] == 10) {
      local_14 = 0;
      FUN_1006695c(&DAT_1035a7a8,1);
      local_24 = (int *)((int)local_24 + 1);
      FUN_10066658();
    }
    else if (puVar1[(int)local_24] == 0xd) {
      local_28 = (int *)((int)local_24 + 1);
      if ((local_28 < (int *)param_2[4]) && (local_14 = 0, puVar1[(int)local_24 + 1] == 10)) {
        FUN_1006695c(&DAT_1035a7a4,2);
        local_28 = (int *)((int)local_24 + 2);
      }
      else {
        local_14 = 0;
        FUN_1006695c(&DAT_1035a79c,1);
      }
      FUN_10066658();
      local_24 = local_28;
    }
    else {
      local_30[-7] = local_30[-7] + 1;
      local_24 = (int *)((int)local_24 + 1);
    }
  }
  if (local_34 != local_30) {
    if (((local_30[-7] == 0) && (local_30[-2] == 0)) &&
       (1 < (uint)(((int)local_30 - (int)local_34 >> 2) * -0x49249249))) {
      FUN_10061f68(local_30 + -7);
      local_30 = local_30 + -7;
    }
    if (local_34 != local_30) {
      uVar5 = 0;
      piVar3 = local_34;
      do {
        uVar5 = uVar5 + *piVar3;
        piVar3 = piVar3 + 7;
      } while (piVar3 != local_30);
      if (uVar5 != 0) {
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 3;
        *param_1 = 0;
        local_14 = 2;
        local_38 = uVar5 >> 1;
        local_28 = (int *)0x0;
        local_24 = (int *)0x0;
        iVar4 = 0;
        local_3c = uVar5;
        while (piVar3 = (int *)(((int)local_30 - (int)local_34 >> 2) * -0x49249249),
              local_24 < piVar3) {
          local_40 = (int)local_24 * 0x1c;
          local_48 = iVar4 + local_34[(int)local_24 * 7];
          local_24 = (int *)((int)local_24 + 1);
          local_44 = (int *)param_3[4];
          if (local_24 != piVar3) {
            local_44 = (int *)(((int)local_44 * local_48 + local_38) / local_3c);
          }
          puVar1 = param_3;
          if (3 < (uint)param_3[5]) {
            puVar1 = (undefined4 *)*param_3;
          }
          FUN_10063a48(puVar1 + (int)local_28,(int)local_44 - (int)local_28);
          if (*(uint *)((int)local_34 + local_40 + 0x18) < 4) {
            iVar4 = (int)local_34 + local_40 + 4;
          }
          else {
            iVar4 = *(int *)((int)local_34 + local_40 + 4);
          }
          FUN_10063a48(iVar4,*(undefined4 *)((int)local_34 + local_40 + 0x14));
          local_28 = local_44;
          iVar4 = local_48;
        }
        goto LAB_10064c06;
      }
    }
  }
  local_14 = 0;
  FUN_10063788(param_3);
  local_14 = 1;
  local_28 = local_30;
  piVar3 = local_34;
  while (piVar3 != local_28) {
    if ((uint)piVar3[6] < 4) {
      piVar2 = piVar3 + 1;
    }
    else {
      piVar2 = (int *)piVar3[1];
    }
    local_24 = piVar3;
    FUN_10063a48(piVar2,piVar3[5]);
    piVar3 = local_24 + 7;
  }
LAB_10064c06:
  local_14 = 0xffffffff;
  FUN_10061f0c();
  ExceptionList = local_1c;
  return param_1;
}

