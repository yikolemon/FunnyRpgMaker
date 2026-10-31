/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006af49 */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_1006af49(undefined4 param_1,undefined4 param_2)

{
  int **ppiVar1;
  undefined1 *puVar2;
  int *unaff_FS_OFFSET;
  int *local_90;
  undefined1 local_8c [12];
  undefined4 uStack_80;
  int **ppiStack_7c;
  int **ppiStack_78;
  int **local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  int **local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined1 *local_3c;
  undefined1 *local_38;
  int *local_34;
  undefined4 uStack_30;
  int *local_2c;
  int **local_28;
  int **local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_74;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1b40;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  uStack_80 = 0x1006af82;
  ppiStack_7c = (int **)local_74;
  ppiStack_78 = (int **)param_2;
  FUN_100c5628();
  local_14 = 0;
  local_54 = (int **)local_74;
  if (0xf < local_60) {
    local_54 = local_74[0];
  }
  uStack_50 = local_64;
  ppiStack_78 = (int **)0x1006afa9;
  FUN_100a9226();
  if (local_58 != 0) {
    local_54 = (int **)0x0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_44 = 0;
    local_14 = 0;
    local_28 = (int **)&local_54;
    ppiStack_78 = (int **)local_58;
    ppiStack_7c = (int **)local_5c;
    uStack_80 = 0x1006afda;
    FUN_1000254c();
    local_14 = 1;
    ppiStack_78 = (int **)&local_54;
    ppiStack_7c = (int **)0x1006affa;
    local_24 = (int **)FUN_100a9370();
    if ((int **)local_24[4] == (int **)0x0) {
      ppiStack_78 = (int **)&local_54;
      if (local_24 != ppiStack_78) {
        if (0xf < local_44._4_4_) {
          local_28 = local_54;
        }
        ppiStack_78 = (int **)(undefined4)local_44;
        ppiStack_7c = local_28;
        uStack_80 = 0x1006b02f;
        ppiStack_78 = (int **)FUN_100180a6();
      }
      local_20 = (undefined1 *)&local_90;
      local_28 = &local_90;
      local_38 = local_8c;
      local_3c = (undefined1 *)local_74;
      FUN_1000334a(&local_54);
      *local_28 = (int *)&local_34;
      local_14 = 1;
      FUN_100a9400();
      ppiVar1 = local_24;
      puVar2 = local_3c;
      local_20 = local_3c;
      local_14 = 2;
      if (local_24 + 6 != &local_34) {
        *(undefined4 *)(local_3c + -4) = 0x1006b093;
        FUN_10060b3c();
        *(ulonglong *)(ppiVar1 + 6) = CONCAT44(uStack_30,local_34);
        ppiVar1[8] = local_2c;
        local_34 = (int *)0x0;
        uStack_30 = 0;
        local_2c = (int *)0x0;
      }
      local_14 = 0xffffffff;
      *(undefined4 *)(puVar2 + -4) = 0x1006b0be;
      FUN_10060b3c();
      ppiVar1 = (int **)local_24[6];
      local_14 = 1;
      *(int *)(puVar2 + -4) = ((int)local_24[7] - (int)ppiVar1 >> 3) * -0x55555555;
      *(int ***)(puVar2 + -8) = ppiVar1;
      *(undefined4 *)(puVar2 + -0xc) = 0x1006b0e5;
      FUN_100ab26e();
    }
    local_14 = 0xffffffff;
    ppiStack_78 = (int **)0x1006b0f5;
    FUN_10001fee();
  }
  local_14 = 0xffffffff;
  ppiStack_78 = (int **)0x1006b105;
  FUN_10001fee();
  *unaff_FS_OFFSET = local_1c;
  return;
}

