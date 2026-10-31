/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028002c */

/* Library Function - Single Match
    unsigned short __cdecl convert_to_stat_mode(int,wchar_t const * __ptr64 const)
   
   Library: Visual Studio 2019 Release */

ushort __cdecl convert_to_stat_mode(int param_1,wchar_t *param_2)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  ushort uVar7;
  
  bVar2 = true;
  if (((uint)param_1 >> 4 & 1) == 0) {
    if (param_2 != (wchar_t *)0x0) {
      if (((0x19 < (ushort)(*param_2 + L'﾿')) &&
          (((ushort)*param_2 < 0x61 || (0x7a < (ushort)*param_2)))) ||
         (bVar1 = true, param_2[1] != L':')) {
        bVar1 = false;
      }
      pwVar6 = param_2;
      if (bVar1) {
        pwVar6 = param_2 + 2;
      }
      if ((*pwVar6 == L'\0') || (((*pwVar6 == L'\\' || (*pwVar6 == L'/')) && (pwVar6[1] == L'\0'))))
      goto LAB_1802800aa;
    }
    uVar7 = 0x8100;
  }
  else {
LAB_1802800aa:
    uVar7 = 0x4140;
  }
  uVar7 = ~((short)param_1 << 7) & 0x80U | uVar7;
  if (param_2 != (wchar_t *)0x0) {
    lVar5 = FUN_180298b70(param_2,0x2e);
    if (lVar5 != 0) {
      iVar4 = FUN_180280970(lVar5,L".exe");
      if (iVar4 == 0) goto LAB_180280128;
      iVar4 = FUN_180280970(lVar5,L".cmd");
      if (iVar4 == 0) goto LAB_180280128;
      iVar4 = FUN_180280970(lVar5,L".bat");
      if (iVar4 == 0) goto LAB_180280128;
      iVar4 = FUN_180280970(lVar5,L".com");
      if (iVar4 == 0) goto LAB_180280128;
    }
  }
  bVar2 = false;
LAB_180280128:
  uVar3 = uVar7 | 0x40;
  if (!bVar2) {
    uVar3 = uVar7;
  }
  return uVar3 >> 6 & 7 | uVar3 >> 3 & 0x38 | uVar3;
}

