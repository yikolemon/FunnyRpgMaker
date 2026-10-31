/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140044d79 */

undefined8 * FUN_140044d79(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  lVar1 = *(longlong *)(param_2 + 8);
  local_30 = param_1;
  lVar2 = FUN_140044e74(param_3);
  uVar3 = lVar2 + lVar1;
  if ((ulonglong)local_30[3] < uVar3) {
    lVar1 = local_30[2];
    FUN_14000e9ea(local_30,uVar3 - lVar1);
    local_30[2] = lVar1;
  }
  FUN_140044ed3(local_38);
  return local_30;
}

