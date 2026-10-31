/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009474c */

void FUN_14009474c(longlong *param_1)

{
  byte bVar1;
  short *psVar2;
  
  psVar2 = (short *)*param_1;
  if (psVar2 != (short *)param_1[1]) {
    if (*psVar2 == 0x5c) {
      bVar1 = FUN_140093f4e(param_1);
      psVar2 = (short *)((ulonglong)((uint)bVar1 * 2) + *param_1);
    }
    *param_1 = (longlong)(psVar2 + 1);
  }
  FUN_140093d52(param_1);
  return;
}

