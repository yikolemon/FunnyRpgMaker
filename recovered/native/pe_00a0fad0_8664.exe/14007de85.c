/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007de85 */

void FUN_14007de85(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  undefined1 local_88 [32];
  undefined8 local_68;
  int local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 **local_48 [3];
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140055d5e(param_1,local_88);
  FUN_14007dcb3(local_48,param_2,local_88);
  FUN_140005690(local_88);
  FUN_140007025();
  local_68 = 0xffff00000000;
  pppuVar5 = local_48;
  if (7 < local_30) {
    pppuVar5 = (undefined8 ***)local_48[0];
  }
  local_60 = FUN_1400dcbb0(pppuVar5,local_88,3,0xffffffff);
  FUN_140007276(&local_68,local_60,local_88);
  iVar2 = local_60;
  local_50 = FUN_140007025();
  local_58[0] = iVar2;
  iVar1 = (int)local_68;
  if ((int)local_68 == 0) {
    if (iVar2 != 0) goto LAB_14007df9c;
  }
  else {
    FUN_140007025();
    if (iVar1 != 1) goto LAB_14007df70;
  }
  if (local_30 < 8) {
    local_48[0] = local_48;
  }
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  uVar3 = FUN_1400dc700(puVar4,local_48[0],2);
  if (uVar3 >> 0x20 != 0) {
    FUN_14008497d("copy_file",uVar3 >> 0x20,param_1,local_48);
LAB_14007df9c:
                    /* WARNING: Subroutine does not return */
    FUN_14004137b("exists",local_58,local_48);
  }
LAB_14007df70:
  FUN_140005690(local_48);
  return;
}

