/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011e120 */

void FUN_1011e120(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0x1f70) != 0x3f) {
    uVar2 = *(undefined4 *)(DAT_1039d74c + 0x27f4);
    uVar3 = *(undefined4 *)(DAT_1039d74c + 0x27f8);
    uVar4 = *(undefined4 *)(DAT_1039d74c + 0x27fc);
    puVar1 = (undefined4 *)(DAT_1039d74c + 0xe00 + *(int *)(DAT_1039d74c + 0x1f70) * 0x10);
    *puVar1 = *(undefined4 *)(DAT_1039d74c + 0x27f0);
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
  }
  *(undefined4 *)(iVar5 + 0x1f70) = 0x3f;
  return;
}

