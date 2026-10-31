/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a8af4 */

void __thiscall FUN_100a8af4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    uVar2 = *param_2;
    *param_2 = 0xffffffff;
    *puVar1 = uVar2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  FUN_100a8b24(puVar1,param_2);
  return;
}

