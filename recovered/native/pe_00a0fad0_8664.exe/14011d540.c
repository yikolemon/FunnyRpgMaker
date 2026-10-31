/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011d540 */

ulonglong FUN_14011d540(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14011d4c0(&IMAGE_DOS_HEADER_140000000);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_14011d4f0(&IMAGE_DOS_HEADER_140000000,param_1 + -0x140000000);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (ulonglong)(~*(uint *)(lVar2 + 0x24) >> 0x1f);
    }
  }
  return uVar1;
}

