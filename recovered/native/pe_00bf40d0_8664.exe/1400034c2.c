/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400034c2 */

undefined8 *
FUN_1400034c2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  LPSTR **pppCVar4;
  ulonglong uVar5;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  LPSTR *local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  LPSTR *local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_38 = param_1;
  uVar2 = FUN_140089260();
  local_98 = param_3[2];
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  local_a0 = param_3;
  FUN_140003d9e((LPSTR)local_80,uVar2,&local_a0);
  local_88 = param_4[2];
  if (7 < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  local_90 = param_4;
  FUN_140003d9e((LPSTR)local_60,uVar2,&local_90);
  uVar5 = param_2[1];
  uVar3 = local_50 + uVar5 + local_70 + (ulonglong)(local_50 != 0) * 4 + 4;
  if ((ulonglong)local_38[3] < uVar3) {
    lVar1 = local_38[2];
    FUN_1400041ea(local_38,uVar3 - lVar1);
    local_38[2] = lVar1;
    uVar5 = param_2[1];
  }
  FUN_1400039e4(local_38,(undefined8 *)*param_2,uVar5);
  FUN_1400039e4(local_38,(undefined8 *)&DAT_14011c09a,3);
  pppCVar4 = local_80;
  if (0xf < local_68) {
    pppCVar4 = (LPSTR **)local_80[0];
  }
  FUN_1400039e4(local_38,pppCVar4,local_70);
  if (local_50 != 0) {
    FUN_1400039e4(local_38,(undefined8 *)&DAT_14011c09e,4);
    pppCVar4 = local_60;
    if (0xf < local_48) {
      pppCVar4 = (LPSTR **)local_60[0];
    }
    FUN_1400039e4(local_38,pppCVar4,local_50);
    local_70 = local_50;
  }
  FUN_1400042d6(local_38,0x22,local_70);
  FUN_1400021ea((longlong *)local_60);
  FUN_1400021ea((longlong *)local_80);
  return local_38;
}

