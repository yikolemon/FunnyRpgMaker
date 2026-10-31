/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140136a40 */

ulonglong * FUN_140136a40(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  for (puVar3 = param_1; ((ulonglong)puVar3 & 7) != 0; puVar3 = (ulonglong *)((longlong)puVar3 + 1))
  {
    puVar5 = puVar3;
    if ((char)*puVar3 == '\0') goto LAB_140136ae3;
  }
  do {
    do {
      puVar4 = puVar3;
      uVar1 = *puVar4;
      puVar3 = puVar4 + 1;
    } while (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    puVar5 = puVar4;
  } while ((((((char)uVar1 != '\0') &&
             (puVar5 = (ulonglong *)((longlong)puVar4 + 1), (char)(uVar1 >> 8) != '\0')) &&
            (puVar5 = (ulonglong *)((longlong)puVar4 + 2), (char)(uVar1 >> 0x10) != '\0')) &&
           ((puVar5 = (ulonglong *)((longlong)puVar4 + 3), (char)(uVar1 >> 0x18) != '\0' &&
            (puVar5 = (ulonglong *)((longlong)puVar4 + 4), (char)(uVar1 >> 0x20) != '\0')))) &&
          ((puVar5 = (ulonglong *)((longlong)puVar4 + 5), (char)(uVar1 >> 0x28) != '\0' &&
           ((puVar5 = (ulonglong *)((longlong)puVar4 + 6), (char)(uVar1 >> 0x30) != '\0' &&
            (puVar5 = (ulonglong *)((longlong)puVar4 + 7), (char)(uVar1 >> 0x38) != '\0'))))));
LAB_140136ae3:
  lVar6 = (longlong)puVar5 - (longlong)param_2;
  while( true ) {
    if (((ulonglong)param_2 & 7) == 0) {
      while( true ) {
        while (uVar1 = *param_2,
              ((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0)
        {
          *(ulonglong *)((longlong)param_2 + lVar6) = uVar1;
          param_2 = param_2 + 1;
        }
        *(char *)((longlong)param_2 + lVar6) = (char)uVar1;
        if (((((char)uVar1 == '\0') ||
             (cVar2 = (char)(uVar1 >> 8), *(char *)((longlong)param_2 + lVar6 + 1) = cVar2,
             cVar2 == '\0')) ||
            (cVar2 = (char)(uVar1 >> 0x10), *(char *)((longlong)param_2 + lVar6 + 2) = cVar2,
            cVar2 == '\0')) ||
           (((cVar2 = (char)(uVar1 >> 0x18), *(char *)((longlong)param_2 + lVar6 + 3) = cVar2,
             cVar2 == '\0' ||
             (cVar2 = (char)(uVar1 >> 0x20), *(char *)((longlong)param_2 + lVar6 + 4) = cVar2,
             cVar2 == '\0')) ||
            ((cVar2 = (char)(uVar1 >> 0x28), *(char *)((longlong)param_2 + lVar6 + 5) = cVar2,
             cVar2 == '\0' ||
             ((cVar2 = (char)(uVar1 >> 0x30), *(char *)((longlong)param_2 + lVar6 + 6) = cVar2,
              cVar2 == '\0' ||
              (cVar2 = (char)(uVar1 >> 0x38), *(char *)((longlong)param_2 + lVar6 + 7) = cVar2,
              cVar2 == '\0')))))))) break;
        param_2 = param_2 + 1;
      }
      return param_1;
    }
    uVar1 = *param_2;
    *(char *)((longlong)param_2 + lVar6) = (char)uVar1;
    if ((char)uVar1 == '\0') break;
    param_2 = (ulonglong *)((longlong)param_2 + 1);
  }
  return param_1;
}

