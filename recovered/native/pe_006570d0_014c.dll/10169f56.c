/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10169f56 */

void FUN_10169f56(void)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  float *pfVar12;
  float *local_80;
  float *local_7c;
  float *local_78;
  char *local_74;
  undefined4 local_70;
  float *local_6c;
  uint local_68;
  int local_64;
  float local_60;
  float *local_5c;
  int *local_58;
  float *local_54;
  int local_50;
  int local_4c;
  float local_48;
  float *local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_26;
  byte local_25;
  float local_24;
  float local_20;
  float local_1c;
  float *local_18;
  uint local_14;
  
  local_4c = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_80;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar7 = *(int *)(local_4c + 0x14cc);
  piVar9 = *(int **)(iVar7 + 0x1e8);
  FUN_101154f4();
  if (1 < piVar9[4]) {
    FUN_1010a588();
    local_80 = *(float **)(iVar7 + 0x2e8);
    FUN_10187968();
  }
  uVar1 = piVar9[1];
  local_7c = *(float **)(iVar7 + 0x148);
  local_80 = (float *)piVar9[8];
  fVar11 = (float10)FUN_100fdbca();
  local_3c = (float)fVar11;
  piVar9[8] = (int)local_3c;
  *(float *)(iVar7 + 0x148) = local_3c;
  if ((uVar1 & 0x10) == 0) {
    *(int *)(iVar7 + 0x15c) = piVar9[10];
  }
  uVar4 = 0;
  local_68 = uVar1;
  if ((uVar1 & 1) == 0) {
    if (*(char *)(iVar7 + 0xfe) == '\0') {
      local_7c = *(float **)(iVar7 + 0x290);
      local_80 = (float *)piVar9[9];
      fVar11 = (float10)FUN_100fdbca();
      local_60 = (float)fVar11;
      local_80 = *(float **)(iVar7 + 0x148);
      local_7c = *(float **)(iVar7 + 0x298);
      local_40 = local_60;
      fVar11 = (float10)FUN_100ea38a();
      local_44 = (float *)(float)fVar11;
      if (1 < piVar9[4]) {
        local_54 = (float *)(DAT_1028b430 + local_60);
        pfVar8 = (float *)0x1;
        local_6c = (float *)0xffffffff;
        iVar10 = 0x24;
        local_64 = iVar7;
        local_5c = local_44;
        local_58 = piVar9;
        do {
          local_50 = piVar9[0x19];
          local_38 = *(float *)(iVar7 + 0x50);
          uStack_34 = 0;
          uStack_30 = 0;
          uStack_2c = 0;
          local_80 = pfVar8;
          fVar11 = (float10)FUN_1016905b();
          local_48 = (float)fVar11;
          local_38 = local_38 + local_48;
          iVar6 = *piVar9;
          local_24 = (float)(int)(*(float *)(local_4c + 0x1238) * DAT_102b8cb0);
          local_1c = local_38 + local_24;
          local_24 = local_38 - local_24;
          local_20 = local_60;
          local_18 = local_5c;
          local_80 = &local_24;
          local_74 = (char *)0x2;
          local_78 = (float *)0x0;
          pfVar12 = local_5c;
          local_7c = (float *)(iVar6 + (int)pfVar8);
          cVar5 = FUN_1010c9d8();
          iVar7 = local_64;
          if (cVar5 != '\0') {
            local_25 = 0;
            local_26 = '\0';
            if ((local_68 & 2) == 0) {
              local_74 = &local_26;
              local_78 = (float *)&local_25;
              local_80 = &local_24;
              local_70 = 0;
              local_7c = (float *)(iVar6 + (int)pfVar8);
              FUN_1012d77e();
              if ((local_25 == 0) && (local_26 == '\0')) goto LAB_1016a1c7;
              local_80 = (float *)0x4;
              FUN_10114115();
              if (local_26 == '\0') goto LAB_1016a1c7;
              if ((*(byte *)(local_50 + iVar10) & 2) == 0) {
                local_6c = pfVar8;
              }
              local_80 = (float *)0x1e;
            }
            else {
LAB_1016a1c7:
              local_80 = (float *)(local_25 | 0x1c);
            }
            local_7c = (float *)0x3f800000;
            local_74 = (char *)FUN_100fcb39();
            iVar7 = local_64;
            pfVar12 = (float *)(float)(int)local_38;
            local_70 = 0x3f800000;
            local_78 = local_5c;
            local_7c = local_54;
            local_80 = pfVar12;
            FUN_1018b5da();
            piVar9 = local_58;
          }
          pfVar3 = local_6c;
          pfVar8 = (float *)((int)pfVar8 + 1);
          iVar10 = iVar10 + 0x1c;
        } while ((int)pfVar8 < piVar9[4]);
        if (local_6c != (float *)0xffffffff) {
          if ((-1 < piVar9[4]) && (*(char *)((int)piVar9 + 9) == '\0')) {
            iVar10 = -1;
            iVar6 = 4;
            do {
              pfVar12 = *(float **)(piVar9[0x19] + -4 + iVar6);
              *(float **)(piVar9[0x19] + iVar6) = pfVar12;
              iVar10 = iVar10 + 1;
              iVar6 = iVar6 + 0x1c;
            } while (iVar10 < piVar9[4]);
          }
          *(undefined1 *)((int)piVar9 + 9) = 1;
          FUN_1016a2fa();
          local_80 = pfVar3;
          local_7c = pfVar12;
          FUN_1016913e();
          uVar4 = 1;
          goto LAB_1016a28e;
        }
      }
    }
    uVar4 = 0;
  }
LAB_1016a28e:
  *(undefined1 *)((int)piVar9 + 9) = uVar4;
  *(undefined4 *)(iVar7 + 0x26c) = *(undefined4 *)(iVar7 + 0x27c);
  *(undefined4 *)(iVar7 + 0x270) = *(undefined4 *)(iVar7 + 0x280);
  *(undefined4 *)(iVar7 + 0x274) = *(undefined4 *)(iVar7 + 0x284);
  *(undefined4 *)(iVar7 + 0x278) = *(undefined4 *)(iVar7 + 0x288);
  iVar10 = piVar9[0x14];
  iVar6 = piVar9[0x15];
  iVar2 = piVar9[0x16];
  *(int *)(iVar7 + 0x27c) = piVar9[0x13];
  *(int *)(iVar7 + 0x280) = iVar10;
  *(int *)(iVar7 + 0x284) = iVar6;
  *(int *)(iVar7 + 0x288) = iVar2;
  *(undefined4 *)(iVar7 + 0x1e8) = 0;
  *(undefined4 *)(iVar7 + 0x18c) = 0;
  *(float *)(iVar7 + 0x144) = (float)(int)(*(float *)(iVar7 + 0x50) + *(float *)(iVar7 + 0x188));
  FUN_1011728b();
  if (DAT_10388d00 != (local_14 ^ (uint)&local_80)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

