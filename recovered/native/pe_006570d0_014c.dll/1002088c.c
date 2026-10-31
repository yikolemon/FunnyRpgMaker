/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002088c */

undefined4 *
FUN_1002088c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 ***pppuVar1;
  undefined1 local_3c [4];
  undefined4 **local_38 [4];
  int local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_3c;
  local_18 = &LAB_100595e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  FUN_10001f66(param_2);
  local_14 = 1;
  pppuVar1 = local_38;
  if (0xf < local_24) {
    pppuVar1 = (undefined4 ***)local_38[0];
  }
  thunk_FUN_10020966(local_3c,param_1,pppuVar1,local_28 + (int)pppuVar1,param_3,param_4,param_5);
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

