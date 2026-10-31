/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140004cf6 */

void FUN_140004cf6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_140004cba(param_1,(longlong)puVar1);
    puVar1 = puVar2;
  }
  lVar3 = *param_1;
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  param_1[1] = 0;
  return;
}

