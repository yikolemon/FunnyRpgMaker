/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027983e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Same Base Name
    struct _iobuf * __cdecl common_openfile<char>(char const * const,char const * const,int,class
   __crt_stdio_stream)
    struct _iobuf * __cdecl common_openfile<wchar_t>(wchar_t const * const,wchar_t const *
   const,int,class __crt_stdio_stream)
   
   Library: Visual Studio 2019 Release */

undefined4 * common_openfile<>(char *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  errno_t eVar2;
  undefined1 local_20 [12];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar1 = (int *)FUN_10279944(local_20,param_2);
  local_14 = *piVar1;
  local_10 = piVar1[1];
  local_c = piVar1[2];
  if ((char)local_c != '\0') {
    eVar2 = FID_conflict___sopen_s(&local_8,param_1,local_14,param_3,0x180);
    if (eVar2 == 0) {
      _DAT_103a4d50 = _DAT_103a4d50 + 1;
      LOCK();
      param_4[3] = param_4[3] | local_10;
      UNLOCK();
      param_4[2] = 0;
      param_4[7] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      param_4[4] = local_8;
      return param_4;
    }
  }
  return (undefined4 *)0x0;
}

