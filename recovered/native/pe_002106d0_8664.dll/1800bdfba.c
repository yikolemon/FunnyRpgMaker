/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bdfba */

void Unwind_1800bdfba(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (*DAT_180417870)();
    puVar2 = *(undefined8 **)(param_2 + 0x28);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  return;
}

