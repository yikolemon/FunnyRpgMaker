/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a5ac */

void FUN_18006a5ac(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1802464a0(puVar1,0x18);
    puVar1 = puVar2;
  }
  thunk_FUN_1802464a0(*param_1,0x18);
  return;
}

