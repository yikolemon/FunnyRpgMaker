/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10031e2c */

undefined4
FUN_10031e2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int param_6,char param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int *unaff_FS_OFFSET;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_250;
  int local_24c;
  undefined4 local_248;
  code *local_244;
  undefined1 local_240 [504];
  undefined1 local_48 [24];
  undefined1 local_30 [4];
  undefined1 *local_2c;
  uint local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  uVar5 = CONCAT44(param_4,param_3);
  local_20 = (undefined1 *)&local_250;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059a70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*(int *)(param_8 + 0x28) == 0) {
    if (param_7 == '\0') {
      FUN_100255fd(&local_250,param_3,param_4,param_5);
      puVar3 = (undefined1 *)((int)&local_250 + param_5);
    }
    else {
      local_24 = (undefined1 *)((int)&local_250 + param_5 + 1);
      local_28 = param_5 - param_6;
      puVar4 = local_24;
      local_20 = (undefined1 *)&local_250;
      if (1 < (int)local_28) {
        uVar2 = (local_28 >> 1) + 1;
        puVar3 = local_24;
        local_20 = (undefined1 *)&local_250;
        do {
          iVar1 = (int)uVar5;
          local_2c = puVar3 + -2;
          uVar5 = __aulldiv(uVar5,100,0);
          *(undefined2 *)(puVar3 + -2) =
               *(undefined2 *)(&DAT_102903d0 + ((int)uVar5 * -100 + iVar1) * 2);
          uVar2 = uVar2 - 1;
          puVar4 = local_2c;
          puVar3 = local_2c;
        } while (1 < uVar2);
      }
      uVar6 = uVar5;
      if ((local_28 & 1) != 0) {
        uVar6 = __aulldiv(uVar5,10,0);
        puVar4[-1] = (char)uVar6 * -10 + (char)uVar5 | 0x30;
        puVar4 = puVar4 + -1;
      }
      puVar3 = local_24;
      puVar4[-1] = param_7;
      local_14 = 0xffffffff;
      FUN_100255fd(puVar4 + (-1 - param_6),uVar6,param_6);
    }
    FUN_100253ad(param_1,&local_250,puVar3,param_2);
  }
  else {
    local_250 = local_240;
    local_24c = 0;
    local_244 = FUN_1002747c;
    local_248 = 500;
    local_14 = 0;
    if (param_7 == '\0') {
      local_20 = (undefined1 *)&local_250;
      FUN_100255fd(local_48,param_3,param_4,param_5);
      puVar3 = local_48 + param_5;
    }
    else {
      local_24 = local_48 + param_5 + 1;
      local_28 = param_5 - param_6;
      puVar3 = local_24;
      local_20 = (undefined1 *)&local_250;
      if (1 < (int)local_28) {
        uVar2 = (local_28 >> 1) + 1;
        local_20 = (undefined1 *)&local_250;
        do {
          iVar1 = (int)uVar5;
          local_2c = puVar3 + -2;
          uVar5 = __aulldiv(uVar5,100,0);
          *(undefined2 *)(puVar3 + -2) =
               *(undefined2 *)(&DAT_102903d0 + ((int)uVar5 * -100 + iVar1) * 2);
          uVar2 = uVar2 - 1;
          puVar3 = local_2c;
        } while (1 < uVar2);
      }
      uVar6 = uVar5;
      if ((local_28 & 1) != 0) {
        uVar6 = __aulldiv(uVar5,10,0);
        puVar3[-1] = (char)uVar6 * -10 + (char)uVar5 | 0x30;
        puVar3 = puVar3 + -1;
      }
      puVar3[-1] = param_7;
      local_14 = 0;
      FUN_100255fd(puVar3 + (-1 - param_6),uVar6,param_6);
      puVar3 = local_24;
    }
    FUN_100253ad(local_30,local_48,puVar3,&local_250);
    FUN_10027d30(local_48,param_2,local_250,param_6);
    FUN_100253ad(param_1,local_250 + param_6,local_250 + local_24c,param_2);
    local_14 = 0xffffffff;
    if (local_250 != local_240) {
      thunk_FUN_10274120(local_250);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

