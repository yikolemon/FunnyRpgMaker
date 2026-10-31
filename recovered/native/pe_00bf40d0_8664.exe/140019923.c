/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140019923 */

bool FUN_140019923(HANDLE param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  BOOL BVar2;
  LPCVOID pvVar3;
  LPCVOID pvVar4;
  LPCVOID pvVar5;
  undefined1 auStackY_158 [32];
  int local_130 [5];
  ushort local_11a;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_158;
  pvVar3 = (LPCVOID)0x0;
  pvVar5 = (LPCVOID)0x0;
  do {
    pvVar4 = pvVar5;
    pvVar3 = FUN_1400197d4(param_1,(longlong)pvVar3,(undefined1 (*) [32])local_130,(longlong *)0x0);
    pvVar5 = pvVar4;
    if ((local_11a >> 0xd & 1) == 0) {
      pvVar5 = pvVar3;
    }
  } while (pvVar3 != (LPCVOID)0x0);
  if (pvVar4 == (LPCVOID)0x0) {
    SetLastError(0x10dd);
  }
  else {
    BVar2 = IsWow64Process(param_1,local_130);
    if (BVar2 != 0) {
      bVar1 = FUN_1400199f7(param_1,pvVar4,local_130[0],param_2,param_3);
      goto LAB_1400199b9;
    }
  }
  bVar1 = false;
LAB_1400199b9:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_158)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_158);
}

