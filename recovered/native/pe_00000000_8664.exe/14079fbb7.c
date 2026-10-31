/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079fbb7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14079fbb7(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  pcVar3 = (char *)(ulonglong)_DAT_14cc888b1039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_14cc888b1039d74c;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  if (*(char *)((ulonglong)*(uint *)(pcVar3 + 0x14cc) + 0xfe) == '\0') {
    uVar1 = *(uint *)(puVar5 + 0x2c);
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + 0x20);
    *(undefined8 *)(puVar5 + -0x10) = 0x14079fbfb;
    uVar2 = FUN_14076af82();
    *(ulonglong *)(puVar5 + -0x10) = (ulonglong)uVar1;
    *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + 0x1c);
    *(undefined8 **)(puVar5 + -0x20) = (undefined8 *)((ulonglong)(puVar5 + -8) & 0xffffffff);
    *(undefined8 **)(puVar5 + -0x28) = (undefined8 *)((ulonglong)(puVar5 + -4) & 0xffffffff);
    *(undefined8 *)(puVar5 + -0x30) = 0x14079fc0f;
    FUN_1407524a7();
    uVar6 = (ulonglong)((int)(puVar5 + -0x28) + 0x10);
    *(undefined8 *)(uVar6 - 8) = *(undefined8 *)((ulonglong)(puVar5 + -8) & 0xffffffff);
    *(undefined8 *)(uVar6 - 0x10) = *(undefined8 *)((ulonglong)(puVar5 + -4) & 0xffffffff);
    *(undefined8 *)(uVar6 - 0x18) = *(undefined8 *)(uVar6 + 0x1c);
    *(ulonglong *)(uVar6 - 0x20) = (ulonglong)uVar2;
    *(undefined8 *)(uVar6 - 0x28) = 0x14079fc21;
    uVar4 = FUN_14079fc89();
    puVar5 = (undefined1 *)(ulonglong)((int)(uVar6 - 0x20) + 0x10);
  }
  else {
    uVar4 = 0;
  }
  if (_DAT_150b28930 == (*(uint *)(puVar5 + 8) ^ (uint)puVar5)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -8) = FUN_14079fc47;
  FUN_1408802b0(*(uint *)(puVar5 + 8) ^ (uint)puVar5);
}

