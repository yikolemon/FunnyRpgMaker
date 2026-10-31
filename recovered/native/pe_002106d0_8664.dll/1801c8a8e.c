/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c8a8e */

void FUN_1801c8a8e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)puVar1[1] + 0x10))();
    (**(code **)(*(longlong *)*puVar1 + 0x10))();
    FUN_180146568(puVar1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(uint *)(param_1 + 4) =
       2 - (uint)(*(longlong *)(param_1 + 0x28) == 0 | *(byte *)(param_1 + 0x57));
  return;
}

