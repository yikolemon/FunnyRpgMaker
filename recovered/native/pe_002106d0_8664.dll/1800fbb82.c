/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fbb82 */

DWORD FUN_1800fbb82(void)

{
  BOOL BVar1;
  DWORD DVar2;
  LPVOID lpAddress;
  undefined1 auStack_48 [36];
  DWORD local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  DVar2 = 0;
  if (DAT_180419018 != (LPVOID)0x0) {
    lpAddress = DAT_180419018;
    do {
      BVar1 = VirtualProtect(lpAddress,0x10000,0x40,&local_24);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        break;
      }
      lpAddress = *(LPVOID *)((longlong)lpAddress + 8);
      DVar2 = 0;
    } while (lpAddress != (LPVOID)0x0);
  }
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  return DVar2;
}

