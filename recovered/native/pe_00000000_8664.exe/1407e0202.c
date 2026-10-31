/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e0202 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e0202(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(ulonglong)((int)&stack0x00000000 - 0x14);
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(undefined8 *)((ulonglong)(puVar2 + 1) & 0xffffffff) = *(undefined8 *)((ulonglong)uVar1 + 0x34);
  *puVar2 = *(undefined8 *)((ulonglong)uVar1 + 0x2c);
  puVar2[-1] = 0;
  puVar2[-2] = (undefined8 *)((ulonglong)(puVar2 + 1) & 0xffffffff);
  puVar2[-3] = puVar2;
  puVar2[-4] = 0x1407e0234;
  FUN_1407e0084();
  if (_DAT_150b68f40 == (*(uint *)(puVar2 + -1) ^ (uint)(puVar2 + -3))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puVar2[-4] = 0x1407e0253;
  FUN_1408802b0(*(uint *)(puVar2 + -1) ^ (uint)(puVar2 + -3));
}

