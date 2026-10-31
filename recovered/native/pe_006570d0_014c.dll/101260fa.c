/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101260fa */

void __fastcall FUN_101260fa(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 local_80;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  float fStack_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (0xffffff < param_2) {
    iVar6 = *(int *)(param_1 + 0x3c);
    fVar4 = *(float *)(iVar6 + 8);
    fVar5 = *(float *)(iVar6 + 0xc);
    fVar8 = (float)*(undefined8 *)(iVar6 + 0x10) + fVar4;
    fVar9 = (float)((ulonglong)*(undefined8 *)(iVar6 + 0x10) >> 0x20) + fVar5;
    piVar3 = *(int **)(*(int *)(param_1 + 0x3b0) + 0x2e8);
    local_28 = fVar4;
    fStack_24 = fVar5;
    fStack_20 = fVar8;
    fStack_1c = fVar9;
    FUN_10187968(piVar3);
    if (*piVar3 == 0) {
      FUN_10187d74();
    }
    local_70 = CONCAT44(fVar9 + DAT_102b70a0._4_4_,fVar8 + (float)DAT_102b70a0);
    local_80 = CONCAT44(fVar5 + DAT_102b89a0._4_4_,fVar4 + (float)DAT_102b89a0);
    FUN_101881b4(&local_80,&local_70,0);
    FUN_1018b85a(&local_28,&fStack_20,param_2,0,0);
    iVar6 = piVar3[2];
    iVar7 = *piVar3 * 0x40;
    puVar1 = (undefined4 *)(iVar6 + -0x10 + iVar7);
    local_40 = *puVar1;
    uStack_3c = puVar1[1];
    uStack_38 = puVar1[2];
    uStack_34 = puVar1[3];
    puVar1 = (undefined4 *)(iVar6 + -0x20 + iVar7);
    local_50 = *puVar1;
    uStack_4c = puVar1[1];
    uStack_48 = puVar1[2];
    uStack_44 = puVar1[3];
    puVar2 = (undefined8 *)(iVar6 + -0x40 + iVar7);
    local_70 = *puVar2;
    fStack_68 = *(float *)(puVar2 + 1);
    fStack_64 = *(float *)((int)puVar2 + 0xc);
    puVar1 = (undefined4 *)(iVar6 + -0x30 + iVar7);
    local_60 = *puVar1;
    uStack_5c = puVar1[1];
    uStack_58 = puVar1[2];
    uStack_54 = puVar1[3];
    *piVar3 = *piVar3 + -1;
    FUN_101262e4(&local_70);
    FUN_10187d74();
    FUN_10188384();
    if ((*(byte *)(*(int *)(param_1 + 0x3a8) + 0x409) & 1) != 0) {
      iVar6 = FUN_1010cb94(*(undefined4 *)(param_1 + 0x3b0));
      piVar3 = *(int **)(iVar6 + 0x2e8);
      FUN_10187968(piVar3);
      if (*piVar3 == 0) {
        FUN_10187d74();
      }
      FUN_101881b4(&local_28,&fStack_20,0);
      iVar6 = *(int *)(param_1 + 0x3a8);
      local_70 = *(undefined8 *)(iVar6 + 0x50);
      fStack_68 = (float)*(undefined8 *)(iVar6 + 0x58) + *(float *)(iVar6 + 0x50);
      fStack_64 = (float)((ulonglong)*(undefined8 *)(iVar6 + 0x58) >> 0x20) +
                  *(float *)(iVar6 + 0x54);
      iVar6 = *(int *)(param_1 + 0x3b0);
      local_80 = *(undefined8 *)(iVar6 + 0x50);
      fStack_78 = (float)*(undefined8 *)(iVar6 + 0x58) + *(float *)(iVar6 + 0x50);
      fStack_74 = (float)((ulonglong)*(undefined8 *)(iVar6 + 0x58) >> 0x20) +
                  *(float *)(iVar6 + 0x54);
      FUN_10194ac6(piVar3,&local_80,&local_70,param_2,0);
      FUN_10188384();
    }
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

