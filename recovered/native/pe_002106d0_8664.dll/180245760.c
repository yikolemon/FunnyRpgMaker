/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180245760 */

short FUN_180245760(longlong param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  
  psVar1 = (short *)**(undefined8 **)(param_1 + 0x38);
  if (psVar1 != (short *)0x0) {
    if (psVar1 < psVar1 + **(int **)(param_1 + 0x50)) {
      return *psVar1;
    }
  }
  sVar2 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  sVar3 = -1;
  if (sVar2 != -1) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1,sVar2);
    sVar3 = sVar2;
  }
  return sVar3;
}

