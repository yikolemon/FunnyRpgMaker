/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e5b62 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1407e5b62(void)

{
  uint uVar1;
  longlong in_FS_OFFSET;
  undefined4 *puVar2;
  
  uVar1 = (int)&stack0xfffffffffffffff8 - 0x18;
  puVar2 = (undefined4 *)(ulonglong)uVar1;
  puVar2[-1] = (int)&stack0xffffffffffffffe0 + -0x20;
  puVar2[2] = 0xffffffff;
  puVar2[1] = 0x10195fc0;
  *puVar2 = *(undefined4 *)(in_FS_OFFSET + 0x1407e5b8c);
  *(uint *)(in_FS_OFFSET + -0x76f7b97500000000) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

