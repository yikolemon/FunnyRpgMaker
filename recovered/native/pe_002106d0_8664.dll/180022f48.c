/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180022f48 */

void FUN_180022f48(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_180022f89(puVar2 + 2);
    thunk_FUN_1802464a0(puVar2,0x40);
    puVar2 = puVar1;
  }
  return;
}

