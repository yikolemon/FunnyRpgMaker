/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078ca05 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14078ca05(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  uVar5 = (int)&stack0xffffffffffffffe0 - 0x2c;
  uVar6 = (ulonglong)uVar5;
  iVar2 = *(int *)(uVar6 + 0x40);
  uVar7 = (ulonglong)_DAT_150b2a16d;
  if (*(int *)(uVar7 + 0x1528) == iVar2) {
    if (*(uint *)(uVar7 + 0x1548) == 1) {
      cVar1 = *(char *)(uVar7 + 0xec);
    }
    else {
      if (((*(uint *)(uVar7 + 0x1548) & 0xfffffffe) != 2) || (*(int *)(uVar7 + 0x2060) != iVar2))
      goto LAB_14078ca5d;
      cVar1 = *(char *)(uVar7 + 0x1534);
    }
    if (cVar1 == '\0') {
      *(undefined8 *)(uVar6 - 8) = 0x14078ca42;
      FUN_14075a7a8();
    }
  }
LAB_14078ca5d:
  if (((*(int *)(uVar7 + 0x1528) == iVar2) &&
      ((*(uint *)(uVar6 + 0x5c) & 0x200000) == 0 && (*(uint *)(uVar7 + 0x1e84) & 0x800) == 0)) &&
     (*(uint *)(uVar6 + 0x44) < 10)) {
                    /* WARNING: Could not emulate address calculation at 0x00014078cabd */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)((ulonglong)*(uint *)(uVar6 + 0x44) * 4 + 0x102b97a0))
                      (*(undefined4 *)(uVar6 + 0x4c),*(undefined4 *)(uVar6 + 0x50));
    return uVar4;
  }
  if (_DAT_150b1578e != (*(uint *)(uVar6 + 0x28) ^ uVar5)) {
    uVar3 = *(uint *)(uVar6 + 0x28);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar6 - 8) = &UNK_14078ce53;
    FUN_1408802b0(uVar3 ^ uVar5);
  }
  return 0;
}

