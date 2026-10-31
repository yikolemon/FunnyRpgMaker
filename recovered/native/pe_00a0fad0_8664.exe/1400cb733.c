/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cb733 */

void Unwind_1400cb733(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  for (puVar2 = *(undefined8 **)(param_2 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 0x19) {
    (**(code **)*puVar2)(puVar2,0);
  }
  return;
}

