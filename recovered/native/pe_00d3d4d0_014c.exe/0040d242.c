/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040d242 */

undefined4 * __cdecl FUN_0040d242(undefined4 *param_1,undefined4 *param_2,float param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 local_24;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&stack0xffffffc8;
  if (NAN(param_3)) {
    uVar1 = FUN_0048f7c0((uint)param_3);
    pcVar2 = (char *)&local_24;
    if (uVar1 != 0) {
      pcVar2 = (char *)((int)&local_24 + 1);
      local_24._0_1_ = '-';
    }
    pcVar2[2] = 'n';
    pcVar2[0] = 'n';
    pcVar2[1] = 'a';
    pcVar2 = pcVar2 + 3;
    if (pcVar2 != (char *)&local_24) goto LAB_0040d289;
  }
  uVar3 = FUN_0040d2fe(&local_24,&local_c,(uint)param_3);
  pcVar2 = (char *)uVar3;
LAB_0040d289:
  FUN_0040c483(param_1,(char *)&local_24,pcVar2,param_2);
  if (DAT_0050e8c0 != (local_c ^ (uint)&stack0xffffffc8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_c ^ (uint)&stack0xffffffc8);
  }
  return param_1;
}

