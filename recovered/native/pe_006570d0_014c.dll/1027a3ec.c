/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a3ec */

void FUN_1027a3ec(void)

{
  DWORD DVar1;
  LPWSTR lpBuffer;
  undefined4 *puVar2;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  _memset(local_214,0,0x20a);
  DVar1 = GetCurrentDirectoryW(0x105,local_214);
  if (DVar1 < 0x105) {
    FUN_1027a490(local_214);
    goto LAB_1027a483;
  }
  lpBuffer = (LPWSTR)FUN_10275d90(DVar1 + 1,2);
  if (lpBuffer == (LPWSTR)0x0) {
LAB_1027a462:
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0xc;
  }
  else {
    DVar1 = GetCurrentDirectoryW(DVar1 + 1,lpBuffer);
    if (DVar1 == 0) goto LAB_1027a462;
    FUN_1027a490(lpBuffer);
  }
  FUN_10274120(lpBuffer);
LAB_1027a483:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

