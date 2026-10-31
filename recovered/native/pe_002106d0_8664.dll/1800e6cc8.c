/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e6cc8 */

longlong * FUN_1800e6cc8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180239630(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  *param_1 = *param_2;
  *param_2 = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = lVar1;
  return param_1;
}

