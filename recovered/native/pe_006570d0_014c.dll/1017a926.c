/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017a926 */

undefined4 * __thiscall FUN_1017a926(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 *local_30;
  int local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10180320;
  local_1c = ExceptionList;
  iVar4 = *param_1;
  local_38 = (param_1[1] - iVar4 >> 3) + 1;
  uVar1 = param_1[2] - iVar4 >> 3;
  uVar2 = (uVar1 >> 1) + uVar1;
  if (uVar2 <= local_38) {
    uVar2 = local_38;
  }
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    uVar2 = 0x1fffffff;
  }
  ExceptionList = &local_1c;
  if (0x1fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  iVar4 = (int)param_2 - iVar4;
  local_20 = (undefined1 *)&local_4c;
  local_24 = (undefined4 *)FUN_10001426(uVar2 * 8);
  local_3c = (int)local_24 + iVar4 + 8;
  local_30 = (undefined4 *)(iVar4 + (int)local_24);
  *local_30 = 0;
  local_30[1] = 0;
  *local_30 = *param_3;
  local_30[1] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puVar6 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  if (param_2 == puVar3) {
    local_40 = local_30;
    if (puVar6 != param_2) {
      iVar4 = 0;
      do {
        *(undefined4 *)((int)local_24 + iVar4) = 0;
        *(undefined4 *)((int)local_24 + iVar4 + 4) = 0;
        puVar3 = (undefined4 *)((int)puVar6 + iVar4);
        *(undefined4 *)((int)local_24 + iVar4) = *puVar3;
        *(undefined4 *)((int)local_24 + iVar4 + 4) = puVar3[1];
        *puVar3 = 0;
        puVar3[1] = 0;
        iVar4 = iVar4 + 8;
      } while (puVar3 + 2 != param_2);
    }
  }
  else {
    if (puVar6 != param_2) {
      iVar5 = 0;
      do {
        *(undefined4 *)((int)local_24 + iVar5) = 0;
        *(undefined4 *)((int)local_24 + iVar5 + 4) = 0;
        puVar3 = (undefined4 *)((int)puVar6 + iVar5);
        *(undefined4 *)((int)local_24 + iVar5) = *puVar3;
        *(undefined4 *)((int)local_24 + iVar5 + 4) = puVar3[1];
        *puVar3 = 0;
        puVar3[1] = 0;
        iVar5 = iVar5 + 8;
      } while (puVar3 + 2 != param_2);
      puVar3 = (undefined4 *)param_1[1];
    }
    local_40 = local_24;
    if (param_2 != puVar3) {
      iVar5 = 0;
      do {
        *(undefined4 *)(local_3c + iVar5) = 0;
        *(undefined4 *)((int)local_24 + iVar5 + iVar4 + 0xc) = 0;
        puVar6 = (undefined4 *)((int)param_2 + iVar5);
        *(undefined4 *)(local_3c + iVar5) = *puVar6;
        *(undefined4 *)((int)local_24 + iVar5 + iVar4 + 0xc) = puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        iVar5 = iVar5 + 8;
      } while (puVar6 + 2 != puVar3);
    }
  }
  local_14 = 0xffffffff;
  local_48 = 0;
  local_4c = param_1;
  local_44 = uVar2;
  local_34 = uVar2;
  local_2c = local_3c;
  local_28 = param_1;
  FUN_1009b1a2(local_24,local_38,uVar2);
  puVar6 = local_30;
  local_14 = 0xffffffff;
  FUN_1009b20e();
  ExceptionList = local_1c;
  return puVar6;
}

