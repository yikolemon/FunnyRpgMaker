/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140277ba3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140277ba3(undefined8 param_1,uint param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  if ((param_2 < 0x110000) && ((param_2 & 0xfffff800) != 0xd800)) {
    thunk_FUN_140277c21();
    if (ram0x000140613b10 == (local_10 ^ (ulonglong)auStack_58)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_10 ^ (ulonglong)auStack_58);
  }
  FUN_1402754be(local_30);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_30,&DAT_1405b7800);
}

