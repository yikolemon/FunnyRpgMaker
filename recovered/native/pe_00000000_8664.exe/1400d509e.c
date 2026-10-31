/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d509e */

void FUN_1400d509e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)puVar1[1] + 0x10))();
    (**(code **)(*(longlong *)*puVar1 + 0x10))();
    FUN_1400bf498(puVar1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(uint *)(param_1 + 4) =
       2 - (uint)(*(longlong *)(param_1 + 0x28) == 0 | *(byte *)(param_1 + 0x57));
  return;
}

