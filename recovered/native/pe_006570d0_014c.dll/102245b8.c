/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102245b8 */

undefined4
FUN_102245b8(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4c;
  undefined4 local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  uVar2 = 6;
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != (undefined4 *)0x0)) {
    local_4c = param_4;
    local_48 = param_5;
    local_40 = param_2;
    local_3c = *param_3;
    local_2c = &LAB_1022468b;
    local_28 = &LAB_102246d3;
    local_24 = param_1;
    iVar1 = FUN_102246d8();
    if (iVar1 == 0) {
      iVar1 = FUN_10224757();
      if (iVar1 == 1) {
        *param_3 = local_38;
        iVar1 = FUN_102260ad();
      }
      else {
        FUN_102260ad();
        if (iVar1 == 0) {
          uVar2 = 10;
          goto LAB_1022461e;
        }
      }
      uVar2 = 0;
      if (iVar1 + 5U < 8) {
        uVar2 = *(undefined4 *)(&DAT_10323520 + iVar1 * 4);
      }
    }
  }
LAB_1022461e:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_4c)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

