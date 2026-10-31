/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045844 */

void FUN_140045844(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_14004588a(param_1);
  }
  thunk_FUN_14018e090(*param_1,0x50);
  return;
}

