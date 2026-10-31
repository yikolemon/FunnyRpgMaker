/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102288f0 */

DWORD FUN_102288f0(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = param_4 & 0xffff;
  local_14 = param_4 & 0xffff0000;
  local_10 = 0;
  local_1c = 0x18;
  local_c = 0;
  local_8 = 0;
  iVar1 = CreateFile2(param_2,param_3,7,3,&local_1c);
  *param_1 = iVar1;
  if (iVar1 != -1) {
    return 0;
  }
  DVar2 = GetLastError();
  return DVar2;
}

