/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800da82c */

undefined8 Catch_1800da82c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 8))();
  FUN_180107bf7("%s",uVar1);
  return 0x1800da788;
}

