/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752bbd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140752bbd(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  uint unaff_retaddr;
  uint local_res8;
  
  pfVar1 = (float *)(ulonglong)unaff_retaddr;
  uVar5 = CONCAT44(local_res8,local_res8 >> 8 & _DAT_150a0b5d3) & 0xffffffffff;
  fVar2 = (float)(int)uVar5 * fRam0000000150a0b60d;
  fVar3 = (float)(local_res8 >> 0x10 & uRam0000000150a0b5d7) * fRam0000000150a0b611;
  fVar4 = (float)(local_res8 >> 0x18) * fRam0000000150a0b615;
  *pfVar1 = (float)(int)(uVar5 >> 0x20) * _DAT_150a0b609;
  pfVar1[1] = fVar2;
  pfVar1[2] = fVar3;
  pfVar1[3] = fVar4;
  return;
}

