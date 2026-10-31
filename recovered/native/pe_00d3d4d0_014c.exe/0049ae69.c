/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ae69 */

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** __cdecl __updatetlocinfoEx_nolock(int *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (int *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (int)param_2;
      FUN_0049ab1f((int)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (FUN_0049ab9c((int)ppuVar1), ppuVar1[3] == (undefined *)0x0)) &&
         (ppuVar1 != &PTR_DAT_0051ae88)) {
        FUN_0049ac1d((int)ppuVar1);
      }
    }
  }
  return param_2;
}

