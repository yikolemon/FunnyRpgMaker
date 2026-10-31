/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dc221 */

void FUN_100dc221(uint *param_1,undefined4 param_2)

{
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_34;
  local_10 = 0xffffffff;
  local_14 = &LAB_100de0c0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_10051841(&local_34,param_2);
  local_10 = 0;
  if (param_1 != &local_34) {
    FUN_10004e60();
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_20,local_24);
    *param_1 = local_34;
    param_1[1] = uStack_30;
    param_1[2] = uStack_2c;
    param_1[3] = uStack_28;
    local_24 = 0;
    uStack_20 = 0xf;
    local_34 = local_34 & 0xffffff00;
  }
  local_10 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_18;
  return;
}

