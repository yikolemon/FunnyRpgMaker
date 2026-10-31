/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021eb63 */

void __fastcall FUN_1021eb63(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  sVar1 = *(short *)(param_1 + 0x3c);
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  while (puVar3 = puVar2, sVar1 = sVar1 + -1, sVar1 != 0) {
    puVar2 = (undefined4 *)*puVar3;
    if (puVar2[1] == puVar3[1]) {
      puVar3[1] = puVar2;
    }
  }
  *puVar3 = 0;
  return;
}

