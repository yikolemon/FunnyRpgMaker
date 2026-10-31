/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bfee2 */

void Unwind_1800bfee2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (**(longlong **)(param_2 + 0x28) != 0) {
    (*DAT_180417870)();
    puVar1 = *(undefined8 **)(param_2 + 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x38);
  return;
}

