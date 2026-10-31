/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027c14d */

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** __updatetlocinfoEx_nolock(int *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (int *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (int)param_2;
      FUN_1027be03(param_2);
      if (((ppuVar1 != (undefined **)0x0) && (FUN_1027be80(ppuVar1), ppuVar1[3] == (undefined *)0x0)
          ) && (ppuVar1 != &PTR_DAT_1039b408)) {
        FUN_1027bf01(ppuVar1);
      }
    }
  }
  return param_2;
}

