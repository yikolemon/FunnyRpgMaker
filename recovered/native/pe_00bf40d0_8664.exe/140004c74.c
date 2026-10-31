/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140004c74 */

void FUN_140004c74(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_140004cba(param_1,(longlong)puVar1);
    puVar1 = puVar2;
  }
  FUN_1400863f0();
  return;
}

