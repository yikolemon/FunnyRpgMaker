/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405c2e */

uint __thiscall FUN_00405c2e(void *this,byte param_1)

{
  uint uVar1;
  undefined1 auStack_18 [2];
  WCHAR local_16;
  undefined4 local_14;
  undefined4 local_10;
  byte local_9;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)auStack_18;
  local_9 = param_1;
  local_10 = 0;
  local_14 = 0;
  uVar1 = FUN_004814e0(&local_16,&local_9,1,&local_14,(UINT *)((int)this + 0x18));
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)(ushort)local_16;
  }
  if (DAT_0050e8c0 == (local_8 ^ (uint)auStack_18)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)auStack_18);
}

