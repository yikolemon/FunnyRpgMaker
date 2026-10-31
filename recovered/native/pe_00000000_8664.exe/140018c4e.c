/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140018c4e */

void FUN_140018c4e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_140018c90(puVar2 + 2);
    thunk_FUN_14018e090(puVar2,0x20);
    puVar2 = puVar1;
  }
  return;
}

