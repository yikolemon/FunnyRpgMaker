/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b620 */

ulonglong FUN_14008b620(longlong param_1)

{
  word *pwVar1;
  ulonglong uVar2;
  word *pwVar3;
  uint7 uVar4;
  longlong lVar5;
  
  uVar2 = 0x5a4d;
  if (IMAGE_DOS_HEADER_140000000.e_magic == (char  [2])0x5a4d) {
    lVar5 = (longlong)(int)IMAGE_DOS_HEADER_140000000.e_lfanew;
    if ((*(int *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar5) == 0x4550) &&
       (uVar2 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_140000000.e_res_4_ + lVar5 + -4) == 0x20b)) {
      pwVar3 = (word *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar5 +
                       (ulonglong)
                       *(ushort *)((longlong)IMAGE_DOS_HEADER_140000000.e_res_4_ + lVar5 + -8) +
                       0x18);
      pwVar1 = pwVar3 + (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar5 + 6) *
                        0x14;
      while( true ) {
        uVar4 = (uint7)((ulonglong)pwVar3 >> 8);
        if (pwVar3 == pwVar1) {
          return (ulonglong)uVar4 << 8;
        }
        if (((ulonglong)*(uint *)(pwVar3 + 6) <= param_1 - 0x140000000U) &&
           (param_1 - 0x140000000U < (ulonglong)(*(int *)(pwVar3 + 4) + *(uint *)(pwVar3 + 6))))
        break;
        pwVar3 = pwVar3 + 0x14;
      }
      if (*(int *)(pwVar3 + 0x12) < 0) {
        return (ulonglong)pwVar3 & 0xffffffffffffff00;
      }
      return CONCAT71(uVar4,1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

