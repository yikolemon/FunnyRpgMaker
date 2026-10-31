/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800424de */

void FUN_1800424de(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)param_1[6];
  for (plVar4 = (longlong *)param_1[5]; plVar4 != plVar2; plVar4 = plVar4 + 2) {
    iVar1 = *(int *)(param_2 + 0x10);
    piVar3 = (int *)FUN_1800188ac(*plVar4 + 8);
    if (*piVar3 <= iVar1) {
      (**(code **)(*(longlong *)*plVar4 + 8))((longlong *)*plVar4,param_2);
    }
  }
  iVar1 = *(int *)(param_2 + 0x10);
  piVar3 = (int *)FUN_1800188ac((longlong)param_1 + 0x44);
  if ((*piVar3 <= iVar1) && (*(int *)(param_2 + 0x10) != 6)) {
    (**(code **)(*param_1 + 0x18))();
  }
  return;
}

