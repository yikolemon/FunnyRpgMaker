/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c200 */

undefined4 FUN_1022c200(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x2c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  }
  return 0;
}

