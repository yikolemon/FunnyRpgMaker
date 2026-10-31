/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ba2f7 */

void FUN_1407ba2f7(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  uVar1 = *(undefined4 *)((ulonglong)(uint)puVar2[7] + 0x44);
  puVar2[1] = *(undefined4 *)((ulonglong)(uint)puVar2[7] + 0x48);
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -2) = &UNK_1407ba319;
  FUN_140755a9a();
}

