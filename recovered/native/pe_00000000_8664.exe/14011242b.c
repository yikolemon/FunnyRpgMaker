/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011242b */

undefined * FUN_14011242b(int param_1)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  if (lVar1 == 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 0) {
    puVar2 = (undefined *)FUN_140112453(lVar1,*(undefined4 *)(lVar1 + 0x74));
    return puVar2;
  }
  puVar2 = &DAT_140edcdbf;
  if (((*(char *)(lVar1 + 0x239) != '\0') || (param_1 < *(short *)(lVar1 + 0x206))) &&
     (lVar3 = (longlong)*(short *)(*(longlong *)(lVar1 + 0x18) + 0x54 + (longlong)param_1 * 0x74),
     lVar3 != -1)) {
    puVar2 = (undefined *)(lVar3 + *(longlong *)(lVar1 + 0x198));
  }
  return puVar2;
}

