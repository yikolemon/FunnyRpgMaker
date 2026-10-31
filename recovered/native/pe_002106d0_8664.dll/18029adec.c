/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029adec */

/* Library Function - Single Match
    TranslateName
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool TranslateName(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  iVar1 = 1;
  if (-1 < param_2) {
    do {
      if (iVar1 == 0) {
        return true;
      }
      iVar1 = (iVar3 + param_2) / 2;
      iVar2 = FUN_180280970(*param_3,*(undefined8 *)((longlong)iVar1 * 0x10 + param_1));
      if (iVar2 == 0) {
        *param_3 = param_1 + 8 + (longlong)iVar1 * 0x10;
      }
      else if (iVar2 < 0) {
        param_2 = iVar1 + -1;
      }
      else {
        iVar3 = iVar1 + 1;
      }
      iVar1 = iVar2;
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}

