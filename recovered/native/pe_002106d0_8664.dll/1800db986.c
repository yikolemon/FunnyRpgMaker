/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800db986 */

void FUN_1800db986(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (param_4 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar3);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar1 == *(longlong **)(param_1 + 8)) {
LAB_1800db9c7:
    plVar1 = (longlong *)0x0;
  }
  else {
    if (*param_3 != plVar1[2]) {
      do {
        plVar2 = plVar1;
        if (plVar1 == *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3)) goto LAB_1800db9c7;
        plVar1 = (longlong *)plVar1[1];
      } while (*param_3 != plVar1[2]);
    }
    plVar2 = (longlong *)*plVar1;
  }
  *param_2 = (longlong)plVar2;
  param_2[1] = (longlong)plVar1;
  return;
}

