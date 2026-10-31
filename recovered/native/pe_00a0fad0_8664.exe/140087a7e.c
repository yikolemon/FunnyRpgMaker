/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140087a7e */

undefined8 FUN_140087a7e(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140005554(local_40,param_2,0);
  pppuVar1 = local_40;
  if (7 < local_28) {
    pppuVar1 = (undefined8 ***)local_40[0];
  }
  FUN_140008bae(param_1,pppuVar1,local_30);
  FUN_140005690(local_40);
  return param_1;
}

