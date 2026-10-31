/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc034 */

void FUN_1801cc034(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0 && param_1 != (undefined8 *)0x0) {
    lVar1 = param_1[1];
    param_2[1] = 0;
    *param_2 = lVar1;
    if (lVar1 == 0) {
      *param_1 = param_2;
    }
    else {
      *(longlong **)(lVar1 + 8) = param_2;
    }
    param_1[1] = param_2;
  }
  return;
}

