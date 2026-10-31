/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dd970 */

undefined8 FUN_1400dd970(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  }
  return 0;
}

