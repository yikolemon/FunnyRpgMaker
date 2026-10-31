/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007cfdb */

void FUN_14007cfdb(longlong param_1)

{
  short sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  sVar1 = *(short *)(param_1 + 0x50);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  while (puVar3 = puVar2, sVar1 = sVar1 + -1, sVar1 != 0) {
    puVar2 = (undefined8 *)*puVar3;
    if (puVar2[1] == puVar3[1]) {
      puVar3[1] = puVar2;
    }
  }
  *puVar3 = 0;
  return;
}

