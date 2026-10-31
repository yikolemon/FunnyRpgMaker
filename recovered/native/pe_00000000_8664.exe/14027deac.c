/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027deac */

void FUN_14027deac(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_14027def2(param_1);
  }
  thunk_FUN_1404a2310(*param_1,0x50);
  return;
}

