/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f79a1 */

void FUN_100f79a1(void)

{
  LPVOID lpAddress;
  HANDLE hProcess;
  DWORD DStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&DStack_18;
  hProcess = GetCurrentProcess();
  for (lpAddress = DAT_1039d6d4; lpAddress != (LPVOID)0x0;
      lpAddress = *(LPVOID *)((int)lpAddress + 4)) {
    VirtualProtect(lpAddress,0x10000,0x20,&DStack_18);
    FlushInstructionCache(hProcess,lpAddress,0x10000);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&DStack_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

