/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002e702 */

undefined4
FUN_1002e702(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,char param_6
            ,int param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 local_240;
  int local_23c;
  undefined4 local_238;
  code *local_234;
  undefined1 local_230 [504];
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  uint local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_240;
  local_14 = 0xffffffff;
  local_18 = &LAB_100599b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_7 + 0x28) == 0) {
    if (param_6 == '\0') {
      FUN_1002472e(&local_240,param_3,param_4);
      puVar2 = (undefined1 *)((int)&local_240 + param_4);
    }
    else {
      puVar4 = (undefined1 *)((int)&local_240 + param_4 + 1);
      local_28 = param_4 - param_5;
      local_24 = puVar4;
      local_20 = (undefined1 *)&local_240;
      if (1 < (int)local_28) {
        uVar3 = (local_28 >> 1) + 1;
        uVar1 = param_3;
        local_20 = (undefined1 *)&local_240;
        do {
          param_3 = uVar1 / 100;
          *(undefined2 *)(puVar4 + -2) = *(undefined2 *)(&DAT_102903d0 + (uVar1 % 100) * 2);
          puVar4 = puVar4 + -2;
          uVar3 = uVar3 - 1;
          uVar1 = param_3;
        } while (1 < uVar3);
      }
      uVar1 = param_3;
      if ((local_28 & 1) != 0) {
        uVar1 = param_3 / 10;
        puVar4[-1] = (char)param_3 + (char)uVar1 * -10 | 0x30;
        puVar4 = puVar4 + -1;
      }
      puVar2 = local_24;
      puVar4[-1] = param_6;
      local_14 = 0xffffffff;
      FUN_1002472e(puVar4 + (-1 - param_5),uVar1,param_5);
    }
    FUN_100253ad(param_1,&local_240,puVar2,param_2);
  }
  else {
    local_240 = local_230;
    local_23c = 0;
    local_234 = FUN_1002747c;
    local_238 = 500;
    local_14 = 0;
    if (param_6 == '\0') {
      local_20 = (undefined1 *)&local_240;
      FUN_1002472e(local_34,param_3,param_4);
      puVar2 = local_34 + param_4;
    }
    else {
      puVar2 = local_34 + param_4 + 1;
      local_28 = param_4 - param_5;
      local_24 = puVar2;
      local_20 = (undefined1 *)&local_240;
      if (1 < (int)local_28) {
        uVar3 = (local_28 >> 1) + 1;
        uVar1 = param_3;
        local_20 = (undefined1 *)&local_240;
        do {
          param_3 = uVar1 / 100;
          *(undefined2 *)(puVar2 + -2) = *(undefined2 *)(&DAT_102903d0 + (uVar1 % 100) * 2);
          puVar2 = puVar2 + -2;
          uVar3 = uVar3 - 1;
          uVar1 = param_3;
        } while (1 < uVar3);
      }
      uVar1 = param_3;
      if ((local_28 & 1) != 0) {
        uVar1 = param_3 / 10;
        puVar2[-1] = (char)param_3 + (char)uVar1 * -10 | 0x30;
        puVar2 = puVar2 + -1;
      }
      puVar2[-1] = param_6;
      local_14 = 0;
      FUN_1002472e(puVar2 + (-1 - param_5),uVar1,param_5);
      puVar2 = local_24;
    }
    FUN_100253ad(local_38,local_34,puVar2,&local_240);
    FUN_10027d30(local_34,param_2,local_240,param_5);
    FUN_100253ad(param_1,local_240 + param_5,local_240 + local_23c,param_2);
    local_14 = 0xffffffff;
    if (local_240 != local_230) {
      thunk_FUN_10274120(local_240);
    }
  }
  ExceptionList = local_1c;
  return param_1;
}

