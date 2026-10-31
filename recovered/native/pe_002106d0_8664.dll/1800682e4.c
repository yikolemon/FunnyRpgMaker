/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800682e4 */

longlong * FUN_1800682e4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    FUN_1800603f0(param_1,param_1,*(undefined8 *)(lVar1 + 8));
    *(longlong *)(lVar1 + 8) = lVar1;
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(lVar1 + 0x10) = lVar1;
    param_1[1] = 0;
    lVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar1;
    lVar1 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar1;
  }
  return param_1;
}

