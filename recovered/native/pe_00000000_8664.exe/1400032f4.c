/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400032f4 */

undefined8 *
FUN_1400032f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 ***local_80 [2];
  longlong local_70;
  ulonglong local_68;
  undefined8 ***local_60 [2];
  longlong local_50;
  ulonglong local_48;
  undefined1 local_39;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_38 = param_1;
  uVar1 = FUN_14018a990();
  local_98 = param_3[2];
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  local_a0 = param_3;
  FUN_140003bd0(local_80,uVar1,&local_a0,local_60);
  local_88 = param_4[2];
  if (7 < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  local_90 = param_4;
  FUN_140003bd0(local_60,uVar1,&local_90,&local_39);
  lVar4 = param_2[1];
  uVar2 = local_50 + lVar4 + local_70 + (ulonglong)(local_50 != 0) * 4 + 4;
  if ((ulonglong)local_38[3] < uVar2) {
    lVar4 = local_38[2];
    FUN_14000401c(local_38,uVar2 - lVar4);
    local_38[2] = lVar4;
    lVar4 = param_2[1];
  }
  FUN_140003816(local_38,*param_2,lVar4);
  FUN_140003816(local_38,&DAT_140ed9ac9,3);
  ppppuVar3 = local_80;
  if (0xf < local_68) {
    ppppuVar3 = (undefined8 ****)local_80[0];
  }
  FUN_140003816(local_38,ppppuVar3,local_70);
  if (local_50 != 0) {
    FUN_140003816(local_38,&DAT_140ed9acd,4);
    ppppuVar3 = local_60;
    if (0xf < local_48) {
      ppppuVar3 = (undefined8 ****)local_60[0];
    }
    FUN_140003816(local_38,ppppuVar3,local_50);
  }
  FUN_140004108(local_38,0x22);
  FUN_14000109c(local_60);
  FUN_14000109c(local_80);
  return local_38;
}

