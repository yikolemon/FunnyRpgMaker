/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cbd8b */

void FUN_1801cbd8b(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != (longlong *)0x0 && param_1 != (undefined8 *)0x0) {
    lVar1 = *param_2;
    plVar2 = (longlong *)param_2[1];
    if (lVar1 == 0) {
      *param_1 = plVar2;
    }
    else {
      *(longlong **)(lVar1 + 8) = plVar2;
    }
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = lVar1;
      return;
    }
    param_1[1] = lVar1;
  }
  return;
}

