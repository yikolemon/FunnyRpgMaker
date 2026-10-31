/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023e4a0 */

undefined4 FUN_18023e4a0(undefined8 *param_1,DWORD *param_2)

{
  HANDLE hHandle;
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  DWORD local_res8 [2];
  
  hHandle = (HANDLE)*param_1;
  DVar1 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar1 == 0xffffffff) {
    return 4;
  }
  if (param_2 != (DWORD *)0x0) {
    BVar2 = GetExitCodeThread(hHandle,local_res8);
    if (BVar2 == 0) {
      return 4;
    }
    *param_2 = local_res8[0];
  }
  BVar2 = CloseHandle(hHandle);
  uVar3 = 4;
  if (BVar2 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}

