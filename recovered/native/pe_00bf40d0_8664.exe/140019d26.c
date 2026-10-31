/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140019d26 */

undefined8 FUN_140019d26(HANDLE param_1,LPCVOID param_2,undefined8 *param_3)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  LPCVOID lpBaseAddress;
  
  FUN_1400b3c00((undefined1 (*) [32])(param_3 + 1),0,0x680);
  *param_3 = 0x4000000688;
  param_3[2] = param_2;
  BVar2 = ReadProcessMemory(param_1,param_2,param_3 + 5,0x40,(SIZE_T *)0x0);
  if (BVar2 == 0) {
    return 0;
  }
  lpBaseAddress = (LPCVOID)((longlong)*(int *)((longlong)param_3 + 100) + param_3[2]);
  param_3[3] = lpBaseAddress;
  *(undefined4 *)(param_3 + 1) = 0x18;
  BVar2 = ReadProcessMemory(param_1,lpBaseAddress,param_3 + 0xd,0x18,(SIZE_T *)0x0);
  if (BVar2 == 0) {
    return 0;
  }
  uVar3 = (uint)*(ushort *)((longlong)param_3 + 0x7c) +
          ((uint)*(ushort *)((longlong)param_3 + 0x6e) +
          (uint)*(ushort *)((longlong)param_3 + 0x6e) * 4) * 8 + 0x18;
  *(uint *)(param_3 + 1) = uVar3;
  if (0x608 < uVar3) {
    return 0;
  }
  BVar2 = ReadProcessMemory(param_1,(LPCVOID)param_3[3],param_3 + 0xd,(ulonglong)uVar3,(SIZE_T *)0x0
                           );
  if (BVar2 == 0) {
    return 0;
  }
  if (*(short *)(param_3 + 0x10) == 0x20b) {
    uVar3 = *(uint *)(param_3 + 0x2c);
    if (uVar3 == 0) goto LAB_140019e45;
    iVar1 = *(int *)((longlong)param_3 + 0x164);
  }
  else {
    if ((*(short *)(param_3 + 0x10) != 0x10b) || (uVar3 = *(uint *)(param_3 + 0x2a), uVar3 == 0))
    goto LAB_140019e45;
    iVar1 = *(int *)((longlong)param_3 + 0x154);
  }
  if (iVar1 != 0) {
    param_3[4] = (longlong)param_2 + (ulonglong)uVar3;
  }
LAB_140019e45:
  if ((LPCVOID)param_3[4] != (LPCVOID)0x0) {
    *(undefined4 *)((longlong)param_3 + 0xc) = 0x14;
    BVar2 = ReadProcessMemory(param_1,(LPCVOID)param_3[4],param_3 + 0xce,0x14,(SIZE_T *)0x0);
    if (BVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

