/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ebe57 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ebe57(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (int)&stack0xfffffffffffffff0 - 0x1c;
  uVar3 = (ulonglong)uVar2;
  uVar1 = *(uint *)(uVar3 + 0x3c);
  *(undefined4 *)(uVar3 + 0x10) = *(undefined4 *)(uVar3 + 0x2c);
  *(undefined4 *)(uVar3 + 0x14) = *(undefined4 *)(uVar3 + 0x30);
  if (uVar1 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0001407ebea0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulonglong)uVar1 * 4 + 0x103014a8))
              (*(undefined4 *)(uVar3 + 0x28),(ulonglong)uVar1,*(undefined4 *)(uVar3 + 0x34),
               *(undefined4 *)(uVar3 + 0x38));
    return;
  }
  if (_DAT_150b74c37 == (*(uint *)(uVar3 + 0x18) ^ uVar2)) {
    return;
  }
  uVar1 = *(uint *)(uVar3 + 0x18);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar3 - 8) = FUN_1407ebf4c;
  FUN_1408802b0(uVar1 ^ uVar2);
}

