/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb670 */

void FUN_1800bb670(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8) = 0;
    **(undefined8 **)(param_1 + 0x10) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      FUN_18001828d(puVar2 + 2);
      thunk_FUN_1802464a0(puVar2,0x38);
      puVar2 = puVar1;
    }
  }
  return;
}

