/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140011444 */

void Unwind_140011444(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

