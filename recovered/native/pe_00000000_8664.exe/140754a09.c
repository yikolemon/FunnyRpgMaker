/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754a09 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140754a09(void)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar11;
  ulonglong uVar10;
  
  uVar9 = (int)&stack0x00000000 - 0x14;
  uVar10 = (ulonglong)uVar9;
  fVar2 = *(float *)(uVar10 + 0x1c);
  *(uint *)(uVar10 + 0x10) = _DAT_150add71c ^ uVar9;
  uVar8 = (ulonglong)_DAT_150af2174;
  puVar1 = (undefined4 *)(uVar8 + 0xe00 + (ulonglong)(uint)(*(int *)(uVar10 + 0x18) << 4));
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar7 = (undefined4 *)(ulonglong)uVar9;
  *puVar7 = *puVar1;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  puVar7[3] = fVar2 * *(float *)(uVar8 + 0xccc) * (float)puVar7[3];
  *(undefined4 **)(uVar10 - 8) = puVar7;
  *(undefined8 *)(uVar10 - 0x10) = 0x140754a50;
  FUN_140752c0d();
  uVar9 = (int)(uVar10 - 8) + 4;
  uVar11 = (ulonglong)uVar9;
  if (_DAT_150add75f == (*(uint *)(uVar11 + 0x10) ^ uVar9)) {
    return;
  }
  uVar3 = *(uint *)(uVar11 + 0x10);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar11 - 8) = &UNK_140754a72;
  FUN_1408802b0(uVar3 ^ uVar9);
}

