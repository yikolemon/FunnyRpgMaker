/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14025a31b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_14025a31b(undefined1 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_14;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  local_14 = 0;
  local_20 = 0;
  local_28 = param_2;
  local_11 = param_1;
  FUN_140450150(&local_14,&local_11,1);
  if (ram0x000140613b10 == (local_10 ^ (ulonglong)auStack_48)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_10 ^ (ulonglong)auStack_48);
}

