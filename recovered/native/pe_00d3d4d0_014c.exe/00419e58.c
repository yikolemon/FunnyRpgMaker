/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00419e58 */

undefined4 __thiscall FUN_00419e58(void *this,int param_1,uint param_2)

{
  undefined4 uVar1;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&local_8;
  uVar1 = FUN_00419eaa(this,(int)&param_2,4);
  if ((char)uVar1 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00419eaa(this,param_1,param_2);
  }
  if (DAT_0050e8c0 == (local_8 ^ (uint)&local_8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&local_8);
}

