/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019dc10 */

void FUN_18019dc10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + 7;
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = param_2;
  }
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = puVar1;
  puVar2 = param_1 + 6;
  if (param_3 != (undefined8 *)0x0) {
    puVar2 = param_3;
  }
  param_1[5] = puVar2;
  *puVar1 = 0;
  *(undefined4 *)param_1[5] = 0;
  return;
}

