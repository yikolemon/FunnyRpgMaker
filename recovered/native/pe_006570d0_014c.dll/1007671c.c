/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007671c */

uint * __thiscall FUN_1007671c(int param_1,uint *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 **local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 **local_34;
  undefined4 **local_30;
  int local_2c;
  char *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_64;
  local_28 = param_3;
  local_18 = &LAB_100c2b70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_54 = 0;
  local_64 = (undefined4 ***)0x0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_50 = 0xf;
  local_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  uStack_38 = 0xf;
  local_14 = 1;
  if (*(char *)(param_1 + 0x48) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  local_24 = param_1;
  FUN_10003b26(8,0);
  local_2c = local_24 + 0x40;
  iVar4 = 0;
  pcVar1 = local_28;
  do {
    *(int *)(local_24 + 0x4c) = iVar4;
    if (pcVar1 == param_4) {
      *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_38,local_3c);
      *param_2 = local_4c;
      param_2[1] = uStack_48;
      param_2[2] = uStack_44;
      param_2[3] = uStack_40;
      local_3c = 0;
      uStack_38 = 0xf;
      local_4c = local_4c & 0xffffff00;
code_r0x100768b9:
      local_14 = 0xffffffff;
      FUN_10001fee();
      FUN_10001fee();
      *unaff_FS_OFFSET = local_1c;
      return param_2;
    }
    local_30 = &local_64;
    if (0xf < local_50) {
      local_30 = local_64;
    }
    uVar2 = (**(code **)(**(int **)(local_24 + 4) + 0x1c))
                      (local_2c,pcVar1,param_4,&param_3,local_30,local_54 + (int)local_30,&local_34)
    ;
    if (uVar2 < 2) {
      if (local_30 < local_34) {
        FUN_1000347e(local_30,(int)local_34 - (int)local_30);
      }
      else {
        if (0xf < local_54) {
          if (*(char *)(local_24 + 0x49) != '\x01') goto code_r0x100768f5;
          FUN_1000334a(local_24 + 0x10);
          goto code_r0x100768b9;
        }
        FUN_10003b26(8,0);
      }
    }
    else {
      if (uVar2 != 3) {
        if (*(char *)(local_24 + 0x49) != '\x01') {
          FUN_1007692a("bad conversion");
code_r0x100768f5:
          FUN_1007692a("bad conversion");
          puVar3 = (uint *)FUN_10001fee();
          return puVar3;
        }
        FUN_1000334a(local_24 + 0x10);
        goto code_r0x100768b9;
      }
      for (; param_3 != param_4; param_3 = param_3 + 2) {
        FUN_10003d9a((int)*param_3);
      }
    }
    iVar4 = (int)param_3 - (int)local_28 >> 1;
    pcVar1 = param_3;
  } while( true );
}

