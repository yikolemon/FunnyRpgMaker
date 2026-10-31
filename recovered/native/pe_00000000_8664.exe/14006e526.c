/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006e526 */

longlong * FUN_14006e526(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_1401887b0(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *param_1 = lVar1;
  return param_1;
}

