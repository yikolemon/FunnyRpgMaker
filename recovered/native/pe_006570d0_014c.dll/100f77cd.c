/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f77cd */

DWORD FUN_100f77cd(void)

{
  LPVOID lpAddress;
  BOOL BVar1;
  DWORD DVar2;
  DWORD DStack_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&DStack_14;
  DVar2 = 0;
  lpAddress = DAT_1039d6d4;
  do {
    if (lpAddress == (LPVOID)0x0) {
LAB_100f780e:
      if (DAT_10388d00 == (local_10 ^ (uint)&DStack_14)) {
        return DVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    BVar1 = VirtualProtect(lpAddress,0x10000,0x40,&DStack_14);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_100f780e;
    }
    lpAddress = *(LPVOID *)((int)lpAddress + 4);
  } while( true );
}

