/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140148174 */

void FUN_140148174(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auStack_48 [40];
  int local_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if (param_2 != 0 || param_1 != 0) {
    local_20 = param_1;
    iStack_1c = param_2;
    FUN_14012ce75(&local_20);
    auVar1._4_4_ = iStack_1c;
    auVar1._0_4_ = local_20;
    auVar1._8_8_ = 0;
    auVar2._0_4_ = ((uint)(local_20 >> 0x1f) >> 0x1e) + local_20 >> 2;
    auVar2._4_4_ = ((uint)(iStack_1c >> 0x1f) >> 0x1e) + iStack_1c >> 2;
    auVar2._8_8_ = 0;
    auVar1 = pshuflw(auVar1,auVar2,0xe8);
    *param_3 = auVar1._0_4_;
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

