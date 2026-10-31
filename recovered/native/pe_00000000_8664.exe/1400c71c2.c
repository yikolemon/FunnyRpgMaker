/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c71c2 */

void FUN_1400c71c2(float *param_1,uint param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  longlong local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  ulonglong local_48;
  
  lVar4 = DAT_140f2a910;
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  local_70 = *(longlong *)(DAT_140f2a910 + 0x1608);
  *(undefined1 *)(DAT_140f2a910 + 0x25e0) = 0;
  fVar1 = *(float *)(lVar4 + 0x11c);
  fVar11 = param_1[1];
  if ((param_1[1] <= fVar1) && (fVar11 = param_1[3], fVar1 <= param_1[3])) {
    fVar11 = fVar1;
  }
  fVar1 = *(float *)(lVar4 + 0x118);
  fVar12 = *param_1;
  if ((*param_1 <= fVar1) && (fVar12 = param_1[2], fVar1 <= param_1[2])) {
    fVar12 = fVar1;
  }
  *(ulonglong *)(lVar4 + 0x25c8) =
       CONCAT44(fVar11 - (float)((ulonglong)*(undefined8 *)(local_70 + 0x168) >> 0x20),
                fVar12 - (float)*(undefined8 *)(local_70 + 0x168));
  local_58._0_4_ = (undefined4)*(undefined8 *)(lVar4 + 0x2624);
  local_58._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x2624) >> 0x20);
  fStack_50 = (float)*(undefined8 *)(lVar4 + 0x262c);
  fStack_4c = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x262c) >> 0x20);
  uVar7 = -(uint)(*param_1 <= (float)local_58._0_4_);
  uVar8 = -(uint)(param_1[1] <= (float)local_58._4_4_);
  uVar9 = -(uint)(fStack_50 < param_1[2]);
  uVar10 = -(uint)(fStack_4c < param_1[3]);
  auVar13._0_4_ = ~uVar7 & (uint)*param_1;
  auVar13._4_4_ = ~uVar8 & (uint)param_1[1];
  auVar13._8_4_ = ~uVar9 & (uint)param_1[2];
  auVar13._12_4_ = ~uVar10 & (uint)param_1[3];
  auVar3._4_4_ = local_58._4_4_ & uVar8;
  auVar3._0_4_ = local_58._0_4_ & uVar7;
  auVar3._8_4_ = (uint)fStack_50 & uVar9;
  auVar3._12_4_ = (uint)fStack_4c & uVar10;
  _local_58 = auVar13 | auVar3;
  lVar6 = FUN_14008abb6();
  uVar2 = *(undefined8 *)(lVar6 + 800);
  uVar5 = FUN_14007a557(0x1d,DAT_1402115c8);
  local_80 = 0;
  local_88 = 0;
  FUN_1400de294(uVar2,local_58,local_58 + 8,uVar5);
  uVar2 = *(undefined8 *)(lVar6 + 800);
  uVar5 = FUN_14007a557(0x3b,DAT_1401c86c8);
  local_78 = 0;
  local_88 = 0;
  local_80 = 0x3f800000;
  FUN_1400de17e(uVar2,local_58,local_58 + 8,uVar5);
  if ((param_2 & 0x900) == 0x800) {
    local_68 = (float)*(undefined8 *)param_1;
    fStack_64 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    fStack_60 = (float)*(undefined8 *)(param_1 + 2);
    fStack_5c = (float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
    fVar1 = *(float *)(lVar4 + 0x1320);
    local_68 = local_68 + fVar1;
    fStack_64 = fStack_64 + fVar1;
    fStack_60 = fStack_60 - fVar1;
    fStack_5c = fStack_5c - fVar1;
    if ((((*(float *)(lVar4 + 0x118) < local_68) || (*(float *)(lVar4 + 0x11c) < fStack_64)) ||
        (fStack_60 <= *(float *)(lVar4 + 0x118))) || (fStack_5c <= *(float *)(lVar4 + 0x11c))) {
      FUN_1400c73bc(lVar4 + 0x25b0,local_70,&local_68);
    }
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
}

