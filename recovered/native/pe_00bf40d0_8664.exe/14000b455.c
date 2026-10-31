/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b455 */

void FUN_14000b455(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  FUN_14000b63e(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_14008c800(local_28,&DAT_140123dd0);
}

