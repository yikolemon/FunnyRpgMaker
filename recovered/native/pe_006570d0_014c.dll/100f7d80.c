/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f7d80 */

void FUN_100f7d80(void)

{
  int iVar1;
  int *piVar2;
  LPVOID lpAddress;
  
  if (DAT_1039d6d4 != (LPVOID)0x0) {
    piVar2 = (int *)&DAT_1039d6d4;
    lpAddress = DAT_1039d6d4;
    do {
      iVar1 = FUN_100f8955();
      if (iVar1 == 0) {
        piVar2 = (int *)((int)lpAddress + 4);
      }
      else {
        *piVar2 = *(int *)((int)lpAddress + 4);
        VirtualFree(lpAddress,0,0x8000);
        DAT_1039d6d8 = 0;
      }
      lpAddress = (LPVOID)*piVar2;
    } while (lpAddress != (LPVOID)0x0);
  }
  return;
}

