/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075ab5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075ab5c(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = (int)&stack0xfffffffffffffff8 - 0xc;
  uVar3 = (ulonglong)uVar1;
  *(uint *)(uVar3 + 8) = _DAT_150ae386a ^ uVar1;
  uVar2 = *(uint *)(((ulonglong)*(uint *)(param_1 + 0x140) - 4) +
                   (ulonglong)*(uint *)(param_1 + 0x138) * 4);
  *(undefined8 *)(ulonglong)uVar1 =
       CONCAT44((float)((ulonglong)*(undefined8 *)(ulonglong)*(uint *)(uVar3 + 0x14) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x154) >> 0x20),
                (float)*(undefined8 *)(ulonglong)*(uint *)(uVar3 + 0x14) -
                (float)*(undefined8 *)(param_1 + 0x154));
  *(ulonglong *)(uVar3 - 8) = (ulonglong)uVar2;
  *(undefined8 *)(uVar3 - 0x10) = 8;
  *(undefined8 **)(uVar3 - 0x18) = (undefined8 *)(ulonglong)uVar1;
  *(undefined8 *)(uVar3 - 0x20) = 0x14075ab9d;
  FUN_140752561();
  uVar2 = (int)(uVar3 - 0x18) + 0xc;
  uVar4 = (ulonglong)uVar2;
  if (_DAT_150ae38ac == (*(uint *)(uVar4 + 8) ^ uVar2)) {
    return;
  }
  uVar1 = *(uint *)(uVar4 + 8);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar4 - 8) = FUN_14075abc2;
  FUN_1408802b0(uVar1 ^ uVar2);
}

