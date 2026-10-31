/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407529d7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407529d7(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = (int)&stack0x00000000 - 8;
  uVar3 = (ulonglong)uVar1;
  uVar2 = *(uint *)(uVar3 + 0xc);
  *(uint *)(uVar3 + 4) = _DAT_150adb6e8 ^ uVar1;
  *(ulonglong *)(uVar3 - 8) = (ulonglong)*(uint *)(uVar3 + 0x10);
  *(ulonglong *)(uVar3 - 0x10) = (ulonglong)uVar2;
  *(ulonglong *)(uVar3 - 0x18) = (ulonglong)uVar1;
  *(undefined8 *)(uVar3 - 0x20) = 0x1407529f8;
  FUN_140750fa5();
  uVar2 = (int)(uVar3 - 0x18) + 0xc;
  uVar4 = (ulonglong)uVar2;
  if (_DAT_150adb707 == (*(uint *)(uVar4 + 4) ^ uVar2)) {
    return;
  }
  uVar1 = *(uint *)(uVar4 + 4);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar4 - 8) = FUN_140752a1a;
  FUN_1408802b0(uVar1 ^ uVar2);
}

