/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005130d */

undefined1 thunk_FUN_140051312(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_d0 [120];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[2];
  uVar3 = param_1[3];
  FUN_140007310(auStack_d0);
  if (0xf < uVar3) {
    param_1 = puVar1;
  }
  FUN_140007482(auStack_d0,auStack_58,param_1,lVar2 + (longlong)param_1);
  FUN_1400076f4(auStack_d0);
  FUN_14000ff1e(param_2,auStack_58);
  FUN_140005242(auStack_58);
  return 1;
}

