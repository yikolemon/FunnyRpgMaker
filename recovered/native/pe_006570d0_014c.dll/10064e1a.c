/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10064e1a */

undefined8 * __thiscall FUN_10064e1a(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *local_4c;
  undefined8 *local_48;
  uint local_44;
  undefined8 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined8 *local_30;
  int local_2c;
  int *local_28;
  undefined8 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c21a0;
  local_1c = ExceptionList;
  iVar1 = *param_1;
  local_38 = (param_1[1] - iVar1 >> 2) * -0x55555555 + 1;
  uVar2 = (param_1[2] - iVar1 >> 2) * -0x55555555;
  uVar3 = 0x15555555 - (uVar2 >> 1);
  uVar4 = (uVar2 >> 1) + uVar2;
  if (uVar4 <= local_38) {
    uVar4 = local_38;
  }
  if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
    uVar4 = 0x15555555;
  }
  ExceptionList = &local_1c;
  if (uVar4 < 0x15555556) {
    local_20 = (undefined1 *)&local_4c;
    local_48 = (undefined8 *)FUN_10001426(uVar4 * 0xc);
    local_3c = (int)local_48 + (param_2 - iVar1) + 0xc;
    local_14 = 0;
    local_40 = (undefined8 *)((param_2 - iVar1) + (int)local_48);
    *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
    *local_40 = *param_3;
    local_4c = param_1;
    local_44 = uVar4;
    local_34 = uVar4;
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = param_1;
    local_24 = local_48;
    if (param_2 == param_1[1]) {
      thunk_FUN_10019b82(*param_1,param_1[1],local_48);
    }
    else {
      thunk_FUN_10019b82(*param_1,param_2,local_48);
      local_40 = local_24;
      thunk_FUN_10019b82(param_2,local_28[1],local_2c);
    }
    local_48 = (undefined8 *)0x0;
    FUN_10019aee(local_24,local_38,local_34);
    local_14 = 0xffffffff;
    FUN_10019b46();
    ExceptionList = local_1c;
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

