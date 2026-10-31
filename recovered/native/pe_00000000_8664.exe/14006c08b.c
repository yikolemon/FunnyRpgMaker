/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006c08b */

void Unwind_14006c08b(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

