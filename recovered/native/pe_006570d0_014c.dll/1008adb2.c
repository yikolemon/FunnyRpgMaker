/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008adb2 */

uint * __thiscall FUN_1008adb2(int param_1,uint *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
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
  undefined1 *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_64;
  local_28 = param_3;
  local_18 = &LAB_100c35a0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_54 = 0;
  local_64 = (undefined4 ***)0x0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_50 = 7;
  local_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  uStack_38 = 7;
  local_14 = 1;
  if (*(char *)(param_1 + 0x48) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  local_24 = param_1;
  FUN_10004c70(8,0);
  local_2c = local_24 + 0x40;
  iVar4 = 0;
  puVar1 = local_28;
  do {
    *(int *)(local_24 + 0x4c) = iVar4;
    if (puVar1 == param_4) {
      *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_38,local_3c);
      *param_2 = local_4c;
      param_2[1] = uStack_48;
      param_2[2] = uStack_44;
      param_2[3] = uStack_40;
      local_3c = 0;
      uStack_38 = 7;
      local_4c = local_4c & 0xffff0000;
code_r0x1008af50:
      local_14 = 0xffffffff;
      FUN_10001134();
      FUN_10001134();
      *unaff_FS_OFFSET = local_1c;
      return param_2;
    }
    local_30 = &local_64;
    if (7 < local_50) {
      local_30 = local_64;
    }
    uVar2 = (**(code **)(**(int **)(local_24 + 4) + 0x18))
                      (local_2c,puVar1,param_4,&param_3,local_30,(int)local_30 + local_54 * 2,
                       &local_34);
    if (uVar2 < 2) {
      if (local_30 < local_34) {
        FUN_100048de(local_30,(int)local_34 - (int)local_30 >> 1);
      }
      else {
        if (0xf < local_54) {
          if (*(char *)(local_24 + 0x4a) != '\x01') goto code_r0x1008af8c;
          FUN_10003728(local_24 + 0x28);
          goto code_r0x1008af50;
        }
        FUN_10004c70(8,0);
      }
    }
    else {
      if (uVar2 != 3) {
        if (*(char *)(local_24 + 0x4a) != '\x01') {
          FUN_1007692a("bad conversion");
code_r0x1008af8c:
          FUN_1007692a("bad conversion");
          puVar3 = (uint *)FUN_10001134();
          return puVar3;
        }
        FUN_10003728(local_24 + 0x28);
        goto code_r0x1008af50;
      }
      for (; param_3 != param_4; param_3 = param_3 + 1) {
        FUN_100045e8(*param_3);
      }
    }
    iVar4 = (int)param_3 - (int)local_28;
    puVar1 = param_3;
  } while( true );
}

