/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cf40c */

undefined4 __fastcall FUN_100cf40c(HANDLE param_1,LPCVOID param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  uint nSize;
  
  _memset(param_3 + 2,0,0x670);
  *param_3 = 0x678;
  param_3[4] = param_2;
  param_3[1] = 0x40;
  BVar3 = ReadProcessMemory(param_1,param_2,param_3 + 7,0x40,(SIZE_T *)0x0);
  if (BVar3 == 0) {
    return 0;
  }
  param_3[5] = (LPCVOID)(param_3[4] + param_3[0x16]);
  param_3[2] = 0x18;
  BVar3 = ReadProcessMemory(param_1,(LPCVOID)(param_3[4] + param_3[0x16]),param_3 + 0x17,0x18,
                            (SIZE_T *)0x0);
  if (BVar3 == 0) {
    return 0;
  }
  nSize = (uint)*(ushort *)(param_3 + 0x1c) + (uint)*(ushort *)((int)param_3 + 0x62) * 0x28 + 0x18;
  param_3[2] = nSize;
  if (0x608 < nSize) {
    return 0;
  }
  BVar3 = ReadProcessMemory(param_1,(LPCVOID)param_3[5],param_3 + 0x17,nSize,(SIZE_T *)0x0);
  if (BVar3 == 0) {
    return 0;
  }
  if (*(short *)(param_3 + 0x1d) == 0x20b) {
    iVar1 = param_3[0x55];
    if (iVar1 == 0) goto LAB_100cf4e8;
    iVar2 = param_3[0x56];
  }
  else {
    if ((*(short *)(param_3 + 0x1d) != 0x10b) || (iVar1 = param_3[0x51], iVar1 == 0))
    goto LAB_100cf4e8;
    iVar2 = param_3[0x52];
  }
  if (iVar2 != 0) {
    param_3[6] = (int)param_2 + iVar1;
  }
LAB_100cf4e8:
  if ((LPCVOID)param_3[6] != (LPCVOID)0x0) {
    param_3[3] = 0x14;
    BVar3 = ReadProcessMemory(param_1,(LPCVOID)param_3[6],param_3 + 0x199,0x14,(SIZE_T *)0x0);
    if (BVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

