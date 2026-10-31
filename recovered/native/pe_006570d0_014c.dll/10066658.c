/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10066658 */

void __fastcall FUN_10066658(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
    FUN_100666ec();
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  puVar1[6] = 3;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1c;
  return;
}

