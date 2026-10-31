/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781150 */

void FUN_140781150(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uStack_20;
  
  uStack_20 = (ulonglong)unaff_EBX;
  if (*(int *)(param_1 + 4) < (int)unaff_EBX) {
    puVar5 = (undefined8 *)(param_1 & 0xffffffff);
    uVar2 = FUN_1407520ca();
    uVar3 = (ulonglong)((int)&uStack_20 + 4);
    uVar1 = *(uint *)(puVar5 + 1);
    if (uVar1 != 0) {
      *(undefined8 *)(uVar3 - 8) = *puVar5;
      *(ulonglong *)(uVar3 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar3 - 0x18) = (ulonglong)uVar2;
      *(undefined8 *)(uVar3 - 0x20) = 0x140781179;
      FUN_1408b31a0();
      uVar4 = (ulonglong)((int)(uVar3 - 0x18) + 0xc);
      *(undefined8 *)(uVar4 - 8) = puVar5[1];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar4 - 0x10) = &UNK_140781184;
      FUN_14075219b();
    }
    *(uint *)(puVar5 + 1) = uVar2;
    *(uint *)((longlong)puVar5 + 4) = unaff_EBX;
  }
  return;
}

