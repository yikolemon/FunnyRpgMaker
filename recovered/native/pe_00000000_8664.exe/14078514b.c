/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078514b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078514b(longlong param_1)

{
  char *pcVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  uint unaff_retaddr;
  undefined8 uStack_18;
  undefined1 *puVar3;
  
  pcVar1 = (char *)(ulonglong)_DAT_14cc808b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc808b1039d74c;
  if (*(float *)(pcVar1 + 0x220) <= 0.0 && *(float *)(pcVar1 + 0x220) != 0.0) {
    uStack_18 = 0;
    FUN_140769899();
    uVar5 = (ulonglong)((int)&uStack_18 + 4);
    *(ulonglong *)(uVar5 - 8) = (ulonglong)unaff_retaddr;
    *(ulonglong *)(uVar5 - 0x10) = unaff_RDI >> 0x20;
    *(undefined8 *)(uVar5 - 0x18) = 0x140785181;
    FUN_140784f9f();
    FUN_140769952();
    return;
  }
  uVar2 = (int)&stack0xfffffffffffffff0 - 0xc;
  puVar3 = (undefined1 *)(ulonglong)uVar2;
  pcVar1 = (char *)(ulonglong)_DAT_14cc888b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc888b1039d74c;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  if (*(char *)((ulonglong)*(uint *)(pcVar1 + 0x14cc) + 0xfe) == '\0') {
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + 0x1c);
    *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + 0x14);
    *(undefined8 **)(puVar3 + -0x18) = (undefined8 *)(ulonglong)uVar2;
    *(undefined8 **)(puVar3 + -0x20) = (undefined8 *)((longlong)puVar3 + 4U & 0xffffffff);
    *(undefined8 *)(puVar3 + -0x28) = 0x140784fe5;
    FUN_1407524a7();
    uVar4 = (ulonglong)((int)(puVar3 + -0x20) + 0x10);
    *(undefined8 *)(uVar4 - 8) = 1;
    *(undefined8 *)(uVar4 - 0x10) = *(undefined8 *)(ulonglong)uVar2;
    *(undefined8 *)(uVar4 - 0x18) = *(undefined8 *)((longlong)puVar3 + 4U & 0xffffffff);
    *(undefined8 *)(uVar4 - 0x20) = 0x140784ff3;
    FUN_140784a9c();
    puVar3 = (undefined1 *)(ulonglong)((int)(uVar4 - 0x18) + 0xc);
  }
  if (_DAT_150b0dd02 == (*(uint *)(puVar3 + 8) ^ (uint)puVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -8) = &UNK_140785017;
  FUN_1408802b0(*(uint *)(puVar3 + 8) ^ (uint)puVar3);
}

