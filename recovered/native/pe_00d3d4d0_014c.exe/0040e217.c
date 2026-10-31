/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040e217 */

undefined4 * __cdecl FUN_0040e217(undefined4 *param_1,undefined4 *param_2,double param_3)

{
  uint uVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined4 local_24;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&stack0xffffffc4;
  if (NAN(param_3)) {
    uVar1 = FUN_0048f660(SUB84(param_3,0),(uint)((ulonglong)param_3 >> 0x20));
    pcVar2 = (char *)&local_24;
    if (uVar1 != 0) {
      pcVar2 = (char *)((int)&local_24 + 1);
      local_24._0_1_ = '-';
    }
    pcVar2[2] = 'n';
    pcVar2[0] = 'n';
    pcVar2[1] = 'a';
    pcVar2 = pcVar2 + 3;
    if (pcVar2 != (char *)&local_24) goto LAB_0040e25f;
  }
  uVar3 = FUN_0040e2d4(&local_24,&local_c,(ulonglong)param_3);
  pcVar2 = (char *)uVar3;
LAB_0040e25f:
  FUN_0040c483(param_1,(char *)&local_24,pcVar2,param_2);
  if (DAT_0050e8c0 != (local_c ^ (uint)&stack0xffffffc4)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_c ^ (uint)&stack0xffffffc4);
  }
  return param_1;
}

