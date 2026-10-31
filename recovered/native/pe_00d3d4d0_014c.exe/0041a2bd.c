/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041a2bd */

bool FUN_0041a2bd(HANDLE param_1,int param_2,uint param_3)

{
  bool bVar1;
  LPCVOID pvVar2;
  HANDLE pvVar3;
  int iVar4;
  LPCVOID pvVar5;
  LPCVOID pvVar6;
  int local_110;
  int local_10c [5];
  ushort local_f6;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_110;
  local_110 = 0;
  pvVar2 = (LPCVOID)0x0;
  pvVar6 = (LPCVOID)0x0;
  do {
    pvVar5 = pvVar6;
    pvVar2 = FUN_0041a1cc(param_1,(int)pvVar2,local_10c,(int *)0x0);
    pvVar6 = pvVar5;
    if ((local_f6 >> 0xd & 1) == 0) {
      pvVar6 = pvVar2;
    }
  } while (pvVar2 != (LPCVOID)0x0);
  if (pvVar5 == (LPCVOID)0x0) {
    SetLastError(0x10dd);
    bVar1 = false;
  }
  else {
    pvVar3 = GetCurrentProcess();
    iVar4 = FUN_0041a3a0(pvVar3,&local_110);
    bVar1 = false;
    if (iVar4 != 0) {
      if (local_110 == 0) {
        local_10c[0] = 1;
      }
      else {
        iVar4 = FUN_0041a3a0(param_1,local_10c);
        if (iVar4 == 0) goto LAB_0041a370;
      }
      bVar1 = FUN_0041a3ce(param_1,pvVar5,local_10c[0],param_2,param_3);
    }
  }
LAB_0041a370:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_110)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_110);
  }
  return bVar1;
}

