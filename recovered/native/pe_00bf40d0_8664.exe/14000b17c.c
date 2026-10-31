/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b17c */

void FUN_14000b17c(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    FUN_14000b1f6(puVar2,puVar2[2],(undefined8 *)(param_1 + 0x28),uVar1);
    *(undefined8 **)(param_1 + 0x20) = puVar2;
  }
  return;
}

