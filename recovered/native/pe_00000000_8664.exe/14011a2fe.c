/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011a2fe */

void FUN_14011a2fe(longlong param_1,longlong *param_2,double *param_3,ulonglong param_4)

{
  double dVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = (param_4 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar4);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar2 == *(longlong **)(param_1 + 8)) {
LAB_14011a347:
    plVar2 = (longlong *)0x0;
  }
  else {
    dVar1 = *param_3;
    if ((dVar1 != (double)plVar2[2]) || (NAN(dVar1) || NAN((double)plVar2[2]))) {
      do {
        plVar3 = plVar2;
        if (plVar2 == *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar4)) goto LAB_14011a347;
        plVar2 = (longlong *)plVar2[1];
      } while ((dVar1 != (double)plVar2[2]) || (NAN(dVar1) || NAN((double)plVar2[2])));
    }
    plVar3 = (longlong *)*plVar2;
  }
  *param_2 = (longlong)plVar3;
  param_2[1] = (longlong)plVar2;
  return;
}

