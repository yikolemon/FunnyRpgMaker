/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10055182 */

int __thiscall FUN_10055182(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005ac00;
  local_1c = ExceptionList;
  iVar3 = *param_1;
  local_38 = (param_1[1] - iVar3 >> 4) + 1;
  uVar1 = param_1[2] - iVar3 >> 4;
  uVar2 = (uVar1 >> 1) + uVar1;
  if (uVar2 <= local_38) {
    uVar2 = local_38;
  }
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    uVar2 = 0xfffffff;
  }
  ExceptionList = &local_1c;
  if (uVar2 < 0x10000000) {
    local_20 = (undefined1 *)&local_4c;
    local_48 = FUN_10001426(uVar2 << 4);
    local_40 = local_48 + (param_2 - iVar3) + 0x10;
    local_14 = 0;
    iVar3 = (param_2 - iVar3) + local_48;
    local_4c = param_1;
    local_44 = uVar2;
    local_3c = local_40;
    local_34 = uVar2;
    local_2c = local_40;
    local_24 = local_48;
    FUN_10053132(param_3);
    local_40 = iVar3;
    local_30 = iVar3;
    local_28 = param_1;
    if (param_2 == param_1[1]) {
      FUN_10016bd4(*param_1,param_1[1],local_24,param_1);
    }
    else {
      FUN_10016bd4(*param_1,param_2,local_24,param_1);
      local_40 = local_24;
      FUN_10016bd4(param_2,local_28[1],local_2c,local_28);
    }
    local_48 = 0;
    FUN_10016c6c(local_24,local_38,local_34);
    local_14 = 0xffffffff;
    FUN_10016f60();
    ExceptionList = local_1c;
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

