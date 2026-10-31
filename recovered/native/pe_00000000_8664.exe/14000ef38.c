/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000ef38 */

void FUN_14000ef38(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  *param_2 = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong **)(lVar2 + 8) = param_2;
  }
  plVar3 = (longlong *)param_2[1];
  *(longlong **)(lVar1 + 8) = plVar3;
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
  }
  else if (param_2 == (longlong *)plVar3[2]) {
    plVar3[2] = lVar1;
  }
  else {
    *plVar3 = lVar1;
  }
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}

