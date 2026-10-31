/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010e531 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1010e531(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float local_54 [4];
  undefined8 local_44;
  float local_3c;
  float local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)local_54;
  FUN_10116e8e(&local_24,param_2);
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((uVar1 >> 0x1c & 1) == 0) {
    if ((uVar1 >> 0x1a & 1) == 0) {
      if ((uVar1 >> 0x19 & 1) == 0) {
        *param_1 = *(undefined8 *)(param_2 + 0x50);
        goto LAB_1010e647;
      }
      local_54[0] = *(float *)(iVar3 + 0xdf0);
      local_54[1] = 0.0;
      local_54[2] = 0.0;
      local_54[3] = 0.0;
      FUN_10116108();
      if ((*(int *)(iVar3 + 0xfc) == 1) && (iVar4 = FUN_10116f08(), iVar4 == 1)) {
        fVar9 = (float)*(undefined8 *)(param_2 + 0x58);
        fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
        fVar7 = local_54[0] * 0.0 + local_3c + (float)DAT_102b8cc0 * fVar9;
        fVar8 = DAT_102b70b0 * local_54[0] + local_38 +
                (float)((ulonglong)DAT_102b8cc0 >> 0x20) * fVar6;
        *param_1 = CONCAT44(fVar8,fVar7);
        auVar2._4_4_ = -(uint)(fStack_20 <= fVar8);
        auVar2._0_4_ = -(uint)(local_24 <= fVar7);
        auVar2._8_4_ = -(uint)(fVar9 + fVar7 <= fStack_1c);
        auVar2._12_4_ = -(uint)(fVar6 + fVar8 <= fStack_18);
        iVar4 = movmskps(1,auVar2);
        if (iVar4 == 0xf) goto LAB_1010e647;
      }
      local_44 = CONCAT44((float)((ulonglong)DAT_102b8cd0 >> 0x20) * local_54[0] + local_38,
                          (float)DAT_102b8cd0 * local_54[0] + local_3c);
      if (((*(char *)(iVar3 + 0x2040) != '\x01') || (*(char *)(iVar3 + 0x2041) != '\x01')) ||
         (uVar10 = DAT_102b8ce0, *(char *)(iVar3 + 0x66) != '\0')) {
        uVar10 = CONCAT44(local_54[0] * _UNK_102b8cf4,local_54[0] * _DAT_102b8cf0);
      }
      uStack_2c = CONCAT44((float)((ulonglong)uVar10 >> 0x20) + local_38,(float)uVar10 + local_3c);
      local_34 = CONCAT44(local_38 + _UNK_102b8d04,local_3c + _DAT_102b8d00);
      puVar5 = &local_44;
      uVar11 = 2;
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x50);
      uStack_2c = *(undefined8 *)(param_2 + 0x50);
      local_34 = *(undefined8 *)(param_2 + 0x50);
      uVar11 = 0;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x3a0);
    if (*(char *)(iVar4 + 0x1a7) == '\x01') {
      fVar7 = DAT_102b89b0;
      fVar8 = *(float *)(iVar4 + 0x290);
      fVar9 = *(float *)(iVar4 + 0x298);
      fVar6 = DAT_102b89b4;
    }
    else {
      fVar6 = ((*(float *)(iVar4 + 0x58) + *(float *)(iVar4 + 0x50)) - *(float *)(iVar3 + 0xd24)) -
              *(float *)(iVar4 + 0xec);
      fVar7 = *(float *)(iVar3 + 0xd24) + *(float *)(iVar4 + 0x50);
      fVar8 = DAT_102b89b0;
      fVar9 = DAT_102b89b4;
    }
    local_34 = CONCAT44(fVar8,fVar7);
    uStack_2c = CONCAT44(fVar9,fVar6);
    puVar5 = (undefined8 *)(param_2 + 0x50);
    uVar11 = 0;
  }
  FUN_10116acd(param_1,puVar5,param_2 + 0x58,param_2 + 0x114,&local_24,&local_34,uVar11);
LAB_1010e647:
  if (DAT_10388d00 != (local_14 ^ (uint)local_54)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

