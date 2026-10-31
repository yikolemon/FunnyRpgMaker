/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140070c68 */

void FUN_140070c68(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_14018e090(puVar1,0x18);
    puVar1 = puVar2;
  }
  lVar3 = *param_1;
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  param_1[1] = 0;
  return;
}

