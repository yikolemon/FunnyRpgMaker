/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aac40 */

ulonglong FUN_1401aac40(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1401aabc0(&IMAGE_DOS_HEADER_140000000);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_1401aabf0(&IMAGE_DOS_HEADER_140000000,param_1 + -0x140000000);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (ulonglong)(~*(uint *)(lVar2 + 0x24) >> 0x1f);
    }
  }
  return uVar1;
}

