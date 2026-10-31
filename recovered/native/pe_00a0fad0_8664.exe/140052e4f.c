/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140052e4f */

longlong * FUN_140052e4f(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140062930((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,10);
  FUN_14006318a(param_1,uVar1);
  FUN_14000cc5a(param_1);
  return param_1;
}

