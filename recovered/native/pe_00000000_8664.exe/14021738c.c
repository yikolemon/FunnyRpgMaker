/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021738c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14021738c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  FUN_14021759a(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_28,0x1405a1150);
}

