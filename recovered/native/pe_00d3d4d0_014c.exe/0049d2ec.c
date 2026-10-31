/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049d2ec */

/* Library Function - Single Match
    int __cdecl find_in_environment_nolock<wchar_t>(wchar_t const * const,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl find_in_environment_nolock<wchar_t>(wchar_t *param_1,uint param_2)

{
  short sVar1;
  PCNZWCH pWVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = DAT_00521928;
  pWVar2 = (PCNZWCH)*DAT_00521928;
  piVar5 = DAT_00521928;
  while( true ) {
    if (pWVar2 == (PCNZWCH)0x0) {
      return -((int)piVar5 - (int)piVar3 >> 2);
    }
    iVar4 = FUN_004a16a0(param_1,pWVar2,param_2);
    if ((iVar4 == 0) && ((sVar1 = *(short *)(*piVar5 + param_2 * 2), sVar1 == 0x3d || (sVar1 == 0)))
       ) break;
    piVar5 = piVar5 + 1;
    pWVar2 = (PCNZWCH)*piVar5;
  }
  return (int)piVar5 - (int)piVar3 >> 2;
}

