/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076e35c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076e35c(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  puVar6 = &stack0xffffffffffffffe8;
  uVar7 = (ulonglong)_DAT_150b0bab1;
  iVar1 = *(int *)(uVar7 + 0x1fc8);
  if ((0 < iVar1) && (iVar1 <= *(int *)(uVar7 + 0x1fbc))) {
    uVar5 = iVar1 - 1;
    uVar3 = (ulonglong)uVar5;
    if (*(int *)((ulonglong)*(uint *)(uVar7 + 0x1fd0) + (ulonglong)(uVar5 * 0x28)) ==
        *(int *)((ulonglong)*(uint *)(uVar7 + 0x1fc4) + (ulonglong)(uVar5 * 0x28))) {
      uVar4 = (*(uint *)(uVar7 + 0x1fc4) + iVar1 * 0x28) - 0x24;
      while( true ) {
        uVar8 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) break;
        uVar2 = *(uint *)(ulonglong)uVar4;
        if (((uVar2 == 0) || ((*(byte *)((ulonglong)uVar2 + 0xf) & 0x10) == 0)) ||
           (uVar2 = ((uint *)(ulonglong)uVar4)[-10], uVar2 == 0)) goto LAB_14076e3d4;
        uVar4 = uVar4 - 0x28;
        uVar5 = uVar5 - 1;
        if ((*(byte *)((ulonglong)uVar2 + 0xd) & 4) != 0) goto LAB_14076e3d4;
      }
      uVar8 = 0;
LAB_14076e3d4:
      if ((*(byte *)(uVar7 + 0x27b4) & 8) != 0) {
        uStack_30 = 0x1034cf49;
        uStack_28 = uVar3;
        uStack_20 = uVar8;
        FUN_1407518b6();
        puVar6 = (undefined1 *)(ulonglong)((int)&uStack_30 + 0xc);
      }
      *(undefined8 *)(puVar6 + -8) = 1;
      *(ulonglong *)(puVar6 + -0x10) = uVar8;
      *(undefined8 *)(puVar6 + -0x18) = 0x14076e3f4;
      FUN_14076e1dc();
      if (*(uint *)(uVar7 + 0x2048) != 0) {
        *(undefined1 *)((ulonglong)*(uint *)(uVar7 + 0x2048) + 0x1a5) = 1;
      }
    }
  }
  return;
}

