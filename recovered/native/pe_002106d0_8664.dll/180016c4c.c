/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180016c4c */

void FUN_180016c4c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)((longlong *)*param_1)[2];
  plVar3 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    do {
      plVar2 = plVar1;
      plVar1 = (longlong *)*plVar2;
    } while (*(char *)(*plVar2 + 0x19) == '\0');
  }
  else {
    while ((plVar2 = (longlong *)plVar3[1], *(char *)((longlong)plVar2 + 0x19) == '\0' &&
           (plVar3 == (longlong *)plVar2[2]))) {
      *param_1 = (longlong)plVar2;
      plVar3 = plVar2;
    }
  }
  *param_1 = (longlong)plVar2;
  return;
}

