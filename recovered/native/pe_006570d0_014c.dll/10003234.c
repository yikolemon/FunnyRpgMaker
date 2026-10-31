/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003234 */

undefined4 *
FUN_10003234(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  undefined4 ***pppuVar1;
  undefined4 **local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_3c;
  local_18 = &LAB_100050c0;
  local_1c = ExceptionList;
  local_24 = param_1;
  local_14 = 0;
  ExceptionList = &local_1c;
  pppuVar1 = local_3c;
  if (param_8 != 0) {
    FUN_1000347e(&DAT_1034bbfd,2);
    pppuVar1 = (undefined4 ***)local_20;
  }
  local_20 = (undefined1 *)pppuVar1;
  (**(code **)(*param_3 + 8))(local_3c,param_2);
  local_14 = 1;
  pppuVar1 = local_3c;
  if (0xf < local_28) {
    pppuVar1 = (undefined4 ***)local_3c[0];
  }
  FUN_1000347e(pppuVar1,local_2c);
  local_14 = 0xffffffff;
  FUN_10001fee();
  *(undefined8 *)(local_24 + 4) = 0;
  *local_24 = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  *local_24 = param_4;
  local_24[1] = param_5;
  local_24[2] = param_6;
  local_24[3] = param_7;
  *(ulonglong *)(local_24 + 4) = CONCAT44(param_9,param_8);
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

