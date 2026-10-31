/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140104aa0 */

short FUN_140104aa0(longlong param_1)

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
  sVar2 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
  sVar3 = -1;
  if (sVar2 != -1) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(param_1,sVar2);
    sVar3 = sVar2;
  }
  return sVar3;
}

