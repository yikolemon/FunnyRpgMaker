/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001960a */

ulonglong FUN_14001960a(longlong param_1,longlong param_2,ulonglong param_3)

{
  BOOL BVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStackY_78 [32];
  DWORD local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      local_44 = 0;
      BVar1 = WriteFile(*(HANDLE *)(param_1 + 8),(LPCVOID)(param_2 + uVar3),
                        (int)param_3 - (int)uVar3,&local_44,(LPOVERLAPPED)0x0);
      if ((BVar1 == 0) || (local_44 == 0)) {
        if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffffffffffff) {
          CloseHandle(*(HANDLE *)(param_1 + 8));
          *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
        }
        uVar2 = 0;
        break;
      }
      uVar3 = uVar3 + local_44;
    } while (uVar3 < param_3);
  }
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStackY_78);
  }
  return uVar2 & 0xffffffff;
}

