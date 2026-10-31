/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180183715 */

void FUN_180183715(undefined4 param_1,undefined4 param_2)

{
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_48 = "$gamePlayer.reserveTransfer({}, {}, {}, 0, 0);";
  local_40 = 0x2e;
  local_18 = param_2;
  local_14 = param_1;
  FUN_1801838ab(local_38,&local_48,&DAT_180403bfc,&local_14,&local_18);
  FUN_180013ef1(local_38);
  FUN_180001ef2(local_38);
  return;
}

