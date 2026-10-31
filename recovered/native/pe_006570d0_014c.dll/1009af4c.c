/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009af4c */

void __thiscall FUN_1009af4c(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == *(undefined4 **)(param_1 + 8)) {
    FUN_1009af8c(puVar2,param_2);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  }
  return;
}

