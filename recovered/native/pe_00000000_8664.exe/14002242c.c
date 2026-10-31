/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002242c */

/* WARNING: Removing unreachable block (ram,0x00014002244d) */
/* WARNING: Removing unreachable block (ram,0x000140022461) */
/* WARNING: Removing unreachable block (ram,0x00014002248c) */

void FUN_14002242c(void)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_29 = 1;
  FUN_14001b296(local_28,"width/precision is not integer");
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_28,&DAT_140ee3c60);
}

