/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10091650 */

undefined4 * __thiscall FUN_10091650(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **local_4c [4];
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined1 local_25;
  undefined4 **local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_4c;
  local_18 = &LAB_100c38d0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_2[4] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 7;
  local_14 = 0;
  if (param_3 != param_4) {
    local_2c = *param_1;
    iVar1 = FUN_10258e10(local_2c);
    iVar2 = FUN_10259080(iVar1 + 4,0x103882f4);
    if ((iVar2 != 0) && (iVar1 = FUN_10259080(iVar1 + 4,0x10388324), iVar1 != 0)) {
      ExceptionList = local_1c;
      return param_2;
    }
    local_24 = local_4c;
    FUN_10091550(param_3,param_4,&local_25);
    local_14 = 1;
    if (7 < local_38) {
      local_24 = local_4c[0];
    }
    local_30 = (int)local_24 + local_3c * 2;
    local_2c = local_2c + 8;
    do {
      if (local_3c <= (uint)param_2[4]) goto LAB_1009175c;
      local_34 = local_3c;
      FUN_10004c42(local_3c,0);
      puVar3 = param_2;
      if (7 < (uint)param_2[5]) {
        puVar3 = (undefined4 *)*param_2;
      }
      local_3c = FUN_1022ced0(puVar3,(int)puVar3 + local_34 * 2,local_24,local_30,local_2c);
    } while (local_3c != 0xffffffff);
    local_3c = 0;
LAB_1009175c:
    FUN_10004c42(local_3c,0);
    local_14 = 0xffffffff;
    FUN_10001134();
  }
  ExceptionList = local_1c;
  return param_2;
}

