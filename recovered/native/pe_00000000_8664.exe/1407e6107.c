/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e6107 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e6107(void)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  ulonglong unaff_RDI;
  float fVar4;
  float fVar5;
  float fVar6;
  int unaff_retaddr;
  int unaff_retaddr_00;
  uint local_res8;
  float local_resc;
  float local_res10;
  uint local_res14;
  
  if (unaff_retaddr < unaff_retaddr_00) {
    iVar1 = *(int *)((unaff_RDI >> 0x20) + 0x20);
    uVar2 = iVar1 + unaff_retaddr * 0x14;
    fVar4 = (float)(_DAT_150a75763 ^ (uint)local_res10);
    do {
      pfVar3 = (float *)(ulonglong)uVar2;
      fVar6 = pfVar3[1] - ((float *)(ulonglong)local_res8)[1];
      fVar5 = *pfVar3 - *(float *)(ulonglong)local_res8;
      *(ulonglong *)pfVar3 =
           CONCAT44((float)((ulonglong)*(undefined8 *)(ulonglong)local_res14 >> 0x20) +
                    fVar5 * local_res10 + fVar6 * local_resc,
                    (float)*(undefined8 *)(ulonglong)local_res14 +
                    fVar5 * local_resc + fVar6 * fVar4);
      uVar2 = uVar2 + 0x14;
    } while (uVar2 < (uint)(iVar1 + unaff_retaddr_00 * 0x14));
  }
  return;
}

