/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285687 */

/* Library Function - Single Match
    __mbsdec_l
   
   Library: Visual Studio 2019 Release */

uchar * __cdecl __mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_14;
  int local_c;
  char local_8;
  
  if (_Start == (uchar *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return (uchar *)0x0;
  }
  if (_Pos == (uchar *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  else if (_Start < _Pos) {
    FUN_1025be8b(_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_c + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)(*pbVar2 + 0x19 + local_c) & 4) != 0);
      pbVar2 = _Pos + (-1 - ((int)_Pos - (int)pbVar2 & 1U));
    }
    if (local_8 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    return pbVar2;
  }
  return (uchar *)0x0;
}

