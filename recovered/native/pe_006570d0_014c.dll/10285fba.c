/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285fba */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl common_sopen_dispatch<char>(char const * const,int,int,int,int * const,int)
   
   Library: Visual Studio 2019 Release */

int __cdecl
common_sopen_dispatch<char>
          (char *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int local_24;
  errno_t local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10383180;
  uStack_c = 0x10285fc6;
  if (((param_5 == (int *)0x0) || (*param_5 = -1, param_1 == (char *)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7fU) != 0)))) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    iVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  else {
    local_24 = 0;
    local_20 = 0;
    local_8 = (undefined *)0x0;
    iVar2 = __sopen_nolock(&local_24,param_5,param_1,param_2,param_3,param_4,param_6);
    local_8 = (undefined *)0xfffffffe;
    local_20 = iVar2;
    FUN_1028604f();
    if (iVar2 != 0) {
      *param_5 = -1;
    }
  }
  ExceptionList = local_14;
  return iVar2;
}

