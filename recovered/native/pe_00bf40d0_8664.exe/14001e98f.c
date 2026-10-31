/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e98f */

void FUN_14001e98f(undefined8 *param_1,longlong *param_2)

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

