/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258b50 */

undefined4
FUN_10258b50(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_40;
  undefined *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  code *local_10;
  undefined4 local_c;
  code *local_8;
  
  local_20 = &stack0xfffffffc;
  local_24 = &stack0xffffffbc;
  if (param_1 == (undefined4 *)0x123) {
    *param_2 = 0x10258c2a;
    local_c = 1;
  }
  else {
    local_3c = &DAT_10258d60;
    local_38 = DAT_10388d00 ^ (uint)&local_40;
    local_34 = param_5;
    local_30 = param_2;
    local_2c = param_6;
    local_28 = param_7;
    local_1c = 0;
    local_40 = ExceptionList;
    ExceptionList = &local_40;
    uVar1 = FUN_10288700(*param_1);
    *param_1 = uVar1;
    local_c = 1;
    local_18 = param_1;
    local_14 = param_3;
    iVar2 = FUN_10272260();
    local_8 = *(code **)(iVar2 + 8);
    guard_check_icall();
    local_10 = local_8;
    (*local_8)(*param_1,&local_18);
    local_c = 0;
    if (local_1c != 0) {
      *local_40 = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_40;
  }
  return local_c;
}

