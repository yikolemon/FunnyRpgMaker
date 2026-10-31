/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c6898 */

void FUN_1402c6898(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_14027def2(param_1);
  }
  lVar2 = *param_1;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[1] = 0;
  return;
}

