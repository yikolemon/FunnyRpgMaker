/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800377e4 */

void Unwind_1800377e4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

