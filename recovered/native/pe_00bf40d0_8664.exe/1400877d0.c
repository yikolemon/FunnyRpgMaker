/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400877d0 */

short FUN_1400877d0(longlong *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  
  psVar1 = *(short **)param_1[7];
  if ((psVar1 != (short *)0x0) && (psVar1 < psVar1 + *(int *)param_1[10])) {
    return *psVar1;
  }
  sVar2 = (*(code *)PTR__guard_dispatch_icall_1401200f0)();
  sVar3 = -1;
  if (sVar2 != -1) {
    (*(code *)PTR__guard_dispatch_icall_1401200f0)(param_1,sVar2);
    sVar3 = sVar2;
  }
  return sVar3;
}

