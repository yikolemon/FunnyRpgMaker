/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e0084 */

void FUN_1407e0084(uint param_1)

{
  float fVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined4 *puVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar4 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x2c);
  uVar5 = (ulonglong)param_1;
  fVar7 = *(float *)(ulonglong)(uint)puVar4[0x10];
  fVar1 = ((float *)(ulonglong)(uint)puVar4[0x10])[1];
  uVar2 = *(ulonglong *)(ulonglong)(uint)puVar4[0xf];
  if (*(char *)(puVar4 + 0x11) == '\0') {
    puVar4[3] = fVar1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar2;
  }
  else {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(uVar5 + 0x48);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar2;
    auVar9 = maxps(auVar8,auVar3);
    fVar6 = *(float *)(uVar5 + 0x50);
    if (fVar7 <= *(float *)(uVar5 + 0x50)) {
      fVar6 = fVar7;
    }
    fVar7 = fVar6;
    if (fVar1 <= *(float *)(uVar5 + 0x54)) {
      puVar4[3] = fVar1;
    }
    else {
      puVar4[3] = *(float *)(uVar5 + 0x54);
    }
  }
  *(undefined1 (*) [16])(puVar4 + 7) = auVar9;
  puVar4[1] = fVar7;
  *puVar4 = auVar9._0_4_;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -2) = &UNK_1407e00f4;
  FUN_140755a9a();
}

