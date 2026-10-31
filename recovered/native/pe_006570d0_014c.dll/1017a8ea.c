/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017a8ea */

void __thiscall FUN_1017a8ea(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == *(undefined4 **)(param_1 + 8)) {
    FUN_1017a926(puVar1,param_2);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  }
  return;
}

