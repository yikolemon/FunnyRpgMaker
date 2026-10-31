/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075ab14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14075ab14(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)_DAT_150af8266;
  iVar1 = *(int *)(uVar3 + 0x2044);
  if ((iVar1 != 0) && (iVar1 == *(int *)(uVar3 + 0x1e80))) {
    uVar2 = *(uint *)(uVar3 + 0x14cc);
    if ((iVar1 != *(int *)((ulonglong)uVar2 + 8)) || (*(char *)((ulonglong)uVar2 + 0xfb) == '\0')) {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  return 0;
}

