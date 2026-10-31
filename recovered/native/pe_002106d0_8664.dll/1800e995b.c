/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e995b */

void FUN_1800e995b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180088ac2(local_40);
  uVar1 = FUN_18008cfa6(param_1,&DAT_18036a525);
  FUN_1800856c4(uVar1,local_40);
  FUN_1800e9a16(local_30,param_2 + 0x20);
  uVar1 = FUN_18008cfa6(param_1,"translations");
  FUN_1800856c4(uVar1,local_30);
  return;
}

