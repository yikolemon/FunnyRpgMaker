/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044ba80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14044ba80(void)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_140483664();
  if ((int)uVar2 == 0xfde9) {
    return uVar2;
  }
  iVar1 = (*ram0x00014059dd50)();
  return (ulonglong)(iVar1 == 0);
}

