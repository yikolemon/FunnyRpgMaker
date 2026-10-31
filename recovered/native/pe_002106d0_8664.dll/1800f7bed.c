/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f7bed */

undefined8 Catch_1800f7bed(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_1800f8b1b(param_2 + 0x28);
  FUN_1800f8a64(lVar1 + 0x38,param_2 + 0x28);
  return 0x1800f7be6;
}

