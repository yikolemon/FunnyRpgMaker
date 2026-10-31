/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140136ae0 */

longlong FUN_140136ae0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = param_1 - (longlong)param_2;
  while( true ) {
    if (((ulonglong)param_2 & 7) == 0) {
      while( true ) {
        while (uVar1 = *param_2,
              ((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0)
        {
          *(ulonglong *)((longlong)param_2 + lVar3) = uVar1;
          param_2 = param_2 + 1;
        }
        *(char *)((longlong)param_2 + lVar3) = (char)uVar1;
        if ((((((char)uVar1 == '\0') ||
              (cVar2 = (char)(uVar1 >> 8), *(char *)((longlong)param_2 + lVar3 + 1) = cVar2,
              cVar2 == '\0')) ||
             (cVar2 = (char)(uVar1 >> 0x10), *(char *)((longlong)param_2 + lVar3 + 2) = cVar2,
             cVar2 == '\0')) ||
            ((cVar2 = (char)(uVar1 >> 0x18), *(char *)((longlong)param_2 + lVar3 + 3) = cVar2,
             cVar2 == '\0' ||
             (cVar2 = (char)(uVar1 >> 0x20), *(char *)((longlong)param_2 + lVar3 + 4) = cVar2,
             cVar2 == '\0')))) ||
           ((cVar2 = (char)(uVar1 >> 0x28), *(char *)((longlong)param_2 + lVar3 + 5) = cVar2,
            cVar2 == '\0' ||
            ((cVar2 = (char)(uVar1 >> 0x30), *(char *)((longlong)param_2 + lVar3 + 6) = cVar2,
             cVar2 == '\0' ||
             (cVar2 = (char)(uVar1 >> 0x38), *(char *)((longlong)param_2 + lVar3 + 7) = cVar2,
             cVar2 == '\0')))))) break;
        param_2 = param_2 + 1;
      }
      return param_1;
    }
    uVar1 = *param_2;
    *(char *)((longlong)param_2 + lVar3) = (char)uVar1;
    if ((char)uVar1 == '\0') break;
    param_2 = (ulonglong *)((longlong)param_2 + 1);
  }
  return param_1;
}

