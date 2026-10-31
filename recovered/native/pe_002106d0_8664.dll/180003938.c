/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180003938 */

void FUN_180003938(undefined4 param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_40 = FUN_180002218();
  local_48 = param_1;
  FUN_180003810(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_38,&DAT_18038e668);
}

