/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140058307 */

longlong * FUN_140058307(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140013576((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,10);
  FUN_14006dcfc(param_1,uVar1);
  FUN_14003db32(param_1);
  return param_1;
}

