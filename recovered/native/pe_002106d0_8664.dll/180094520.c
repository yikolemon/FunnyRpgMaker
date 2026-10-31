/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094520 */

void FUN_180094520(longlong *param_1)

{
  byte bVar1;
  short *psVar2;
  
  psVar2 = (short *)*param_1;
  if (psVar2 != (short *)param_1[1]) {
    if (*psVar2 == 0x5c) {
      bVar1 = FUN_180094146(param_1);
      psVar2 = (short *)((ulonglong)((uint)bVar1 * 2) + *param_1);
    }
    *param_1 = (longlong)(psVar2 + 1);
  }
  FUN_180093fb2(param_1);
  return;
}

