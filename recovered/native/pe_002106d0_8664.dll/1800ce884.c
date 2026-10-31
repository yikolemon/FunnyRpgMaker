/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ce884 */

void FUN_1800ce884(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined **local_60;
  char *local_58;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_3;
  local_28 = param_1;
  local_1c = param_2;
  local_78 = FUN_1800024a1();
  local_80[0] = local_1c;
  FUN_180074510(&local_60,local_80,local_30);
  pcVar1 = "Unknown exception";
  if (local_58 != (char *)0x0) {
    pcVar1 = local_58;
  }
  FUN_18002affe(local_38,local_28,pcVar1);
  local_60 = std::exception::vftable;
  FUN_18026ea90();
  return;
}

