/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079979b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079979b(void)

{
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  uint uVar1;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  ulonglong auStack_60 [3];
  ulonglong uStack_48;
  float *pfStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  uint local_28;
  undefined4 uStack_24;
  uint *puVar2;
  
  auStack_60[0] = unaff_RBX & 0xffffffff;
  pfStack_40 = (float *)((ulonglong)&stack0xfffffffffffffffc & 0xffffffff);
  auStack_60[2] = unaff_RBX >> 0x20;
  if (*pfStack_40 <= 0.0) {
    pfStack_40 = (float *)0x0;
  }
  uStack_38 = (ulonglong)unaff_retaddr;
  _local_28 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),_DAT_150b224ba ^ (uint)&local_28);
  uStack_30 = (ulonglong)unaff_retaddr_00;
  uStack_48 = 0;
  if (0.0 < *(float *)((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff)) {
    uStack_48 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  }
  auStack_60[1] = 8;
  FUN_1407991bc();
  uVar1 = (int)auStack_60 + 0x1c;
  puVar2 = (uint *)(ulonglong)uVar1;
  if (_DAT_150b224f7 == (*puVar2 ^ uVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -2) = &UNK_14079980d;
  FUN_1408802b0(*puVar2 ^ uVar1);
}

