/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cdba0 */

void Unwind_1800cdba0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x30))(*(undefined8 **)(param_2 + 0x30),1);
  }
  return;
}

