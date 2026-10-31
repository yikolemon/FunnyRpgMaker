/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400899a0 */

ulonglong FUN_1400899a0(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  uVar2 = (*(code *)PTR__guard_dispatch_icall_1401200f0)();
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  *(int *)param_1[10] = *(int *)param_1[10] + -1;
  pbVar1 = *(byte **)param_1[7];
  *(byte **)param_1[7] = pbVar1 + 1;
  return (ulonglong)*pbVar1;
}

