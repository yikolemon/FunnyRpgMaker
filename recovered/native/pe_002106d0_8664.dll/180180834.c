/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180180834 */

undefined8 Catch_180180834(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x3128) + 8))();
  FUN_1800e6fba(param_2 + 0x28,3,"Failed to load map: %s",uVar1);
  FUN_1800e6f54(&DAT_180419500,param_2 + 0x28);
  FUN_1800e5430(param_2 + 0x28);
  return 0x18018069e;
}

