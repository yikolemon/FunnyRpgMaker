/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075e480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14075e480(void)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint unaff_retaddr;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uVar2 = _DAT_cb81cb891039d74c;
  pcVar4 = (char *)(ulonglong)_DAT_cb81cb891039d74c;
  *pcVar4 = *pcVar4 + (char)(unaff_RBX >> 0x20);
  *pcVar4 = *pcVar4 + (char)uVar2;
  uVar1 = unaff_RBX;
  if ((unaff_RBX & 0x3c0000000000) != 0) {
    uVar1 = unaff_RBX >> 0x20;
  }
  if (unaff_retaddr + 1 < 2) {
    unaff_retaddr = *(uint *)(pcVar4 + 0x1e3c);
  }
  uVar8 = (ulonglong)unaff_retaddr;
  if ((pcVar4[0x1e40] & 0x40U) == 0) {
    uStack_30 = unaff_RBX & 0xffffffff;
    uStack_28 = uVar1 & 0xffffffff;
    uStack_20 = uVar8;
    cVar3 = FUN_14076b869();
    uVar6 = (ulonglong)((int)&uStack_30 + 0xc);
    if (cVar3 != '\0') {
      uVar5 = (ulonglong)((uint)uVar1 | 0x20);
      if (((uint)uVar1 & 0xf1) != 1) {
        uVar5 = uVar1 & 0xffffffff;
      }
      *(ulonglong *)(uVar6 - 8) = uVar8;
      *(ulonglong *)(uVar6 - 0x10) = uVar5;
      *(ulonglong *)(uVar6 - 0x18) = unaff_RBX & 0xffffffff;
      *(undefined8 *)(uVar6 - 0x20) = 0x14075e4e5;
      cVar3 = FUN_14076c41d();
      uVar7 = (ulonglong)((int)(uVar6 - 0x18) + 0xc);
      if (cVar3 != '\0') {
        *(undefined8 *)(uVar7 - 8) = 0;
        *(ulonglong *)(uVar7 - 0x10) = uVar8;
        *(ulonglong *)(uVar7 - 0x18) = (ulonglong)((uint)unaff_RBX & 0xf000);
        *(undefined8 *)(uVar7 - 0x20) = 0x14075e4fb;
        FUN_14076c2f7();
        return 1;
      }
    }
  }
  return 0;
}

