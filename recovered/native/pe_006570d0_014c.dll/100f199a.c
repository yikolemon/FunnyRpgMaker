/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f199a */

void __thiscall FUN_100f199a(int *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (uint *)FUN_10018d26(param_2 + 4);
  if ((*puVar1 & 1) == 0) {
    if (*puVar1 == 0) {
      return;
    }
    piVar2 = (int *)FUN_100f1a24();
    puVar1 = (uint *)FUN_10018d26(param_2 + 4);
    if ((*puVar1 & 1) == 0) {
      piVar3 = piVar2;
      if (*puVar1 != 0) {
        *param_1 = param_2;
        param_1[1] = (int)piVar2;
        piVar3 = (int *)FUN_10018d26(param_2);
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar3 = param_1;
        if (piVar2 != (int *)0x0) {
          piVar2[2] = (int)param_1;
        }
      }
      FUN_100f1ad0(piVar3);
      return;
    }
    FUN_100f1ad0(piVar2);
  }
  (*(code *)param_1[3])(param_1);
  return;
}

