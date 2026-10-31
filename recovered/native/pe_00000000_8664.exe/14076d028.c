/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076d028 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076d028(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  float unaff_retaddr;
  
  uVar2 = (ulonglong)_DAT_150b0a780;
  *(undefined1 *)((ulonglong)*(uint *)(uVar2 + 0x14cc) + 0xfb) = 1;
  uVar1 = (ulonglong)*(uint *)(uVar2 + 0x14cc);
  if ((unaff_retaddr == 0.0) && (!NAN(unaff_retaddr))) {
    unaff_retaddr = *(float *)(uVar2 + 0xd3c);
  }
  fVar3 = unaff_retaddr + *(float *)(uVar1 + 0x188);
  *(float *)(uVar1 + 0x188) = fVar3;
  *(float *)(uVar1 + 0x144) = fVar3 + *(float *)(uVar1 + 0x50) + *(float *)(uVar1 + 0x18c);
  return;
}

