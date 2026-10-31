/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407836ab */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407836ab(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  ulonglong unaff_RBX;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_XMM5_Da;
  float fVar11;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  
  uVar3 = _DAT_a8100ff31039d74c;
  pcVar4 = (char *)(ulonglong)_DAT_a8100ff31039d74c;
  *param_2 = *param_2 - (char)param_2;
  *pcVar4 = *pcVar4 + (char)uVar3;
  fVar6 = *(float *)(pcVar4 + 0xd10);
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  fVar8 = (float)((ulonglong)uVar1 >> 0x20);
  fVar9 = fVar6 + fVar6 + fVar8 + in_XMM5_Da;
  fVar10 = *(float *)(param_1 + 0x3c) + (float)uVar1;
  if ((int)param_2 != 0) {
    *(undefined8 *)param_2 = uVar1;
    *(float *)(param_2 + 8) = fVar10;
    *(float *)(param_2 + 0xc) = fVar9;
    in_XMM5_Da = *(float *)(pcVar4 + 0x1228);
    fVar6 = *(float *)(pcVar4 + 0xd10);
  }
  fVar11 = *(float *)(pcVar4 + 0xce0);
  fVar7 = *(float *)(pcVar4 + 0xd0c);
  fVar10 = (fVar10 - fVar11) - fVar7;
  fVar6 = fVar6 + fVar8;
  bVar5 = *(byte *)(param_1 + 0xac);
  if ((bVar5 & 8) != 0) {
    if (unaff_retaddr_00 != 0) {
      *(float *)(ulonglong)unaff_retaddr_00 = fVar10 - in_XMM5_Da;
      ((float *)(ulonglong)unaff_retaddr_00)[1] = fVar6;
      bVar5 = *(byte *)(param_1 + 0xac);
    }
    fVar10 = fVar10 - (*(float *)(pcVar4 + 0xd24) + in_XMM5_Da);
  }
  pfVar2 = (float *)(unaff_RBX >> 0x20);
  fVar7 = (float)uVar1 + fVar11 + fVar7;
  fVar11 = fVar7;
  if ((bVar5 & 0x10) != 0) {
    if (*(int *)(pcVar4 + 0xcf8) == 1) {
      fVar6 = *(float *)(pcVar4 + 0xd10) + fVar8;
      fVar11 = fVar10 - in_XMM5_Da;
      fVar10 = fVar10 - (in_XMM5_Da + *(float *)(pcVar4 + 0xd24));
    }
    else if (*(int *)(pcVar4 + 0xcf8) == 0) {
      fVar7 = in_XMM5_Da + *(float *)(pcVar4 + 0xd24) + fVar7;
    }
  }
  *pfVar2 = fVar7;
  pfVar2[1] = fVar8;
  pfVar2[2] = fVar10;
  pfVar2[3] = fVar9;
  if (unaff_retaddr != 0) {
    *(float *)(ulonglong)unaff_retaddr = fVar11;
    ((float *)(ulonglong)unaff_retaddr)[1] = fVar6;
  }
  return;
}

