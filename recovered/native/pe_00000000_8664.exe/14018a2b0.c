/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018a2b0 */

undefined8 FUN_14018a2b0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  DWORD DVar3;
  
  DVar3 = GetCurrentThreadId();
  if ((*param_1 & 0xfffffeff) == 1) {
    if (param_1[0x12] != DVar3) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
      param_1[0x12] = DVar3;
    }
    param_1[0x13] = param_1[0x13] + 1;
    return 0;
  }
  if (param_1[0x12] != DVar3) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
  }
  uVar2 = param_1[0x13];
  uVar1 = uVar2 + 1;
  param_1[0x13] = uVar1;
  if ((int)uVar1 < 2) {
    param_1[0x12] = DVar3;
  }
  else if ((*param_1 & 0x100) == 0) {
    param_1[0x13] = uVar2;
    return 3;
  }
  return 0;
}

