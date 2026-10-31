/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180172cac */

ulonglong FUN_180172cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char *local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[1] = 0xfffffffffffffffe;
  local_30 = param_2;
  local_28 = param_1;
  FUN_180044980(&DAT_180403cf8);
  local_60 = "{},{},{}";
  local_58 = 8;
  FUN_180183967(local_50,&local_60,&local_28,&local_30,param_3);
  FUN_18006258a(&DAT_180419590,local_20,local_50);
  FUN_180001ef2(local_50);
  if (local_20[0] == DAT_180419598) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(local_20[0] + 0x30));
  }
  FUN_18023d6e0(&DAT_180403cf8);
  return uVar1 & 0xffffffff;
}

