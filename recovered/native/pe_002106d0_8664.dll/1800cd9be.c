/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cd9be */

void Unwind_1800cd9be(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x20) + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

