/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c31d2 */

void FUN_1800c31d2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1802464a0(puVar1,0x18);
    puVar1 = puVar2;
  }
  lVar3 = *param_1;
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  param_1[1] = 0;
  return;
}

