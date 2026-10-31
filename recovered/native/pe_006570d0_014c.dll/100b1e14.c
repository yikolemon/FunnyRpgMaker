/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1e14 */

void __thiscall FUN_100b1e14(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 != *(undefined1 **)(param_1 + 8)) {
    *puVar1 = *param_2;
    puVar1[1] = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
    return;
  }
  FUN_100b1e3e(puVar1,param_2);
  return;
}

