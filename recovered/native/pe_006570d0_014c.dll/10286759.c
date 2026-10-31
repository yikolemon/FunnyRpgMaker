/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10286759 */

void FUN_10286759(uint param_1)

{
  undefined4 *puVar1;
  WCHAR local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_1 < 0x1b) {
    if (param_1 != 0) {
      local_10 = (short)param_1 + L'@';
      local_e = 0x3a;
      local_c = 0x5c;
      local_a = 0;
      GetDriveTypeW(&local_10);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_10269012();
    *puVar1 = 0xf;
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0xd;
    FUN_10273ea8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

