/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1bfc */

void __thiscall FUN_100b1bfc(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 == *(undefined1 **)(param_1 + 8)) {
    FUN_100b1c30(puVar1,param_2,param_3);
  }
  else {
    *puVar1 = *param_2;
    puVar1[1] = *param_3;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
  }
  return;
}

