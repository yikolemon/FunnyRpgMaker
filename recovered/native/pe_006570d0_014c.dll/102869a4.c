/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102869a4 */

/* Library Function - Single Match
    int __cdecl common_xtox_s<unsigned long,wchar_t>(unsigned long,wchar_t * const,unsigned
   int,unsigned int,bool)
   
   Library: Visual Studio 2019 Release */

int __cdecl
common_xtox_s<unsigned_long,wchar_t>
          (ulong param_1,wchar_t *param_2,uint param_3,uint param_4,bool param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined3 in_stack_00000015;
  int iVar3;
  
  if (param_2 == (wchar_t *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return 0x16;
  }
  if (param_3 != 0) {
    *param_2 = L'\0';
    if (param_3 <= param_5 + 1) {
      piVar2 = (int *)FUN_10268ffd();
      iVar3 = 0x22;
      goto LAB_102869f7;
    }
    if (param_4 - 2 < 0x23) {
      iVar3 = FUN_10286a16(param_1,param_2,param_3,param_4,_param_5);
      return iVar3;
    }
  }
  piVar2 = (int *)FUN_10268ffd();
  iVar3 = 0x16;
LAB_102869f7:
  *piVar2 = iVar3;
  FUN_10273ea8();
  return iVar3;
}

