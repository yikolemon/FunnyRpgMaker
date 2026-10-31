/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a97c3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1407a97c3(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 8);
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_2 < iVar2) {
    iVar1 = *(int *)(param_1 + 0x14);
    *(ulonglong *)(puVar4 + -8) = (ulonglong)(uint)(iVar2 + iVar1);
    *(ulonglong *)(puVar4 + -0x10) = (ulonglong)(uint)(iVar1 + param_2);
    *(undefined1 **)(puVar4 + -0x18) = puVar4;
    *(undefined8 *)(puVar4 + -0x20) = 0x1407a97ec;
    iVar2 = FUN_140750fa5();
    puVar4 = (undefined1 *)(ulonglong)((int)(puVar4 + -0x18) + 0xc);
    iVar2 = iVar2 + param_2;
    uVar3 = *(uint *)(puVar4 + 4);
  }
  else {
    uVar3 = *(uint *)(puVar4 + 4);
  }
  if (_DAT_150b32500 == (uVar3 ^ (uint)puVar4)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -8) = &UNK_1407a9814;
  FUN_1408802b0(*(uint *)(puVar4 + 4) ^ (uint)puVar4);
}

