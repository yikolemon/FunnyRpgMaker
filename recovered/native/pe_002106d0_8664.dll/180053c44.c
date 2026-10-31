/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180053c44 */

longlong * FUN_180053c44(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  lVar2 = *param_1;
  plVar4 = *(longlong **)(lVar2 + 8);
  *param_2 = (longlong)plVar4;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = lVar2;
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  while (cVar1 == '\0') {
    *param_2 = (longlong)plVar4;
    iVar3 = FUN_18001b9c8(plVar4 + 4,param_3);
    if (iVar3 < 0) {
      plVar4 = plVar4 + 2;
    }
    else {
      param_2[2] = (longlong)plVar4;
    }
    *(uint *)(param_2 + 1) = (uint)(iVar3 >= 0);
    plVar4 = (longlong *)*plVar4;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  return param_2;
}

