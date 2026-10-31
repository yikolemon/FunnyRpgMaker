/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100914ae */

undefined4 __thiscall
FUN_100914ae(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  local_18 = &LAB_100c38b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10091550(param_3,param_4,&local_21);
  local_14 = 0;
  pppuVar1 = local_3c;
  if (7 < local_28) {
    pppuVar1 = (undefined4 ***)local_3c[0];
  }
  (**(code **)(*(int *)*param_1 + 0x10))(param_2,pppuVar1,(int)pppuVar1 + local_2c * 2);
  local_14 = 0xffffffff;
  FUN_10001134();
  ExceptionList = local_1c;
  return param_2;
}

