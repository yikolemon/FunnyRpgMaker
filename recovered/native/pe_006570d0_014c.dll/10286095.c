/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10286095 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * const,int,int,int,int * const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * const,int,int,int,int * const,int)
   
   Library: Visual Studio 2019 Release */

int common_sopen_dispatch<>
              (int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 *param_5,
              int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  undefined4 local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_103831a0;
  uStack_c = 0x102860a1;
  if (((param_5 == (undefined4 *)0x0) || (*param_5 = 0xffffffff, param_1 == 0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    iVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  else {
    local_24 = 0;
    local_20 = 0;
    local_8 = (undefined *)0x0;
    iVar2 = FUN_10285c8f(&local_24,param_5,param_1,param_2,param_3,param_4,param_6);
    local_8 = (undefined *)0xfffffffe;
    local_20 = iVar2;
    FUN_1028612a();
    if (iVar2 != 0) {
      *param_5 = 0xffffffff;
    }
  }
  *unaff_FS_OFFSET = local_14;
  return iVar2;
}

