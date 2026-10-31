/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ec9f3 */

void __fastcall FUN_101ec9f3(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int local_14;
  int iStack_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_14;
  if (param_2 != 0 || param_1 != 0) {
    local_14 = param_1;
    iStack_10 = param_2;
    FUN_101c3f10(&local_14);
    auVar1._4_4_ = iStack_10;
    auVar1._0_4_ = local_14;
    auVar1._8_8_ = 0;
    auVar2._0_4_ = ((uint)(local_14 >> 0x1f) >> 0x1e) + local_14 >> 2;
    auVar2._4_4_ = ((uint)(iStack_10 >> 0x1f) >> 0x1e) + iStack_10 >> 2;
    auVar2._8_8_ = 0;
    auVar1 = pshuflw(auVar1,auVar2,0xe8);
    *param_3 = auVar1._0_4_;
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

