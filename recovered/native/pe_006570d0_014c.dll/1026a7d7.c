/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a7d7 */

/* Library Function - Single Match
    wchar_t * __cdecl call_wfullpath(wchar_t * const,wchar_t const * const,unsigned int,wchar_t * *
   const)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl call_wfullpath(wchar_t *param_1,wchar_t *param_2,uint param_3,wchar_t **param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  
  piVar2 = (int *)FUN_10268ffd();
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_10268ffd();
  *puVar3 = 0;
  pwVar4 = __wfullpath(param_1,param_2,param_3);
  piVar2 = (int *)FUN_10268ffd();
  if (pwVar4 == (wchar_t *)0x0) {
    if (*piVar2 == 0x22) {
      piVar2 = (int *)FUN_10268ffd();
      *piVar2 = iVar1;
      pwVar4 = __wfullpath((wchar_t *)0x0,param_2,0);
      *param_4 = pwVar4;
    }
    else {
      pwVar4 = (wchar_t *)0x0;
    }
  }
  else {
    *piVar2 = iVar1;
  }
  return pwVar4;
}

