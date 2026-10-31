/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180020ad8 */

void FUN_180020ad8(undefined8 *param_1)

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

