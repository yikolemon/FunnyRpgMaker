/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a1eb */

/* Library Function - Single Match
    int __cdecl find_in_environment_nolock<wchar_t>(wchar_t const * const,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl find_in_environment_nolock<wchar_t>(wchar_t *param_1,uint param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = DAT_103a4e8c;
  iVar3 = *DAT_103a4e8c;
  piVar4 = DAT_103a4e8c;
  while( true ) {
    if (iVar3 == 0) {
      return -((int)piVar4 - (int)piVar2 >> 2);
    }
    iVar3 = FUN_102813e0(param_1,iVar3,param_2);
    if ((iVar3 == 0) && ((sVar1 = *(short *)(*piVar4 + param_2 * 2), sVar1 == 0x3d || (sVar1 == 0)))
       ) break;
    piVar4 = piVar4 + 1;
    iVar3 = *piVar4;
  }
  return (int)piVar4 - (int)piVar2 >> 2;
}

