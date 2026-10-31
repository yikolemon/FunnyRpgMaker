/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002a746 */

undefined8 FUN_14002a746(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_a0 [56];
  undefined8 local_68;
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_140006874(local_60,param_3);
  local_68 = 0;
  FUN_140006874(local_40,local_20);
  uVar1 = FUN_14002b40a(param_1,local_40,local_a0,local_60);
  FUN_1400017de(local_20);
  return uVar1;
}

