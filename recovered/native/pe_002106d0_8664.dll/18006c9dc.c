/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c9dc */

void FUN_18006c9dc(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_18006ca22(param_1);
  }
  thunk_FUN_1802464a0(*param_1,0x50);
  return;
}

