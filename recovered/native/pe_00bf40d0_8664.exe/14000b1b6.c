/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b1b6 */

void FUN_14000b1b6(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0x100) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    FUN_14000b1f6(puVar1,puVar1[2],(undefined8 *)(param_1 + 0x28),0x100);
    *(undefined8 **)(param_1 + 0x20) = puVar1;
  }
  return;
}

