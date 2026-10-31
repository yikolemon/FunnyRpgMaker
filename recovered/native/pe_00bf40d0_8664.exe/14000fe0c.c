/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000fe0c */

char * FUN_14000fe0c(longlong param_1,char *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (-1 < (longlong)uVar1) {
    *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x18) = uVar1 + 1;
    FUN_14000baf8(param_2,*(longlong *)(param_1 + 0x10),uVar1);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000b455(0x14011ae73);
}

