/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800442b2 */

void FUN_1800442b2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar4 = FUN_18004435a(param_1,*(undefined8 *)(*param_2 + 8),*param_1);
  *(undefined8 *)(*param_1 + 8) = uVar4;
  param_1[1] = param_2[1];
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar1[1];
  if (*(char *)(plVar1[1] + 0x19) == '\0') {
    do {
      plVar6 = plVar2;
      plVar2 = (longlong *)*plVar6;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    *plVar1 = (longlong)plVar6;
    lVar5 = *param_1;
    lVar3 = *(longlong *)(lVar5 + 8);
    do {
      lVar7 = lVar3;
      lVar3 = *(longlong *)(lVar7 + 0x10);
    } while (*(char *)(*(longlong *)(lVar7 + 0x10) + 0x19) == '\0');
  }
  else {
    *plVar1 = (longlong)plVar1;
    lVar5 = *param_1;
    lVar7 = lVar5;
  }
  *(longlong *)(lVar5 + 0x10) = lVar7;
  return;
}

