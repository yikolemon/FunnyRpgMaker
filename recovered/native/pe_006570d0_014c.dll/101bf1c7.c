/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bf1c7 */

void __fastcall FUN_101bf1c7(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1]);
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    FUN_10141def(puVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(uint *)(param_1 + 4) = 2 - (uint)(*(int *)(param_1 + 0x28) == 0 | *(byte *)(param_1 + 0x4f));
  return;
}

