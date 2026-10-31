/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a1085 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a1085(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x48);
  uVar1 = *(undefined4 *)((ulonglong)(uint)puVar2[0x16] + 0x18);
  puVar2[1] = *(undefined4 *)((ulonglong)*(uint *)((ulonglong)_DAT_150b3e7e1 + 0x14cc) + 0x290);
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -2) = &UNK_1407a10b8;
  FUN_140755a9a();
}

