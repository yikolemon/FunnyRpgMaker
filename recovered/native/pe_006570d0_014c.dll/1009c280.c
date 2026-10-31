/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009c280 */

void __thiscall FUN_1009c280(int *param_1,undefined4 param_2)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&uStack_14;
  uStack_18 = param_2;
  FUN_1009c306();
  uStack_18 = param_2;
  (**(code **)(*param_1 + 0x28))();
  if (DAT_1039cbb8 == '\x01') {
    uStack_18 = CONCAT13((char)param_1[10] - (char)param_1[9],(undefined3)uStack_18);
    FUN_1007e5fc((int)&uStack_18 + 3);
    if (param_1[9] != param_1[10]) {
      uStack_14 = 0xffffffff;
      FUN_1008bcec(param_1 + 9,&uStack_14);
    }
  }
  if (DAT_10388d00 == (uStack_10 ^ (uint)&uStack_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

