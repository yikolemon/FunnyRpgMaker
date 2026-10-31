/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140799d56 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140799d56(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong unaff_R12;
  undefined4 *puVar4;
  
  uVar3 = (int)&stack0xffffffffffffffe0 - 0x58;
  puVar4 = (undefined4 *)(ulonglong)uVar3;
  iVar2 = puVar4[0x1b];
  puVar4[0x15] = _DAT_150b22a6b ^ uVar3;
  *(undefined4 *)(unaff_R12 + 4) = 0;
  *puVar4 = param_2;
  uVar1 = iVar2 - 0x200000;
  if (uVar1 < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x000140799d86 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulonglong)uVar1 * 4 + 0x102b97f0))();
    return;
  }
  uVar1 = iVar2 - 0x600000;
  if (uVar1 < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x000140799d9c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulonglong)uVar1 * 4 + 0x102b9830))();
    return;
  }
  if (_DAT_150b22fc7 == (puVar4[0x15] ^ uVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar4 + -2) = FUN_14079a3b4;
  FUN_1408802b0(puVar4[0x15] ^ uVar3);
}

