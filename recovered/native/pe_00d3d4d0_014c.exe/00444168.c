/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00444168 */

void __fastcall FUN_00444168(uint param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint local_14;
  int iStack_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_14;
  if (param_2 != 0 || param_1 != 0) {
    local_14 = param_1;
    iStack_10 = param_2;
    FUN_0041ff88(&local_14);
    auVar1._4_4_ = iStack_10;
    auVar1._0_4_ = local_14;
    auVar1._8_8_ = 0;
    auVar2._0_4_ = ((uint)((int)local_14 >> 0x1f) >> 0x1e) + local_14 >> 2;
    auVar2._4_4_ = ((uint)(iStack_10 >> 0x1f) >> 0x1e) + iStack_10 >> 2;
    auVar2._8_8_ = 0;
    auVar1 = pshuflw(auVar1,auVar2,0xe8);
    *param_3 = auVar1._0_4_;
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_14);
}

