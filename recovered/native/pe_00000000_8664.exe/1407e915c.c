/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e915c */

void FUN_1407e915c(ulonglong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 & 0xffffffff);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    puVar1[10] = 0;
    puVar1[9] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_14075219b();
  }
  if (puVar1[2] != 0) {
    puVar1[1] = 0;
    *puVar1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_14075219b();
  }
  if (puVar1[8] != 0) {
    puVar1[7] = 0;
    puVar1[6] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_14075219b();
  }
  puVar1[0xc] = 0xffffffff;
  *(undefined8 *)(puVar1 + 0xd) = 0;
  puVar1[0xf] = puVar1[0xf] & 0xfc000000;
  return;
}

