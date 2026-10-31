/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403115ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403115ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res18;
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14031161e(param_1,param_2,local_10);
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

