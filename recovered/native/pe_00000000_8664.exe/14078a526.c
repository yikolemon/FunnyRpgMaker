/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078a526 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078a526(longlong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  ulonglong auStack_20 [2];
  
  pcVar1 = (char *)(ulonglong)_DAT_14cc888b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc888b1039d74c;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  if (*(char *)((ulonglong)*(uint *)(pcVar1 + 0x14cc) + 0xfe) == '\0') {
    auStack_20[1] = 0;
    auStack_20[0] = unaff_RDI >> 0x20;
    uVar2 = FUN_14075544d();
    uVar3 = (ulonglong)((int)auStack_20 + 8);
    *(undefined8 *)(uVar3 - 8) = 0;
    *(undefined8 *)(uVar3 - 0x10) = uVar2;
    *(ulonglong *)(uVar3 - 0x18) = unaff_RDI >> 0x20;
    *(undefined8 *)(uVar3 - 0x20) = 0;
    *(undefined8 *)(uVar3 - 0x28) = 0x14078a562;
    FUN_14078a0b9();
  }
  return;
}

