/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400187d4 */

void FUN_1400187d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_140018816((longlong)(puVar2 + 2));
    FUN_1400863f0();
    puVar2 = puVar1;
  }
  return;
}

