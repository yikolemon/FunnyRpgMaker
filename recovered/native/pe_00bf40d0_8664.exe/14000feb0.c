/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000feb0 */

char * FUN_14000feb0(longlong param_1,char *param_2,ulonglong param_3)

{
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) < 1) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18) = 0xffffffffffffffff;
    FUN_14000baf8(param_2,*(longlong *)(param_1 + 0x10),param_3);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000b455(0x14011ae42);
}

