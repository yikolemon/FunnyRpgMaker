/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a26d7 */

void FUN_1407a26d7(ulonglong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong unaff_RDI;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar4 = (undefined8 *)(param_1 & 0xffffffff);
  uVar3 = unaff_RDI >> 0x20;
  if ((*(byte *)(param_2 + 0x31) & 0x10) == 0) {
    uVar2 = *(undefined8 *)(uVar3 + 0x264);
    *puVar4 = *(undefined8 *)(uVar3 + 0x25c);
    puVar4[1] = uVar2;
    auVar10._0_4_ = (float)*puVar4 + (float)*(undefined8 *)(uVar3 + 0xa8);
    auVar10._4_4_ =
         (float)((ulonglong)*puVar4 >> 0x20) +
         (float)((ulonglong)*(undefined8 *)(uVar3 + 0xa8) >> 0x20);
    auVar10._8_8_ = 0;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = puVar4[1];
    auVar11 = minps(auVar10,auVar11);
    *puVar4 = auVar11._0_8_;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x38);
    fVar7 = (float)*(undefined8 *)(param_2 + 0x34);
    fVar8 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x34) >> 0x20);
    *(undefined4 *)puVar4 = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)((longlong)puVar4 + 4) = uVar1;
    fVar9 = (float)*(undefined8 *)(uVar3 + 0x15c);
    fVar12 = (float)((ulonglong)*(undefined8 *)(uVar3 + 0x15c) >> 0x20);
    uVar5 = -(uint)(fVar7 <= fVar9);
    uVar6 = -(uint)(fVar8 <= fVar12);
    puVar4[1] = CONCAT44(~uVar6 & (uint)fVar8,~uVar5 & (uint)fVar7) |
                CONCAT44((uint)fVar12 & uVar6,(uint)fVar9 & uVar5);
  }
  return;
}

