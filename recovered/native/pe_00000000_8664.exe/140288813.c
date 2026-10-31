/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140288813 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140288813(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  FUN_140288848(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_28,&DAT_1405b7950);
}

