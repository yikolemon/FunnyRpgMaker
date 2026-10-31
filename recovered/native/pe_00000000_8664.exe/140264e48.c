/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140264e48 */

void FUN_140264e48(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar2 = *plVar1;
  *(longlong *)(param_2 + 0x10) = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong *)(lVar2 + 8) = param_2;
  }
  plVar3 = *(longlong **)(param_2 + 8);
  plVar1[1] = (longlong)plVar3;
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
  }
  else if (param_2 == *plVar3) {
    *plVar3 = (longlong)plVar1;
  }
  else {
    plVar3[2] = (longlong)plVar1;
  }
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}

