/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e87a5 */

ulonglong FUN_1407e87a5(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 *puVar6;
  uint unaff_EBP;
  uint uVar7;
  ulonglong uVar8;
  
  puVar6 = &stack0xffffffffffffffe0;
  iVar1 = *(int *)((ulonglong)unaff_EBP + 0x18);
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (iVar1 == 0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    uVar2 = *(uint *)((ulonglong)unaff_EBP + 0x20);
    uVar4 = CONCAT71(uVar5,1);
    uVar8 = 0;
    do {
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(uVar2 + uVar8);
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + 0x10);
      *(undefined8 *)(puVar6 + -0x18) = 0x1407e87cb;
      bVar3 = FUN_1407e7549();
      puVar6 = (undefined1 *)(ulonglong)((int)(puVar6 + -0x10) + 8);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar3);
      uVar7 = (int)uVar8 + 4;
      uVar8 = (ulonglong)uVar7;
    } while (iVar1 << 2 != uVar7);
  }
  return uVar4 & 0xffffffff;
}

