/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140051312 */

undefined1 FUN_140051312(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_d0 [120];
  undefined1 local_58 [32];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[2];
  uVar3 = param_1[3];
  FUN_140007310(local_d0);
  if (0xf < uVar3) {
    param_1 = puVar1;
  }
  FUN_140007482(local_d0,local_58,param_1,lVar2 + (longlong)param_1);
  FUN_1400076f4(local_d0);
  FUN_14000ff1e(param_2,local_58);
  FUN_140005242(local_58);
  return 1;
}

