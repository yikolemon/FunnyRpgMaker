/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ae9cc */

void __thiscall FUN_100ae9cc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    uVar2 = *param_3;
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  FUN_100aea00(puVar1,param_2,param_3);
  return;
}

