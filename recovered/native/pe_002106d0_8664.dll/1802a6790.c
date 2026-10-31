/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a6790 */

void FUN_1802a6790(uint param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [32];
  WCHAR local_18 [4];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  if (param_1 < 0x1b) {
    if (param_1 != 0) {
      local_18[0] = (short)param_1 + L'@';
      local_18[1] = L':';
      local_18[2] = L'\\';
      local_18[3] = 0;
      GetDriveTypeW(local_18);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_18027e690();
    *puVar1 = 0xf;
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0xd;
    FUN_180290a50();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

