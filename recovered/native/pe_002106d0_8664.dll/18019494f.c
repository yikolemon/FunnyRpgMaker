/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019494f */

void FUN_18019494f(longlong param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5,
                  ulonglong *param_6,ulonglong *param_7,char param_8)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar13._0_4_ = (float)*param_5 - (float)*param_4;
  auVar13._4_4_ = (float)((ulonglong)*param_5 >> 0x20) - (float)((ulonglong)*param_4 >> 0x20);
  auVar13._8_8_ = 0;
  uVar2 = *param_7;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar2;
  uVar3 = *param_6;
  fVar15 = (float)uVar2;
  fVar18 = (float)(uVar2 >> 0x20);
  fVar12 = (float)uVar3;
  auVar8._0_4_ = fVar15 - fVar12;
  fVar14 = (float)(uVar3 >> 0x20);
  auVar8._4_4_ = fVar18 - fVar14;
  auVar8._8_8_ = 0;
  auVar8 = divps(auVar8,auVar13);
  fVar7 = (float)(auVar8._0_4_ & -(uint)(auVar13._0_4_ != 0.0));
  fVar9 = (float)(auVar8._4_4_ & -(uint)(auVar13._4_4_ != 0.0));
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 0x14);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)param_3 * 0x14);
  if (param_8 == '\0') {
    if (param_2 < param_3) {
      do {
        puVar4[1] = CONCAT44((float)(*param_6 >> 0x20) +
                             ((float)((ulonglong)*puVar4 >> 0x20) -
                             (float)((ulonglong)*param_4 >> 0x20)) * fVar9,
                             (float)*param_6 + ((float)*puVar4 - (float)*param_4) * fVar7);
        puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
      } while (puVar4 < puVar1);
    }
  }
  else if (param_2 < param_3) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar3;
    auVar8 = minps(auVar10,auVar16);
    auVar11._8_8_ = 0;
    auVar11._0_8_ =
         CONCAT44(~-(uint)(fVar18 <= fVar14) & (uint)fVar18,
                  ~-(uint)(fVar15 <= fVar12) & (uint)fVar15) |
         CONCAT44((uint)fVar14 & -(uint)(fVar18 <= fVar14),(uint)fVar12 & -(uint)(fVar15 <= fVar12))
    ;
    do {
      auVar17._0_4_ = (float)*param_6 + ((float)*puVar4 - (float)*param_4) * fVar7;
      auVar17._4_4_ =
           (float)(*param_6 >> 0x20) +
           ((float)((ulonglong)*puVar4 >> 0x20) - (float)((ulonglong)*param_4 >> 0x20)) * fVar9;
      auVar17._8_8_ = 0;
      auVar13 = minps(auVar11,auVar17);
      uVar5 = -(uint)(auVar17._0_4_ < auVar8._0_4_);
      uVar6 = -(uint)(auVar17._4_4_ < auVar8._4_4_);
      puVar4[1] = CONCAT44(~uVar6 & auVar13._4_4_,~uVar5 & auVar13._0_4_) |
                  CONCAT44((uint)auVar8._4_4_ & uVar6,(uint)auVar8._0_4_ & uVar5);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (puVar4 < puVar1);
  }
  return;
}

