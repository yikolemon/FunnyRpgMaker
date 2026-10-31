/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400707ca */

void FUN_1400707ca(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_14018e090(puVar1,0x18);
    puVar1 = puVar2;
  }
  thunk_FUN_14018e090(*param_1,0x18);
  return;
}

