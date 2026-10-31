/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d090 */

int FUN_1022d090(HANDLE param_1,undefined4 param_2,DWORD *param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_8;
  
  DVar1 = WaitForSingleObjectEx(param_1,0xffffffff,0);
  if (DVar1 == 0xffffffff) {
    return 4;
  }
  if (param_3 != (DWORD *)0x0) {
    BVar2 = GetExitCodeThread(param_1,&local_8);
    if (BVar2 == 0) {
      return 4;
    }
    *param_3 = local_8;
  }
  BVar2 = CloseHandle(param_1);
  return (-(uint)(BVar2 != 0) & 0xfffffffc) + 4;
}

