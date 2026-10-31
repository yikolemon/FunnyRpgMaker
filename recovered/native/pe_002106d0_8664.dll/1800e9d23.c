/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e9d23 */

void FUN_1800e9d23(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180088ac2(local_50);
  uVar1 = FUN_18008cfa6(param_1,"original");
  FUN_1800856c4(uVar1,local_50);
  FUN_1800e9e2a(local_40,param_2 + 0x20);
  uVar1 = FUN_18008cfa6(param_1,"original_sequence");
  FUN_1800856c4(uVar1,local_40);
  FUN_1800e9e2a(local_30,param_2 + 0x38);
  uVar1 = FUN_18008cfa6(param_1,"translation_sequence");
  FUN_1800856c4(uVar1,local_30);
  return;
}

