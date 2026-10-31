/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e93ef */

void FUN_1407e93ef(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar8 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar4 = (ulonglong)uVar8;
  iVar1 = *(int *)(uVar4 + 0x284);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(uVar4 + 0x28c);
    uVar7 = 0;
    do {
      puVar5 = (undefined4 *)(ulonglong)*(uint *)(uVar2 + uVar7);
      if (puVar5[3] == uVar8) {
        uVar3 = *(undefined4 *)(uVar4 + 0x4c);
        puVar5[1] = *(undefined4 *)(uVar4 + 0x50);
        *puVar5 = uVar3;
        puVar5[2] = uVar8 + 0x6c;
      }
      uVar6 = (int)uVar7 + 4;
      uVar7 = (ulonglong)uVar6;
    } while (iVar1 << 2 != uVar6);
  }
  return;
}

