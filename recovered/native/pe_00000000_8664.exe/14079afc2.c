/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079afc2 */

void FUN_14079afc2(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uStack_28;
  
  puVar7 = (uint *)((ulonglong)param_1 & 0xffffffff);
  uVar1 = *param_1;
  if (uVar1 == param_1[1]) {
    if (uVar1 == 0) {
      uVar3 = 8;
    }
    else {
      uVar3 = (ulonglong)((int)uVar1 / 2 + uVar1);
    }
    uVar6 = (ulonglong)(uVar1 + 1);
    if ((int)(uVar1 + 1) < (int)uVar3) {
      uVar6 = uVar3;
    }
    uStack_28 = uVar6;
    uVar2 = FUN_1407520ca();
    uVar4 = (ulonglong)((int)&uStack_28 + 4);
    uVar3 = (ulonglong)uVar2;
    uVar1 = puVar7[2];
    if (uVar1 != 0) {
      *(undefined8 *)(uVar4 - 8) = *(undefined8 *)puVar7;
      *(ulonglong *)(uVar4 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar4 - 0x18) = uVar3;
      *(undefined8 *)(uVar4 - 0x20) = 0x14079b011;
      FUN_1408b31a0();
      uVar5 = (ulonglong)((int)(uVar4 - 0x18) + 0xc);
      *(undefined8 *)(uVar5 - 8) = *(undefined8 *)(puVar7 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar5 - 0x10) = &UNK_14079b01c;
      FUN_14075219b();
    }
    puVar7[2] = uVar2;
    puVar7[1] = (uint)uVar6;
    uVar1 = *puVar7;
  }
  else {
    uVar3 = (ulonglong)puVar7[2];
  }
  *(undefined1 *)(uVar3 + uVar1) = *(undefined1 *)(unaff_RBX >> 0x20);
  *puVar7 = *puVar7 + 1;
  return;
}

