/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140313fde */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140313fde(undefined8 *param_1,int param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong local_40;
  
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_98;
  if ((((param_2 == *(int *)(DAT_14062a630 + 0x21f8)) &&
       (((param_3 & 4) != 0 || (*(char *)(DAT_14062a630 + 0x21f4) != '\0')))) &&
      ((param_2 != *(int *)(DAT_14062a630 + 0x1fe0) ||
       ((*(byte *)(DAT_14062a630 + 0x1fe4) & 2) == 0)))) &&
     (lVar1 = *(longlong *)(DAT_14062a630 + 0x1608), *(char *)(lVar1 + 0x1b9) == '\0')) {
    local_78 = 0;
    if ((param_3 & 8) == 0) {
      local_78 = *(undefined4 *)(DAT_14062a630 + 0xdfc);
    }
    local_58 = (float)*param_1;
    fStack_54 = (float)((ulonglong)*param_1 >> 0x20);
    fStack_50 = (float)param_1[1];
    fStack_4c = (float)((ulonglong)param_1[1] >> 0x20);
    fVar3 = *(float *)(lVar1 + 0x2b8);
    fVar4 = *(float *)(lVar1 + 700);
    fVar5 = *(float *)(lVar1 + 0x2c0);
    fVar6 = *(float *)(lVar1 + 0x2c4);
    fVar10 = (float)(~-(uint)(fVar3 <= local_58) & (uint)fVar3 |
                    (uint)local_58 & -(uint)(fVar3 <= local_58));
    fVar11 = (float)(~-(uint)(fVar4 <= fStack_54) & (uint)fVar4 |
                    (uint)fStack_54 & -(uint)(fVar4 <= fStack_54));
    fVar12 = (float)(~-(uint)(fStack_50 < fVar5) & (uint)fVar5 |
                    (uint)fStack_50 & -(uint)(fStack_50 < fVar5));
    fVar13 = (float)(~-(uint)(fStack_4c < fVar6) & (uint)fVar6 |
                    (uint)fStack_4c & -(uint)(fStack_4c < fVar6));
    _local_58 = CONCAT44(fVar11,fVar10);
    _fStack_50 = CONCAT44(fVar13,fVar12);
    if ((param_3 & 2) == 0) {
      fVar10 = fVar10 + _DAT_1404efb00;
      fVar11 = fVar11 + _UNK_1404efb04;
      fVar12 = fVar12 + _UNK_1404efb08;
      fVar13 = fVar13 + _UNK_1404efb0c;
      _local_58 = CONCAT44(fVar11,fVar10);
      _fStack_50 = CONCAT44(fVar13,fVar12);
      auVar2._4_4_ = -(uint)(fVar13 <= fVar6);
      auVar2._0_4_ = -(uint)(fVar12 <= fVar5);
      auVar2._8_4_ = -(uint)(fVar3 <= fVar10);
      auVar2._12_4_ = -(uint)(fVar4 <= fVar11);
      iVar7 = movmskps((int)DAT_14062a630,auVar2);
      uVar9 = *(undefined8 *)(lVar1 + 800);
      if (iVar7 != 0xf) {
        FUN_1403a0a74(uVar9,&local_58,&fStack_50,0);
        uVar9 = *(undefined8 *)(lVar1 + 800);
        uVar8 = FUN_14031276b(0x3b);
        local_68 = 0;
        local_70 = 0x40000000;
        FUN_1403a40da(uVar9,&local_58,&fStack_50,uVar8);
        FUN_1403a0c20(*(undefined8 *)(lVar1 + 800));
        goto LAB_14031416d;
      }
    }
    else {
      uVar9 = *(undefined8 *)(lVar1 + 800);
    }
    uVar8 = FUN_14031276b(0x3b);
    local_68 = 0;
    local_70 = 0x40000000;
    FUN_1403a40da(uVar9,&local_58,&fStack_50,uVar8);
  }
LAB_14031416d:
  if (ram0x000140613b10 == (local_40 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_40 ^ (ulonglong)auStack_98);
}

