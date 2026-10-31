/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140020f82 */

/* WARNING: Removing unreachable block (ram,0x000140020fa3) */
/* WARNING: Removing unreachable block (ram,0x000140020fb7) */
/* WARNING: Removing unreachable block (ram,0x000140020fd9) */

void FUN_140020f82(void)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_29 = 1;
  FUN_14001b296(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_28,&DAT_140ee3c60);
}

