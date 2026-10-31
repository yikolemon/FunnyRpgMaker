/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093dc2 */

void FUN_140093dc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_18 = &local_res10;
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar1 = FUN_1400808b4(0x1000);
  if (cVar1 != '\0') {
    FUN_140093d93(param_1,local_18);
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

