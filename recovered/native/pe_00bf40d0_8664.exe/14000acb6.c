/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000acb6 */

undefined8 * FUN_14000acb6(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  lVar1 = param_2[1];
  local_30 = param_1;
  lVar3 = FUN_14000ad7a(param_3);
  if ((ulonglong)local_30[3] < (ulonglong)(lVar3 + lVar1)) {
    lVar2 = local_30[2];
    FUN_14000ae44(local_30,(lVar3 + lVar1) - lVar2);
    local_30[2] = lVar2;
  }
  local_58 = *param_3;
  lStack_50 = param_3[1];
  local_48 = *param_2;
  lStack_40 = param_2[1];
  FUN_14000add9(&local_38,local_30,&local_48,&local_58);
  return local_30;
}

