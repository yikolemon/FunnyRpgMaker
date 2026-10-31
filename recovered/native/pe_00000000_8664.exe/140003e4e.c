/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140003e4e */

void FUN_140003e4e(undefined4 param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  local_40 = FUN_140002f76();
  local_48 = param_1;
  FUN_140003d26(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_38,&DAT_140ee3a48);
}

