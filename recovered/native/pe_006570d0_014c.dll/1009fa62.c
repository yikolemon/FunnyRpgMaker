/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009fa62 */

void __thiscall FUN_1009fa62(int param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 local_48 [6];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_48;
  local_18 = &LAB_100c3f20;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(int **)(param_1 + 0x30) = param_3;
  iVar3 = *param_4;
  if (iVar3 != 0) {
    puVar4 = (uint *)(*param_3 + 0x50);
    iVar5 = 0;
    iVar7 = 0;
    do {
      local_28 = iVar7;
      iVar6 = iVar5;
      uVar1 = *puVar4;
      iVar5 = iVar6 + (uint)(uVar1 < 2000);
      iVar7 = (local_28 + 1) - (uint)(uVar1 < 2000);
      puVar4 = puVar4 + 0x15;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_24 = param_1;
    if (iVar5 != 0) {
      local_30 = param_2 + 0x10;
      local_2c = param_1 + 0x18;
      iVar6 = iVar6 + (uint)(uVar1 < 2000);
      local_14 = 0xffffffff;
      local_20 = (undefined1 *)local_48;
      do {
        local_48[0] = FUN_10077b66();
        puVar2 = *(undefined4 **)(local_24 + 0x1c);
        if (puVar2 == *(undefined4 **)(local_24 + 0x20)) {
          FUN_10051662(puVar2,local_48);
        }
        else {
          *puVar2 = local_48[0];
          *(int *)(local_24 + 0x1c) = *(int *)(local_24 + 0x1c) + 4;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (iVar7 != 0) {
      local_24 = local_24 + 0x24;
      local_28 = (local_28 + 1) - (uint)(uVar1 < 2000);
      local_14 = 0xffffffff;
      do {
        FUN_1008a8f0(local_48);
        local_14 = 0;
        FUN_1008b09c(local_48);
        local_14 = 0xffffffff;
        FUN_10001134();
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

