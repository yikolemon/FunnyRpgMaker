/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026db13 */

/* Library Function - Single Match
    __fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __fgetc_nolock(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_10268ffd();
    *puVar3 = 0x16;
    FUN_10273ea8();
    return 0xffffffff;
  }
  piVar1 = param_1 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar4 = FUN_1027f55d(param_1);
    return uVar4;
  }
  bVar2 = *(byte *)*param_1;
  *param_1 = (byte *)*param_1 + 1;
  return (uint)bVar2;
}

