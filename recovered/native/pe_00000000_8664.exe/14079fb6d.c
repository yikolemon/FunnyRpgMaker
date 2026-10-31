/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079fb6d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079fb6d(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  undefined4 *puVar3;
  
  uVar2 = (int)&stack0x00000000 - 8;
  puVar3 = (undefined4 *)(ulonglong)uVar2;
  puVar3[1] = _DAT_150b2887e ^ uVar2;
  *puVar3 = (int)(puVar3 + 5);
  *(ulonglong *)(puVar3 + -2) = (ulonglong)(puVar3 + 5) & 0xffffffff;
  *(ulonglong *)(puVar3 + -4) = (ulonglong)(uint)puVar3[4];
  *(undefined8 *)(puVar3 + -6) = 0;
  *(ulonglong *)(puVar3 + -8) = (ulonglong)(uint)puVar3[3];
  *(undefined8 *)(puVar3 + -10) = 0x14079fb95;
  FUN_14079fbb7();
  uVar2 = (int)(puVar3 + -8) + 0x10;
  uVar4 = (ulonglong)uVar2;
  if (_DAT_150b288a4 == (*(uint *)(uVar4 + 4) ^ uVar2)) {
    return;
  }
  uVar1 = *(uint *)(uVar4 + 4);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar4 - 8) = FUN_14079fbb7;
  FUN_1408802b0(uVar1 ^ uVar2);
}

