/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10162723 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10162723(int param_1)

{
  short sVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  int local_60;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  char local_26;
  char local_25;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_60;
  if (*(short *)(param_1 + 0x4c) == 0) {
    iVar6 = param_1 + 0x16c;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x18c) + *(short *)(param_1 + 0x4c) * 0x18 + -0x18;
  }
  local_58 = DAT_1039d74c;
  local_48 = *(float *)(DAT_1039d74c + 0x1238);
  fStack_44 = 0.0;
  fStack_40 = 0.0;
  fStack_3c = 0.0;
  local_5c = *(float *)(param_1 + 200 + (uint)(*(short *)(param_1 + 0x1de) < 1) * 0x20) +
             *(float *)(param_1 + 0xbc);
  fVar8 = (float10)FUN_100fdbca(*(undefined4 *)(param_1 + 0xd0),
                                (*(float *)(iVar6 + 4) + local_5c) - *(float *)(param_1 + 0xbc));
  local_4c = (float)fVar8;
  local_60 = *(int *)(param_1 + 0x40);
  if (0 < local_60) {
    local_38 = (float)(int)(local_48 * DAT_102b8cb0);
    fStack_34 = (float)(int)fStack_44;
    fStack_30 = (float)(int)fStack_40;
    fStack_2c = (float)(int)fStack_3c;
    local_54 = *(float *)(iVar6 + 8) + local_5c;
    uVar5 = 0;
    local_50 = local_4c;
    do {
      if ((*(uint *)(*(int *)(param_1 + 0x28) + (uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
        sVar1 = *(short *)(*(int *)(param_1 + 0x18) + uVar5 * 2);
        iVar6 = (int)sVar1;
        if ((((*(uint *)(*(int *)(param_1 + 0x10) + iVar6 * 0x74) & 0x40000020) == 0) &&
            ((iVar7 = *(int *)(param_1 + 0x10) + iVar6 * 0x74, fVar2 = local_50,
             (*(byte *)(param_1 + 5) & 8) == 0 ||
             (fVar2 = local_54, *(char *)(param_1 + 0x1f1) != '\0')))) &&
           ((*(char *)(iVar7 + 0x69) != '\0' || (*(short *)(param_1 + 0x1c8) == sVar1)))) {
          local_60 = CONCAT22(local_60._2_2_,sVar1);
          local_48 = fVar2;
          uVar4 = FUN_10162ffc(param_1,iVar6,(int)*(short *)(param_1 + 0x4c));
          local_24 = *(float *)(iVar7 + 0xc);
          local_1c = local_24 + local_38;
          local_24 = local_24 - local_38;
          local_20 = local_5c;
          local_18 = local_48;
          FUN_1010c9d8(&local_24,uVar4,0,2);
          local_25 = '\0';
          local_26 = '\0';
          cVar3 = FUN_1012d77e(&local_24,uVar4,&local_25,&local_26,0x40910);
          if ((cVar3 != '\0') && (cVar3 = FUN_10113f85(0), cVar3 != '\0')) {
            FUN_10163029(param_1,iVar6);
            FUN_101028d8();
            local_26 = '\0';
          }
          if (local_26 == '\x01') {
            if (*(short *)(param_1 + 0x1c8) == -1) {
              uVar4 = DAT_102b89b0;
              if (*(short *)(param_1 + 0x1d4) != -1) {
                uVar4 = *(undefined4 *)
                         (*(int *)(param_1 + 0x10) + 0xc + *(short *)(param_1 + 0x1d4) * 0x74);
              }
              *(undefined4 *)(param_1 + 0xb4) = uVar4;
            }
            *(undefined2 *)(param_1 + 0x1c6) = (undefined2)local_60;
            *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(param_1 + 0x4c);
LAB_10162980:
            *(undefined2 *)(param_1 + 0x1c0) = (undefined2)local_60;
            FUN_10114115(4);
          }
          else if ((local_25 == '\x01') && (_DAT_102b9bb0 < *(float *)(local_58 + 0x151c)))
          goto LAB_10162980;
          local_60 = *(int *)(param_1 + 0x40);
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < local_60);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_60)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

