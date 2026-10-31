/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007e6e6 */

undefined8 FUN_18007e6e6(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180001e04(local_40,param_2,0);
  pppuVar1 = local_40;
  if (7 < local_28) {
    pppuVar1 = (undefined8 ***)local_40[0];
  }
  FUN_180004718(param_1,pppuVar1,local_30);
  FUN_180001e4c(local_40);
  return param_1;
}

