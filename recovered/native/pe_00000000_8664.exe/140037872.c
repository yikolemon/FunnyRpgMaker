/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140037872 */

void Unwind_140037872(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x20) + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

