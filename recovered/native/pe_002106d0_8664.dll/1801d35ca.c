/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d35ca */

void FUN_1801d35ca(longlong param_1,longlong *param_2,double *param_3,ulonglong param_4)

{
  double dVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = (param_4 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar4);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar2 == *(longlong **)(param_1 + 8)) {
LAB_1801d3613:
    plVar2 = (longlong *)0x0;
  }
  else {
    dVar1 = *param_3;
    if ((dVar1 != (double)plVar2[2]) || (NAN(dVar1) || NAN((double)plVar2[2]))) {
      do {
        plVar3 = plVar2;
        if (plVar2 == *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar4)) goto LAB_1801d3613;
        plVar2 = (longlong *)plVar2[1];
      } while ((dVar1 != (double)plVar2[2]) || (NAN(dVar1) || NAN((double)plVar2[2])));
    }
    plVar3 = (longlong *)*plVar2;
  }
  *param_2 = (longlong)plVar3;
  param_2[1] = (longlong)plVar2;
  return;
}

