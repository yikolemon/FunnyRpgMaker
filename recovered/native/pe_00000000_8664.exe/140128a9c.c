/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140128a9c */

void FUN_140128a9c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  puVar2 = (undefined8 *)(param_1 + 0x18);
  puVar3 = (undefined8 *)(param_1 + 0x60);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

