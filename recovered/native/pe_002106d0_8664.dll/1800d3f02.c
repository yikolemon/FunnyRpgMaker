/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d3f02 */

undefined8 FUN_1800d3f02(undefined2 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = param_2 - 1;
  local_res20 = param_4;
  if (uVar1 < 0x7fffffff) {
    local_38 = &local_res20;
    puVar3 = (ulonglong *)FUN_1800434e2();
    local_48 = 0;
    local_40 = &local_res20;
    uVar2 = FUN_1802725c4(*puVar3 | 1,param_1,uVar1,param_3);
    uVar4 = 0x8007007a;
    if ((((int)uVar2 < 0) || (uVar1 < uVar2)) || (uVar4 = 0, uVar1 == uVar2)) {
      param_1[param_2 + -1] = 0;
    }
  }
  else {
    uVar4 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

