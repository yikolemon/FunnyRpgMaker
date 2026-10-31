/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405c98 */

WCHAR * __thiscall FUN_00405c98(void *this,WCHAR *param_1,WCHAR *param_2,CHAR param_3,CHAR *param_4)

{
  CHAR CVar1;
  int iVar2;
  void *extraout_ECX;
  UINT *local_28;
  undefined4 local_24;
  undefined4 local_20;
  CHAR local_19 [5];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_28;
  local_28 = this;
  if (param_1 != param_2) {
    local_28 = (UINT *)((int)this + 0x18);
    do {
      local_20 = 0;
      local_24 = 0;
      iVar2 = FUN_00481420(this,local_19,*param_1,&local_24,local_28);
      CVar1 = local_19[0];
      if (iVar2 != 1) {
        CVar1 = param_3;
      }
      *param_4 = CVar1;
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
      this = extraout_ECX;
    } while (param_1 != param_2);
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_28);
}

