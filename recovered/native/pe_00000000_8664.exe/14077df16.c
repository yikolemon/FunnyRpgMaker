/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077df16 */

void FUN_14077df16(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  puVar1[1] = (*(float *)(param_1 + 0x14) - *(float *)((ulonglong)(uint)puVar1[0xb] + 4)) -
              *(float *)((ulonglong)(uint)puVar1[0xc] + 4);
  *puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar1 + -2) = &UNK_14077df4a;
  FUN_140755a9a();
}

