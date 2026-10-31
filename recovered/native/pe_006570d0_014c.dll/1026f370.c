/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026f370 */

/* Library Function - Single Match
    wchar_t * __cdecl common_getenv_nolock<wchar_t>(wchar_t const * const)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl common_getenv_nolock<wchar_t>(wchar_t *param_1)

{
  wchar_t wVar1;
  short sVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  wchar_t *pwVar7;
  uint uVar8;
  
  piVar4 = (int *)thunk_FUN_10269a14();
  if ((piVar4 != (int *)0x0) && (param_1 != (wchar_t *)0x0)) {
    pwVar7 = param_1;
    do {
      wVar1 = *pwVar7;
      pwVar7 = pwVar7 + 1;
    } while (wVar1 != L'\0');
    uVar8 = (int)pwVar7 - (int)(param_1 + 1) >> 1;
    for (; psVar3 = (short *)*piVar4, psVar3 != (short *)0x0; piVar4 = piVar4 + 1) {
      psVar6 = psVar3;
      do {
        sVar2 = *psVar6;
        psVar6 = psVar6 + 1;
      } while (sVar2 != 0);
      if (((uVar8 < (uint)((int)psVar6 - (int)(psVar3 + 1) >> 1)) && (psVar3[uVar8] == 0x3d)) &&
         (iVar5 = FUN_102813e0(psVar3,param_1,uVar8), iVar5 == 0)) {
        return (wchar_t *)(*piVar4 + uVar8 * 2 + 2);
      }
    }
  }
  return (wchar_t *)0x0;
}

