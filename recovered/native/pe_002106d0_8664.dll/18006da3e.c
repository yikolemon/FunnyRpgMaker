/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006da3e */

undefined8 * FUN_18006da3e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_18 = param_1;
  FUN_180002cc0(local_48,&local_48,param_2);
  *local_18 = std::filesystem::filesystem_error::vftable;
  local_30 = local_18 + 5;
  FUN_180002d74();
  local_28 = local_18 + 9;
  FUN_180002d74();
  local_20 = local_18 + 0xd;
  pcVar1 = "Unknown exception";
  if ((char *)local_18[1] != (char *)0x0) {
    pcVar1 = (char *)local_18[1];
  }
  FUN_180001e92(local_20,pcVar1);
  return local_18;
}

