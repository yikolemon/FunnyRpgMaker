/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fbd76 */

void FUN_1800fbd76(void)

{
  HANDLE hProcess;
  LPVOID lpAddress;
  undefined1 auStack_48 [36];
  DWORD local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  hProcess = GetCurrentProcess();
  if (DAT_180419018 != (LPVOID)0x0) {
    lpAddress = DAT_180419018;
    do {
      VirtualProtect(lpAddress,0x10000,0x20,&local_24);
      FlushInstructionCache(hProcess,lpAddress,0x10000);
      lpAddress = *(LPVOID *)((longlong)lpAddress + 8);
    } while (lpAddress != (LPVOID)0x0);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

