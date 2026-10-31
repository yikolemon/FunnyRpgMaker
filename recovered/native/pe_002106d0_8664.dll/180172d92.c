/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180172d92 */

void FUN_180172d92(undefined8 param_1,undefined8 param_2,ulonglong param_3,char param_4)

{
  char *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [4];
  char *local_30 [2];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60 = param_2;
  local_58 = param_1;
  FUN_180044980(&DAT_180403cf8);
  local_a0 = "{},{},{}";
  local_98 = 8;
  FUN_180183967(local_50,&local_a0,&local_58,&local_60,param_3);
  FUN_1800e0b1a(local_30,local_50);
  FUN_1800139e8(local_30,local_80,0xffffffff,0x20,param_3 & 0xffffffffffffff00,0);
  FUN_1800137c6(local_30);
  FUN_180001ef2(local_50);
  FUN_180183a42(&DAT_180419590,local_50,local_80);
  *(char *)(local_50[0] + 0x30) = param_4;
  local_30[0] = "Set to false";
  if (param_4 != '\0') {
    local_30[0] = "Set to true";
  }
  local_30[0] = local_30[0] + 7;
  local_90 = "$gameSelfSwitches.setValue({}, {});";
  local_88 = 0x23;
  FUN_18006f8f2(local_50,&local_90,local_80);
  FUN_180013ef1(local_50);
  FUN_180001ef2(local_50);
  FUN_180001ef2(local_80);
  FUN_18023d6e0(&DAT_180403cf8);
  return;
}

