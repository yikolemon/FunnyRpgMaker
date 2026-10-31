/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140234650 */

void FUN_140234650(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_14022975d(puVar2 + 2);
    thunk_FUN_1404a2310(puVar2,0x38);
    puVar2 = puVar1;
  }
  return;
}

