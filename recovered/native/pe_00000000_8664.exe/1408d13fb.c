/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d13fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1408d13fb(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar2 = *(uint *)(uVar5 + 8);
  iVar4 = FUN_1408d295f();
  if (iVar4 == -1) {
    uVar2 = *(uint *)(uVar5 + 0x18);
    *(undefined1 *)((ulonglong)uVar2 + 0x1c) = 1;
    *(undefined4 *)((ulonglong)uVar2 + 0x18) = 9;
  }
  else {
    iVar4 = (*_DAT_150c2f4dd)();
    if (iVar4 == 0) {
      (*_DAT_150c2f3da)();
      FUN_1408c0f79();
    }
    else if ((*(uint *)(uVar5 - 8) & *(uint *)(uVar5 - 4)) != 0xffffffff) {
      uVar3 = *(undefined4 *)(uVar5 - 8);
      pbVar1 = (byte *)((ulonglong)*(uint *)((ulonglong)(uint)((int)uVar2 >> 6) * 4 + 0x103a5230) +
                        0x28 + (ulonglong)((uVar2 & 0x3f) * 0x38));
      *pbVar1 = *pbVar1 & 0xfd;
      return uVar3;
    }
  }
  return 0xffffffff;
}

