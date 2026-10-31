/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b53c8 */

void FUN_1800b53c8(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_18006ca22(param_1);
  }
  lVar2 = *param_1;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[1] = 0;
  return;
}

