/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f95d8 */

void Unwind_1800f95d8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x28))(*(undefined8 **)(param_2 + 0x28),1);
  }
  return;
}

