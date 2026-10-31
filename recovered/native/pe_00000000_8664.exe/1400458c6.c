/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400458c6 */

void FUN_1400458c6(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_14004588a(param_1);
  }
  lVar2 = *param_1;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[1] = 0;
  return;
}

