/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002349a */

void __thiscall FUN_1002349a(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    uVar2 = *param_2;
    *param_2 = 0;
    *puVar1 = uVar2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  FUN_100234ca(puVar1,param_2);
  return;
}

