/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10065bcc */

void __thiscall FUN_10065bcc(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c21c0;
  local_1c = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_1c;
    if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_20 = (undefined1 *)&local_28;
    FUN_10061bba(param_2);
    local_14 = 0;
    local_28 = param_1;
    local_24 = param_1;
    uVar1 = FUN_1001fb08(*param_1,param_2,param_3,param_1);
    local_28[1] = uVar1;
  }
  ExceptionList = local_1c;
  return;
}

