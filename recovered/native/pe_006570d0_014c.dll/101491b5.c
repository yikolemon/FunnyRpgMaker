/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101491b5 */

void FUN_101491b5(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  iVar3 = DAT_1039d74c;
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  fVar5 = (float10)FUN_100fdbca(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar2 + 0x290));
  fVar8 = *(float *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 6) & 8) != 0) {
    fVar9 = *(float *)(iVar2 + 0x148);
    if (*(int *)(iVar3 + 0x2308) != 0) {
      fVar6 = (float10)FUN_100fdbca(*(undefined4 *)(*(int *)(iVar3 + 0x2308) + 0x54),fVar9);
      fVar9 = (float)fVar6;
    }
    fVar9 = (float)(int)(*(float *)(iVar3 + 0x1228) * DAT_102b8d58 +
                        (fVar9 - *(float *)(iVar3 + 0xd20)));
    uVar7 = -(uint)(*(float *)(iVar3 + 0xd20) + *(float *)(iVar3 + 0xd98) + fVar8 < fVar9);
    fVar8 = (float)(~uVar7 & (uint)fVar8 | (uint)fVar9 & uVar7);
  }
  fVar6 = (float10)FUN_100ea38a(fVar8,*(undefined4 *)(iVar2 + 0x298));
  if ((float)fVar5 < (float)fVar6) {
    fVar8 = *(float *)(param_1 + 0x1c);
    if (*(short *)(param_1 + 0x24) != -1) {
      FUN_1016593a((int)*(short *)(param_1 + 0x24));
    }
    uVar1 = *(undefined4 *)(iVar3 + 0xd94);
    uVar4 = FUN_100fcb39(0x37,0x3f800000);
    FUN_1018b5da((float)(int)fVar8,(float)fVar5,(float)fVar6,uVar4,uVar1);
    if (*(short *)(param_1 + 0x24) != -1) {
      FUN_10165986();
      return;
    }
  }
  return;
}

