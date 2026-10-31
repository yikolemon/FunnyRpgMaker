/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140057b05 */

longlong * FUN_140057b05(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140059b78((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,10);
  FUN_14006bc7a(param_1,uVar1);
  FUN_14003db32(param_1);
  return param_1;
}

