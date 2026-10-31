/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752458 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140752458(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  undefined4 *puVar3;
  
  uVar2 = (int)&stack0xfffffffffffffff8 - 8;
  puVar3 = (undefined4 *)(ulonglong)uVar2;
  puVar3[1] = _DAT_150adb16e ^ uVar2;
  *puVar3 = (int)(puVar3 + 7);
  *(ulonglong *)(puVar3 + -2) = (ulonglong)(puVar3 + 7) & 0xffffffff;
  *(ulonglong *)(puVar3 + -4) = (ulonglong)(uint)puVar3[6];
  *(ulonglong *)(puVar3 + -6) = (ulonglong)(uint)puVar3[5];
  *(ulonglong *)(puVar3 + -8) = (ulonglong)(uint)puVar3[4];
  *(undefined8 *)(puVar3 + -10) = 0x140752484;
  FUN_1407524a7();
  uVar2 = (int)(puVar3 + -8) + 0x10;
  uVar4 = (ulonglong)uVar2;
  if (_DAT_150adb193 == (*(uint *)(uVar4 + 4) ^ uVar2)) {
    return;
  }
  uVar1 = *(uint *)(uVar4 + 4);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar4 - 8) = FUN_1407524a7;
  FUN_1408802b0(uVar1 ^ uVar2);
}

