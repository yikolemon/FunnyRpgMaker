/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400460bc */

void FUN_1400460bc(uint param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auStack_48 [40];
  uint local_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if (param_2 != 0 || param_1 != 0) {
    local_20 = param_1;
    iStack_1c = param_2;
    FUN_1400202a4(&local_20);
    auVar1._4_4_ = iStack_1c;
    auVar1._0_4_ = local_20;
    auVar1._8_8_ = 0;
    auVar2._0_4_ = ((uint)((int)local_20 >> 0x1f) >> 0x1e) + local_20 >> 2;
    auVar2._4_4_ = ((uint)(iStack_1c >> 0x1f) >> 0x1e) + iStack_1c >> 2;
    auVar2._8_8_ = 0;
    auVar1 = pshuflw(auVar1,auVar2,0xe8);
    *param_3 = auVar1._0_4_;
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

