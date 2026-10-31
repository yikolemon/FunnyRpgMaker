/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005ddac */

void FUN_14005ddac(longlong *param_1)

{
  byte bVar1;
  short *psVar2;
  
  psVar2 = (short *)*param_1;
  if (psVar2 != (short *)param_1[1]) {
    if (*psVar2 == 0x5c) {
      bVar1 = FUN_14005d5ae(param_1);
      psVar2 = (short *)((ulonglong)((uint)bVar1 * 2) + *param_1);
    }
    *param_1 = (longlong)(psVar2 + 1);
  }
  FUN_14005d41a(param_1);
  return;
}

