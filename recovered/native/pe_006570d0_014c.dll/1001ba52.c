/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001ba52 */

undefined4 __thiscall
FUN_1001ba52(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 ***pppuVar1;
  undefined4 **local_3c [4];
  int local_2c;
  uint local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100592e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10017e26(param_3,param_4,&local_21);
  local_14 = 0;
  pppuVar1 = local_3c;
  if (0xf < local_28) {
    pppuVar1 = (undefined4 ***)local_3c[0];
  }
  (**(code **)(*(int *)*param_1 + 0x10))(param_2,pppuVar1,local_2c + (int)pppuVar1);
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_2;
}

