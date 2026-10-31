/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048417c */

/* Library Function - Single Match
    public: static bool __cdecl
   __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(struct _iobuf * __ptr64
   const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(_iobuf *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    pcVar5 = "traits@G@std@@@std@@@std@@";
    if (uVar2 + 2 < 2) {
      pcVar4 = "traits@G@std@@@std@@@std@@";
    }
    else {
      pcVar4 = (char *)((&DAT_1406328d0)[(longlong)(int)uVar2 >> 6] +
                       (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    if (pcVar4[0x39] == '\0') {
      if (1 < uVar2 + 2) {
        pcVar5 = (char *)((&DAT_1406328d0)[(longlong)(int)uVar2 >> 6] +
                         (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((pcVar5[0x3d] & 1U) == 0) goto LAB_140484210;
    }
    puVar3 = (undefined4 *)FUN_14048fb3c();
    *puVar3 = 0x16;
    FUN_1404a1f20();
    bVar1 = false;
  }
  else {
LAB_140484210:
    bVar1 = true;
  }
  return bVar1;
}

