/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078a0b9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078a0b9(void)

{
  byte *pbVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char *pcVar6;
  byte bVar7;
  char *pcVar8;
  longlong unaff_RBX;
  float *pfVar9;
  longlong unaff_RDI;
  
  pfVar9 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xb0);
  fVar4 = pfVar9[0x33];
  fVar5 = pfVar9[0x32];
  pcVar8 = (char *)(ulonglong)(uint)fVar5;
  pcVar6 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffffac);
  *pcVar6 = *pcVar6 + (char)pcVar6;
  pbVar1 = (byte *)(unaff_RBX + 0x39d74c1d);
  bVar2 = *pbVar1;
  bVar7 = SUB41(fVar5,0);
  *pbVar1 = *pbVar1 + bVar7;
  *(char *)(unaff_RBX + 0x14ccbb) = *(char *)(unaff_RBX + 0x14ccbb) + bVar7 + CARRY1(bVar2,bVar7);
  *pcVar8 = *pcVar8 + (char)((uint)fVar4 >> 8);
  pbVar1 = (byte *)(pcVar8 + -0x76f3dbbc);
  *pbVar1 = *pbVar1 >> 4 | *pbVar1 << 4;
  pfVar9[1] = fVar5;
  *pfVar9 = (float)(int)(pfVar9 + 0x29);
  pfVar9[4] = -1.0;
  pfVar9[-2] = 3.8848305;
  pfVar9[-1] = 1.4013e-45;
  FUN_1407559fe();
  *(undefined1 (*) [16])(pfVar9 + 0x13) = ZEXT416(*(uint *)(unaff_RDI + 0x148));
  fVar4 = *(float *)(unaff_RBX + 0xdc4);
  *(undefined1 (*) [16])(pfVar9 + 0xc) = ZEXT416(*(uint *)(unaff_RBX + 0xdd0));
  fVar5 = *(float *)(unaff_RBX + 0xdd4);
  fVar3 = *(float *)(((ulonglong)(pfVar9 + 0x29) & 0xffffffff) + 4);
  pfVar9[9] = fVar4;
  pfVar9[1] = fVar4;
  *pfVar9 = fVar5 + fVar5 + fVar3;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar9 + -2) = &UNK_14078a169;
  FUN_140755a9a();
}

