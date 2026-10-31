/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076dd02 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14076dd02(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  uint unaff_EBX;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint local_28;
  undefined4 uStack_24;
  
  puVar5 = &local_28;
  iVar1 = *(int *)((ulonglong)_DAT_150b0b459 + 0x1fbc);
  if (0 < iVar1) {
    uVar2 = *(uint *)((ulonglong)_DAT_150b0b459 + 0x1fc4);
    uVar4 = iVar1 * 0x28;
    uVar8 = 0;
    _local_28 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar4);
    do {
      uVar7 = *(uint *)((ulonglong)uVar2 + 4 + uVar8);
      uVar6 = (ulonglong)uVar7;
      if (((uVar7 != 0) && ((*(byte *)(uVar6 + 0xf) & 8) != 0)) &&
         ((*(char *)(uVar6 + 0xf9) != '\0' || (*(char *)(uVar6 + 0xfa) == '\x01')))) {
        if (unaff_EBX == 0) {
          return uVar6;
        }
        *(ulonglong *)((longlong)puVar5 + -8) = uVar6;
        *(ulonglong *)((longlong)puVar5 + -0x10) = (ulonglong)unaff_EBX;
        *(undefined8 *)((longlong)puVar5 + -0x18) = 0x14076dd57;
        cVar3 = FUN_14075a8c7();
        puVar5 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar5 + -0x10) + 8);
        uVar4 = *puVar5;
        if (cVar3 == '\0') {
          return uVar6;
        }
      }
      uVar7 = (int)uVar8 + 0x28;
      uVar8 = (ulonglong)uVar7;
    } while (uVar4 != uVar7);
  }
  return 0;
}

