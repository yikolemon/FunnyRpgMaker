/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d750 */

ulonglong FUN_18023d750(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
    lVar4 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
    if ((*(int *)(lVar4 + 0x180000000) == 0x4550) &&
       (uVar1 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar4 + -4) == 0x20b)) {
      uVar2 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar4 + -8) +
              0x18 + lVar4 + 0x180000000;
      uVar1 = uVar2 + (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar4 + 6) * 0x28;
      while( true ) {
        uVar3 = (uint7)(uVar2 >> 8);
        if (uVar2 == uVar1) {
          return (ulonglong)uVar3 << 8;
        }
        if (((ulonglong)*(uint *)(uVar2 + 0xc) <= param_1 - 0x180000000U) &&
           (param_1 - 0x180000000U < (ulonglong)(*(int *)(uVar2 + 8) + *(uint *)(uVar2 + 0xc))))
        break;
        uVar2 = uVar2 + 0x28;
      }
      if (*(int *)(uVar2 + 0x24) < 0) {
        return uVar2 & 0xffffffffffffff00;
      }
      return CONCAT71(uVar3,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}

