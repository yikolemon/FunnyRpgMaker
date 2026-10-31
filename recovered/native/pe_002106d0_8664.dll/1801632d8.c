/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801632d8 */

longlong * FUN_1801632d8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    FUN_180016c8e(param_1,param_1,*(undefined8 *)(lVar1 + 8));
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

