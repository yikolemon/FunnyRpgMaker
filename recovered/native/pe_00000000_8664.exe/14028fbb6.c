/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028fbb6 */

undefined8 FUN_14028fbb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1402132d4(local_40,param_2,0);
  pppuVar1 = local_40;
  if (7 < local_28) {
    pppuVar1 = (undefined8 ***)local_40[0];
  }
  FUN_140215be8(param_1,pppuVar1,local_30);
  FUN_14021331c(local_40);
  return param_1;
}

