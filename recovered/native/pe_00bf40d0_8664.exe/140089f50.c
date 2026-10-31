/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140089f50 */

ulonglong FUN_140089f50(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[10])) {
    return (ulonglong)*pbVar1;
  }
  uVar2 = (*(code *)PTR__guard_dispatch_icall_1401200f0)();
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  (*(code *)PTR__guard_dispatch_icall_1401200f0)(param_1,uVar2 & 0xffffffff);
  return uVar2 & 0xffffffff;
}

