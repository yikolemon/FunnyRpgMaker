/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009af8c */

undefined4 * __thiscall FUN_1009af8c(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3d00;
  local_1c = ExceptionList;
  iVar6 = *param_1;
  local_38 = (param_1[1] - iVar6 >> 3) + 1;
  uVar2 = param_1[2] - iVar6 >> 3;
  uVar3 = (uVar2 >> 1) + uVar2;
  if (uVar3 <= local_38) {
    uVar3 = local_38;
  }
  if (0x1fffffff - (uVar2 >> 1) < uVar2) {
    uVar3 = 0x1fffffff;
  }
  ExceptionList = &local_1c;
  if (0x1fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  iVar6 = (int)param_2 - iVar6;
  local_20 = (undefined1 *)&local_4c;
  local_24 = (undefined4 *)FUN_10001426(uVar3 * 8);
  local_3c = (int)local_24 + iVar6 + 8;
  local_2c = (undefined4 *)(iVar6 + (int)local_24);
  *local_2c = 0;
  local_2c[1] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *local_2c = *param_3;
  local_2c[1] = param_3[1];
  puVar7 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  if (param_2 == puVar4) {
    local_40 = local_2c;
    if (puVar7 != param_2) {
      iVar6 = 0;
      do {
        *(undefined4 *)((int)local_24 + iVar6) = 0;
        *(undefined4 *)((int)local_24 + iVar6 + 4) = 0;
        puVar4 = (undefined4 *)((int)puVar7 + iVar6);
        *(undefined4 *)((int)local_24 + iVar6) = *puVar4;
        *(undefined4 *)((int)local_24 + iVar6 + 4) = puVar4[1];
        *puVar4 = 0;
        puVar4[1] = 0;
        iVar6 = iVar6 + 8;
      } while (puVar4 + 2 != param_2);
    }
  }
  else {
    if (puVar7 != param_2) {
      iVar5 = 0;
      do {
        *(undefined4 *)((int)local_24 + iVar5) = 0;
        *(undefined4 *)((int)local_24 + iVar5 + 4) = 0;
        puVar4 = (undefined4 *)((int)puVar7 + iVar5);
        *(undefined4 *)((int)local_24 + iVar5) = *puVar4;
        *(undefined4 *)((int)local_24 + iVar5 + 4) = puVar4[1];
        *puVar4 = 0;
        puVar4[1] = 0;
        iVar5 = iVar5 + 8;
      } while (puVar4 + 2 != param_2);
      puVar4 = (undefined4 *)param_1[1];
      local_30 = local_3c;
    }
    local_40 = local_24;
    if (param_2 != puVar4) {
      iVar5 = 0;
      do {
        *(undefined4 *)(local_3c + iVar5) = 0;
        *(undefined4 *)((int)local_24 + iVar5 + iVar6 + 0xc) = 0;
        puVar7 = (undefined4 *)((int)param_2 + iVar5);
        *(undefined4 *)(local_3c + iVar5) = *puVar7;
        *(undefined4 *)((int)local_24 + iVar5 + iVar6 + 0xc) = puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        iVar5 = iVar5 + 8;
      } while (puVar7 + 2 != puVar4);
    }
  }
  local_14 = 0xffffffff;
  local_48 = 0;
  local_4c = param_1;
  local_44 = uVar3;
  local_34 = uVar3;
  local_28 = param_1;
  FUN_1009b1a2(local_24,local_38,uVar3);
  puVar7 = local_2c;
  local_14 = 0xffffffff;
  FUN_1009b20e();
  ExceptionList = local_1c;
  return puVar7;
}

