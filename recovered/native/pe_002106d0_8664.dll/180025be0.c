/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180025be0 */

/* WARNING: Removing unreachable block (ram,0x000180025c01) */
/* WARNING: Removing unreachable block (ram,0x000180025c15) */
/* WARNING: Removing unreachable block (ram,0x000180025c3a) */

void FUN_180025be0(undefined8 param_1)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_29 = 1;
  FUN_180025c48(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_28,&DAT_180391580);
}

