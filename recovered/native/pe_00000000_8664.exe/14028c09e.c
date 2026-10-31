/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028c09e */

longlong * FUN_14028c09e(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14028564c((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,10);
  FUN_14028c890(param_1,uVar1);
  FUN_14028c6fe(param_1);
  return param_1;
}

