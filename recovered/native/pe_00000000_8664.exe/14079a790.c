/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a790 */

void FUN_14079a790(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uStack_28;
  uint uVar8;
  
  puVar7 = (uint *)(param_1 & 0xffffffff);
  uVar8 = (uint)((ulonglong)unaff_RBX >> 0x20);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < (int)uVar8) {
    if (iVar1 == 0) {
      uVar6 = 8;
    }
    else {
      uVar6 = iVar1 / 2 + iVar1;
    }
    if ((int)uVar6 <= (int)uVar8) {
      uVar6 = uVar8;
    }
    uStack_28 = (ulonglong)uVar6;
    uVar3 = FUN_1407520ca();
    uVar4 = (ulonglong)((int)&uStack_28 + 4);
    uVar2 = puVar7[2];
    if (uVar2 != 0) {
      *(undefined8 *)(uVar4 - 8) = *(undefined8 *)puVar7;
      *(ulonglong *)(uVar4 - 0x10) = (ulonglong)uVar2;
      *(ulonglong *)(uVar4 - 0x18) = (ulonglong)uVar3;
      *(undefined8 *)(uVar4 - 0x20) = 0x14079a7d7;
      FUN_1408b31a0();
      uVar5 = (ulonglong)((int)(uVar4 - 0x18) + 0xc);
      *(undefined8 *)(uVar5 - 8) = *(undefined8 *)(puVar7 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar5 - 0x10) = &UNK_14079a7e2;
      FUN_14075219b();
    }
    puVar7[2] = uVar3;
    puVar7[1] = uVar6;
  }
  *puVar7 = uVar8;
  return;
}

