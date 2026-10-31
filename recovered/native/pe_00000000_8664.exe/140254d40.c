/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140254d40 */

longlong * FUN_140254d40(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 8);
  lVar5 = (param_4 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar5);
  if (plVar4 == plVar3) {
LAB_140254d90:
    plVar4 = plVar3;
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar5);
    plVar3 = plVar4;
    while (cVar2 = FUN_14022cee4(param_3,plVar3 + 2), cVar2 == '\0') {
      if (plVar3 == plVar1) goto LAB_140254d90;
      plVar3 = (longlong *)plVar3[1];
    }
    plVar4 = (longlong *)*plVar3;
  }
  *param_2 = (longlong)plVar4;
  param_2[1] = (longlong)plVar3;
  return param_2;
}

