/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076af82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14076af82(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *puVar3;
  uint *puVar4;
  uint *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  uint local_20;
  undefined4 uStack_1c;
  
  puVar4 = (uint *)(ulonglong)param_1;
  puStack_38 = (uint *)((ulonglong)&stack0xfffffffffffffff4 & 0xffffffff);
  uVar1 = *puStack_38;
  _local_20 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),_DAT_150af3c94 ^ (uint)&local_20);
  uStack_28 = *(undefined8 *)(((ulonglong)puVar4[0x50] - 4) + (ulonglong)puVar4[0x4e] * 4);
  uStack_30 = 4;
  uVar2 = FUN_140752561();
  puVar3 = (uint *)(ulonglong)((int)&puStack_38 + 0xc);
  if (*(uint *)((ulonglong)*puVar4 + 0x150c) == uVar2) {
    *(undefined8 *)((longlong)puVar3 + -8) = 0;
    *(ulonglong *)((longlong)puVar3 + -0x10) = (ulonglong)uVar1;
    *(undefined8 *)((longlong)puVar3 + -0x18) = 0xc;
    *(ulonglong *)((longlong)puVar3 + -0x20) = (ulonglong)uVar2;
    *(undefined8 *)((longlong)puVar3 + -0x28) = 0x14076afcb;
    FUN_14076ad2a();
    puVar3 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar3 + -0x20) + 0x10);
  }
  if (_DAT_150af3cd9 == (*puVar3 ^ (uint)puVar3)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar3 + -2) = FUN_14076aff2;
  FUN_1408802b0(*puVar3 ^ (uint)puVar3);
}

