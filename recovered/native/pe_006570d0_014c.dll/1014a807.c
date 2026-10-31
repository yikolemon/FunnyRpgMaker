/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014a807 */

void __fastcall FUN_1014a807(undefined8 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if ((*(byte *)(param_2 + 0x31) & 0x10) == 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x260);
    uVar2 = *(undefined4 *)(param_3 + 0x264);
    uVar3 = *(undefined4 *)(param_3 + 0x268);
    *(undefined4 *)param_1 = *(undefined4 *)(param_3 + 0x25c);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((int)param_1 + 0xc) = uVar3;
    auVar9._0_4_ = (float)*param_1 + (float)*(undefined8 *)(param_3 + 0xa8);
    auVar9._4_4_ = (float)((ulonglong)*param_1 >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(param_3 + 0xa8) >> 0x20);
    auVar9._8_8_ = 0;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_1[1];
    auVar10 = minps(auVar9,auVar10);
    *param_1 = auVar10._0_8_;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x38);
    fVar6 = (float)*(undefined8 *)(param_2 + 0x34);
    fVar7 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x34) >> 0x20);
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    fVar8 = (float)*(undefined8 *)(param_3 + 0x15c);
    fVar11 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x15c) >> 0x20);
    uVar4 = -(uint)(fVar6 <= fVar8);
    uVar5 = -(uint)(fVar7 <= fVar11);
    param_1[1] = CONCAT44(~uVar5 & (uint)fVar7,~uVar4 & (uint)fVar6) |
                 CONCAT44((uint)fVar11 & uVar5,(uint)fVar8 & uVar4);
  }
  return;
}

