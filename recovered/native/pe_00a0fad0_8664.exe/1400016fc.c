/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400016fc */

undefined8 FUN_1400016fc(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_90 [64];
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1400441ae(local_90,&local_21);
  FUN_140006874(local_50,param_2);
  local_30 = param_1;
  FUN_140044236(param_1,local_50,local_90);
  return local_30;
}

