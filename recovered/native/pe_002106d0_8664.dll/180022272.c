/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180022272 */

void Unwind_180022272(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0xb8) + 0x170);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

