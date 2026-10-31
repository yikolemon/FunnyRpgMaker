/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076c41d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14076c41d(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined4 unaff_retaddr;
  undefined8 uStack_18;
  
  uVar4 = (ulonglong)_DAT_150b09b71;
  uStack_18 = CONCAT44(unaff_retaddr,(int)((ulonglong)unaff_RBX >> 0x20));
  uVar3 = FUN_14076b490();
  uVar7 = (ulonglong)((int)&uStack_18 + 4);
  uVar6 = uVar3 & 0xf000;
  if (*(uint *)(uVar4 + 0x108) == uVar6) {
    uVar1 = *(uint *)(uVar7 + 0x10);
    uVar4 = (ulonglong)(uVar3 & 0xffff0fff);
    if ((uVar3 & 0xffff0fff) == 0) {
      if (uVar6 - 1 < (uVar6 ^ uVar6 - 1)) {
        uVar3 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        uVar2 = uVar3 + 0x28b;
        if ((uVar3 & 0x1c) != 0xc) {
          uVar2 = uVar6;
        }
        uVar4 = (ulonglong)uVar2;
      }
      else {
        uVar4 = (ulonglong)uVar6;
      }
    }
    *(ulonglong *)(uVar7 - 8) = (ulonglong)*(uint *)(uVar7 + 0x14);
    *(ulonglong *)(uVar7 - 0x10) = (ulonglong)(uVar1 & 0xff);
    *(ulonglong *)(uVar7 - 0x18) = uVar4;
    *(undefined8 *)(uVar7 - 0x20) = 0x14076c481;
    uVar5 = FUN_14076bc30();
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

