/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a8b11 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a8b11(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 in_ST0;
  
  puVar3 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x5c);
  uVar1 = _DAT_150b46296 + 0xd14;
  if ((*(byte *)((longlong)puVar3 + 0x7a) & 0x20) == 0) {
    uVar1 = _DAT_150b46296 + 0xd64;
  }
  uVar2 = *(undefined4 *)(ulonglong)uVar1;
  puVar3[1] = (((float *)(ulonglong)(uint)puVar3[0x1d])[2] - *(float *)(ulonglong)(uint)puVar3[0x1d]
              ) * _DAT_150a5fc1c + _DAT_150a61594;
  *puVar3 = uVar2;
  *(undefined8 *)(puVar3 + -2) = 0x1407a8b72;
  FUN_14074225a();
  puVar3[1] = (float)in_ST0;
  *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -2) = &UNK_1407a8b82;
  FUN_140755a9a();
}

