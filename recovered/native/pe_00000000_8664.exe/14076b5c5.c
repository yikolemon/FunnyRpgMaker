/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b5c5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076b5c5(void)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  undefined4 local_res8;
  
  pfVar2 = (float *)(ulonglong)unaff_retaddr_00;
  uVar1 = (ulonglong)_DAT_150b08d24;
  fVar3 = *(float *)(uVar1 + 0x94);
  if ((unaff_retaddr & 0xe) == 8) {
    *pfVar2 = fVar3 * _DAT_150a243a3;
    fVar3 = *(float *)(uVar1 + 0x98) * _DAT_150a243bb;
  }
  else if ((unaff_retaddr & 0xe) == 4) {
    *pfVar2 = fVar3 * _DAT_150a24385;
    fVar3 = *(float *)(uVar1 + 0x98) * _DAT_150a2271d;
  }
  else {
    *pfVar2 = fVar3;
    fVar3 = *(float *)(uVar1 + 0x98);
  }
  *(float *)(ulonglong)local_res8 = fVar3;
  return;
}

