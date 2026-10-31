/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140214c79 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140214c79(undefined4 param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  local_40 = FUN_140213971();
  local_48 = param_1;
  FUN_140214ce0(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_38,&DAT_14059fb38);
}

