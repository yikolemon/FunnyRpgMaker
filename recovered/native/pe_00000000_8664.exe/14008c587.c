/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008c587 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14008c587(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b8 [32];
  float *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_78;
  float local_70;
  float local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong local_40;
  
  lVar4 = DAT_140f2a910;
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  FUN_140094faa(&local_58);
  uVar1 = *(uint *)(param_2 + 0x14);
  if ((uVar1 >> 0x1c & 1) == 0) {
    if ((uVar1 >> 0x1a & 1) == 0) {
      if ((uVar1 >> 0x19 & 1) == 0) {
        *param_1 = *(undefined8 *)(param_2 + 0x60);
        goto LAB_14008c7f2;
      }
      fVar11 = *(float *)(lVar4 + 0xed8);
      FUN_1400941ae(&local_70,0x2000000);
      if ((*(int *)(lVar4 + 0x130) == 1) && (iVar5 = FUN_140095029(0x2000000), iVar5 == 1)) {
        fVar9 = (float)*(undefined8 *)(param_2 + 0x68);
        fVar10 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x68) >> 0x20);
        fVar7 = fVar11 * 0.0 + local_70 + (float)DAT_140211530 * fVar9;
        fVar8 = DAT_1401c8670 * fVar11 + local_6c +
                (float)((ulonglong)DAT_140211530 >> 0x20) * fVar10;
        *param_1 = CONCAT44(fVar8,fVar7);
        auVar3._4_4_ = -(uint)(fStack_54 <= fVar8);
        auVar3._0_4_ = -(uint)(local_58 <= fVar7);
        auVar3._8_4_ = -(uint)(fVar9 + fVar7 <= fStack_50);
        auVar3._12_4_ = -(uint)(fVar10 + fVar8 <= fStack_4c);
        iVar5 = movmskps(1,auVar3);
        if (iVar5 == 0xf) goto LAB_14008c7f2;
      }
      local_78 = CONCAT44((float)((ulonglong)DAT_140211540 >> 0x20) * fVar11 + local_6c,
                          (float)DAT_140211540 * fVar11 + local_70);
      if (((*(char *)(lVar4 + 0x21f4) == '\x01') && (*(char *)(lVar4 + 0x21f5) == '\x01')) &&
         (*(char *)(lVar4 + 0x7a) == '\0')) {
        fVar7 = (float)DAT_140211550;
        fVar11 = (float)((ulonglong)DAT_140211550 >> 0x20);
      }
      else {
        fVar7 = fVar11 * _DAT_140211560;
        fVar11 = fVar11 * _UNK_140211564;
      }
      local_68 = CONCAT44(local_6c + _UNK_140211574,local_70 + _DAT_140211570);
      uStack_60 = CONCAT44(fVar11 + local_6c,fVar7 + local_70);
      local_88 = 2;
      puVar6 = &local_78;
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x60);
      local_68 = *(undefined8 *)(param_2 + 0x60);
      local_88 = 0;
      uStack_60 = local_68;
    }
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x408);
    if (*(char *)(lVar2 + 0x1bb) == '\x01') {
      fVar11 = DAT_1402112e4;
      fVar7 = DAT_1402112e0;
      fVar8 = *(float *)(lVar2 + 0x2c4);
      fVar9 = *(float *)(lVar2 + 700);
    }
    else {
      fVar11 = ((*(float *)(lVar2 + 0x68) + *(float *)(lVar2 + 0x60)) - *(float *)(lVar4 + 0xe0c)) -
               *(float *)(lVar2 + 0xfc);
      fVar7 = *(float *)(lVar4 + 0xe0c) + *(float *)(lVar2 + 0x60);
      fVar8 = DAT_1402112e4;
      fVar9 = DAT_1402112e0;
    }
    local_68 = CONCAT44(fVar9,fVar7);
    uStack_60 = CONCAT44(fVar8,fVar11);
    puVar6 = (undefined8 *)(param_2 + 0x60);
    local_88 = 0;
  }
  local_90 = &local_68;
  local_98 = &local_58;
  FUN_140094c01(param_1,puVar6,param_2 + 0x68,param_2 + 0x124);
LAB_14008c7f2:
  if (DAT_140f17b40 != (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_40 ^ (ulonglong)auStack_b8);
  }
  return param_1;
}

