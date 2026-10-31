/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483a10 */

undefined4 __cdecl FUN_00483a10(int param_1)

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

