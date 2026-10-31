/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d4bdc */

void FUN_1800d4bdc(undefined8 param_1,longlong param_2)

{
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    local_48 = "$gameVariables._data[{}] = {};";
    local_40 = 0x1e;
    local_18 = param_1;
    FUN_1800d5878(local_38,&local_48,&local_18,param_2);
    FUN_180013ef1(local_38);
    FUN_180001ef2(local_38);
  }
  return;
}

