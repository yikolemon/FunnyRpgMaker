/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ceedb */

void FUN_1800ceedb(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 local_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_180001e92(local_48);
  FUN_180041eda(param_1,local_48,&local_28);
  return;
}

