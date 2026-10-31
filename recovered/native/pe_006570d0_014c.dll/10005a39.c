/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10005a39 */

undefined4 * FUN_10005a39(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_EDX;
  undefined8 uVar3;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_10012990;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  if (param_4 != 0) {
    if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1000393b(0x16);
    }
    local_20 = (undefined1 *)&local_24;
    uVar3 = FUN_102290b0(param_2,param_3,param_4,0,0);
    iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    local_24 = (undefined4)uVar3;
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10003af6(iVar2);
    }
    FUN_1000396a(local_24,0);
    puVar1 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    FUN_102290b0(param_2,param_3,param_4,puVar1,local_24);
    if (extraout_EDX != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10003af6(extraout_EDX);
    }
  }
  ExceptionList = local_1c;
  return param_1;
}

