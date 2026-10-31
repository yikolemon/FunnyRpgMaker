/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405b9e */

byte * __thiscall FUN_00405b9e(void *this,byte *param_1,byte *param_2,WCHAR *param_3)

{
  uint uVar1;
  WCHAR WVar2;
  undefined1 auStack_24 [2];
  WCHAR local_22;
  undefined4 local_20;
  undefined4 local_1c;
  byte local_15;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_24;
  if (param_1 != param_2) {
    do {
      local_15 = *param_1;
      local_1c = 0;
      local_20 = 0;
      uVar1 = FUN_004814e0(&local_22,&local_15,1,&local_20,(UINT *)((int)this + 0x18));
      WVar2 = L'\xffff';
      if (-1 < (int)uVar1) {
        WVar2 = local_22;
      }
      *param_3 = WVar2;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_1 != param_2);
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)auStack_24)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)auStack_24);
}

