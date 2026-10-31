/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cdea0 */

void Unwind_1800cdea0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x38))(*(undefined8 **)(param_2 + 0x38),1);
  }
  return;
}

