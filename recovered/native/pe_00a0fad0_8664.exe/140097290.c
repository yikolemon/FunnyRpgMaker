/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140097290 */

void FUN_140097290(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[2];
    puVar2[2] = 0;
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  *param_1 = 0;
  return;
}

