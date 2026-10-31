/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140041d16 */

void FUN_140041d16(undefined4 param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  local_40 = FUN_140007235();
  local_48 = param_1;
  FUN_140041d5a(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_38,&DAT_14017a898);
}

