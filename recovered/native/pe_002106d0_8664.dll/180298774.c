/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180298774 */

void FUN_180298774(void)

{
  DWORD DVar1;
  LPWSTR lpBuffer;
  undefined4 *puVar2;
  undefined1 auStack_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_248;
  FUN_1802a89a0(local_228,0,0x20a);
  DVar1 = GetCurrentDirectoryW(0x105,local_228);
  if (0x104 < DVar1) {
    lpBuffer = (LPWSTR)_calloc_base(DVar1 + 1,2);
    if ((lpBuffer == (LPWSTR)0x0) || (DVar1 = GetCurrentDirectoryW(DVar1 + 1,lpBuffer), DVar1 == 0))
    {
      puVar2 = (undefined4 *)FUN_18027e66c();
      *puVar2 = 0xc;
    }
    FUN_180290e40(lpBuffer);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_248);
}

