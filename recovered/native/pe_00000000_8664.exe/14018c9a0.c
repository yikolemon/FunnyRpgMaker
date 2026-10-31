/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018c9a0 */

short FUN_14018c9a0(longlong param_1)

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
  sVar2 = (*(code *)PTR__guard_dispatch_icall_140ee15d0)();
  sVar3 = -1;
  if (sVar2 != -1) {
    (*(code *)PTR__guard_dispatch_icall_140ee15d0)(param_1,sVar2);
    sVar3 = sVar2;
  }
  return sVar3;
}

