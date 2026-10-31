/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140116058 */

/* Library Function - Single Match
    _fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _fgetc_nolock(undefined8 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 0x16;
    FUN_140120ee8();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_14012d998();
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}

