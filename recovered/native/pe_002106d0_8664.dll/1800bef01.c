/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bef01 */

void Unwind_1800bef01(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    (*DAT_180417870)();
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return;
}

