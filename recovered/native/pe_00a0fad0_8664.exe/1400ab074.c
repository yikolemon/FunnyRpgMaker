/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ab074 */

longlong * FUN_1400ab074(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_1400d3680(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}

