/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ac5b7 */

void Unwind_1800ac5b7(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  for (puVar2 = *(undefined8 **)(param_2 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 0x19) {
    (**(code **)*puVar2)(puVar2,0);
  }
  return;
}

