/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112453 */

undefined * FUN_140112453(longlong param_1,int param_2)

{
  undefined *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_140edcdbf;
  if (((*(char *)(param_1 + 0x239) != '\0') || (param_2 < *(short *)(param_1 + 0x206))) &&
     (lVar2 = (longlong)*(short *)(*(longlong *)(param_1 + 0x18) + 0x54 + (longlong)param_2 * 0x74),
     lVar2 != -1)) {
    puVar1 = (undefined *)(lVar2 + *(longlong *)(param_1 + 0x198));
  }
  return puVar1;
}

