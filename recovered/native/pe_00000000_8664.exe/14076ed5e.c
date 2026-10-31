/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ed5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076ed5e(void)

{
  undefined8 uVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  undefined8 uVar10;
  
  pfVar3 = (float *)(ulonglong)unaff_retaddr;
  iVar2 = *(int *)((ulonglong)unaff_retaddr_00 + 0x4c);
  if (iVar2 < 0) {
    uVar4 = (ulonglong)*(uint *)((ulonglong)unaff_retaddr_00 + 0x3c);
    uVar10 = *(undefined8 *)(uVar4 + 8);
    uVar1 = *(undefined8 *)(uVar4 + 0x10);
    fVar6 = (float)uVar1;
    fVar7 = (float)((ulonglong)uVar1 >> 0x20);
  }
  else {
    uVar4 = (ulonglong)*(uint *)((ulonglong)_DAT_150b0c4b9 + 0xca4);
    uVar5 = (ulonglong)(uint)(iVar2 * 5);
    uVar10 = *(undefined8 *)(uVar4 + 0x10 + uVar5 * 8);
    uVar1 = *(undefined8 *)(uVar4 + 0x18 + uVar5 * 8);
    fVar6 = (float)uVar1;
    fVar7 = (float)((ulonglong)uVar1 >> 0x20);
  }
  fVar8 = (float)uVar10;
  fVar11 = (float)((ulonglong)uVar10 >> 0x20);
  uVar10 = *(undefined8 *)((ulonglong)_DAT_150b0c4b9 + 0xde0);
  fVar9 = (float)uVar10;
  fVar12 = (float)((ulonglong)uVar10 >> 0x20);
  fVar9 = (float)(((uint)fVar9 ^ _DAT_1509fe3dd) & -(uint)(fVar9 + fVar9 < (fVar6 + fVar8) - fVar8))
  ;
  fVar12 = (float)(((uint)fVar12 ^ uRam00000001509fe3e1) &
                  -(uint)(fVar12 + fVar12 < (fVar7 + fVar11) - fVar11));
  *pfVar3 = fVar8 - fVar9;
  pfVar3[1] = fVar11 - fVar12;
  pfVar3[2] = fVar9 + fVar6 + fVar8;
  pfVar3[3] = fVar12 + fVar7 + fVar11;
  return;
}

