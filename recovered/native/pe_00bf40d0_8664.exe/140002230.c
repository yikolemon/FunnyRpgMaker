/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002230 */

longlong * FUN_140002230(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_1400863a0(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *param_1 = lVar1;
  FUN_140004a24((longlong)param_1,lVar1,param_2);
  return param_1;
}

