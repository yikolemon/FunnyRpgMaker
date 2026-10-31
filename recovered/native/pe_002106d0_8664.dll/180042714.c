/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180042714 */

void FUN_180042714(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  for (puVar2 = *(undefined8 **)(param_1 + 0x28); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    (**(code **)(*(longlong *)*puVar2 + 0x10))();
  }
  return;
}

