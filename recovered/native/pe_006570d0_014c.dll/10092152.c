/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10092152 */

undefined4 * __thiscall FUN_10092152(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c3930;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_2[4] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 7;
  local_14 = 0;
  uVar1 = param_4 - param_3 >> 1;
  local_24 = param_1 + 8;
  do {
    if (uVar1 <= (uint)param_2[4]) goto code_r0x100921ea;
    FUN_10004c42(uVar1,0);
    puVar2 = param_2;
    if (7 < (uint)param_2[5]) {
      puVar2 = (undefined4 *)*param_2;
    }
    uVar1 = thunk_FUN_10233490(puVar2,(int)puVar2 + param_2[4] * 2,param_3,param_4,local_24);
  } while (uVar1 != 0xffffffff);
  uVar1 = 0;
code_r0x100921ea:
  FUN_10004c42(uVar1,0);
  ExceptionList = local_1c;
  return param_2;
}

