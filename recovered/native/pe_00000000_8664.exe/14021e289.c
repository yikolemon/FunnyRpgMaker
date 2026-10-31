/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021e289 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14021e289(void)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  FUN_14021e9e0(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_28,&DAT_1405a1190);
}

