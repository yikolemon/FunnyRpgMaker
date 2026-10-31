/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fc1b2 */

void FUN_1800fc1b2(void)

{
  int iVar1;
  LPVOID lpAddress;
  longlong *plVar2;
  
  if (DAT_180419018 != (LPVOID)0x0) {
    plVar2 = (longlong *)&DAT_180419018;
    lpAddress = DAT_180419018;
    do {
      iVar1 = FUN_1800fcf3d(lpAddress);
      if (iVar1 == 0) {
        plVar2 = (longlong *)((longlong)lpAddress + 8);
      }
      else {
        *plVar2 = *(longlong *)((longlong)lpAddress + 8);
        VirtualFree(lpAddress,0,0x8000);
        DAT_180419020 = 0;
      }
      lpAddress = (LPVOID)*plVar2;
    } while (lpAddress != (LPVOID)0x0);
  }
  return;
}

