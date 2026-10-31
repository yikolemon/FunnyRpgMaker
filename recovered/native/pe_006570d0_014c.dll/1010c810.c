/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010c810 */

void FUN_1010c810(float *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  iVar3 = DAT_1039d74c;
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(char *)(iVar2 + 0xfe) == '\0') {
    fVar6 = 0.0;
    if (0.0 <= param_2) {
      fVar4 = (float10)FUN_100fdbca(0,*(float *)(iVar2 + 0x17c) - param_2);
      fVar6 = (float)fVar4;
    }
    fVar1 = *(float *)(iVar2 + 0x148 + (uint)*(byte *)(iVar2 + 0x184) * 8);
    fVar4 = (float10)FUN_100fdbca(*(undefined4 *)(iVar2 + 0x170),
                                  (*(float *)(iVar2 + 0x148) - fVar1) + param_1[1] + fVar6);
    fVar6 = *(float *)(iVar2 + 0x144) + *param_1;
    *(float *)(iVar2 + 0x14c) = fVar6;
    *(float *)(iVar2 + 0x150) = fVar1;
    *(float *)(iVar2 + 0x144) =
         (float)(int)(*(float *)(iVar2 + 0x50) + *(float *)(iVar2 + 0x188) +
                     *(float *)(iVar2 + 0x18c));
    *(float *)(iVar2 + 0x148) = (float)(int)(fVar1 + (float)fVar4 + *(float *)(iVar3 + 0xd20));
    fVar5 = (float10)FUN_100fdbca(*(undefined4 *)(iVar2 + 0x15c),fVar6);
    *(float *)(iVar2 + 0x15c) = (float)fVar5;
    fVar5 = (float10)FUN_100fdbca(*(undefined4 *)(iVar2 + 0x160),
                                  *(float *)(iVar2 + 0x148) - *(float *)(iVar3 + 0xd20));
    *(float *)(iVar2 + 0x160) = (float)fVar5;
    *(float *)(iVar2 + 0x178) = (float)fVar4;
    *(undefined4 *)(iVar2 + 0x170) = 0;
    fVar4 = (float10)FUN_100fdbca(*(undefined4 *)(iVar2 + 0x17c),param_2);
    *(float *)(iVar2 + 0x180) = (float)fVar4;
    *(undefined4 *)(iVar2 + 0x17c) = 0;
    *(undefined2 *)(iVar2 + 0x184) = 0;
    if (*(int *)(iVar2 + 0x1f0) == 0) {
      FUN_10114a0e(0,0xbf800000);
    }
  }
  return;
}

