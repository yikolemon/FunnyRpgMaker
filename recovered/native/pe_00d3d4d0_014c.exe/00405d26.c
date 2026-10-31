/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405d26 */

uint __thiscall FUN_00405d26(void *this,WCHAR param_1,uint param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  byte local_d [5];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&local_18;
  local_14 = 0;
  local_18 = 0;
  iVar1 = FUN_00481420((void *)((int)this + 0x18),(LPSTR)local_d,param_1,&local_18,
                       (void *)((int)this + 0x18));
  if (iVar1 == 1) {
    param_2 = (uint)local_d[0];
  }
  if (DAT_0050e8c0 != (local_8 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&local_18);
  }
  return param_2;
}

