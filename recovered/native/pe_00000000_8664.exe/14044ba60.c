/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044ba60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14044ba60(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (*(code *)s_GetFileAttributesExW_14059de28._8_8_)();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = (*_DAT_14059df60)();
  return uVar2;
}

