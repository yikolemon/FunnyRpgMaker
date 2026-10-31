/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140022a03 */

ulonglong FUN_140022a03(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong local_68;
  undefined8 **local_60 [2];
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_1[2] == 0) {
    uVar6 = 0;
  }
  else {
    local_68 = 0;
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    uVar8 = FUN_140118100(puVar5,&local_68);
    *param_2 = uVar8;
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    if (local_68 == (longlong)puVar5 + param_1[2]) {
      uVar6 = CONCAT71((int7)((ulonglong)&local_68 >> 8),1);
    }
    else {
      uVar6 = 0;
      lVar2 = FUN_14000d806(puVar5,param_1[2],0,&DAT_140171c1d,2);
      if (lVar2 != -1) {
        FUN_140006874(local_60,param_1);
        pppuVar3 = local_60;
        if (0xf < local_48) {
          pppuVar3 = (undefined8 ***)local_60[0];
        }
        lVar2 = local_50 + (longlong)pppuVar3;
        local_31 = 0x5f;
        FUN_14000d6fa(&local_40,pppuVar3,lVar2);
        pppuVar3 = local_60;
        if (0xf < local_48) {
          pppuVar3 = (undefined8 ***)local_60[0];
        }
        uVar7 = lVar2 - local_40;
        uVar6 = local_50 - (local_40 - (longlong)pppuVar3);
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        lVar2 = local_50 - uVar6;
        FUN_140135ff0(local_40,uVar6 + local_40,(lVar2 - (local_40 - (longlong)pppuVar3)) + 1);
        pppuVar3 = local_60;
        if (0xf < local_48) {
          pppuVar3 = (undefined8 ***)local_60[0];
        }
        local_31 = 0x27;
        local_50 = lVar2;
        FUN_14000d6fa(&local_40,pppuVar3,lVar2 + (longlong)pppuVar3);
        pppuVar4 = local_60;
        if (0xf < local_48) {
          pppuVar4 = (undefined8 ***)local_60[0];
        }
        uVar7 = (lVar2 + (longlong)pppuVar3) - local_40;
        uVar6 = local_50 - (local_40 - (longlong)pppuVar4);
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        lVar2 = local_50 - uVar6;
        FUN_140135ff0(local_40,uVar6 + local_40,(lVar2 - (local_40 - (longlong)pppuVar4)) + 1);
        local_50 = lVar2;
        uVar1 = FUN_140022a03(local_60,param_2);
        uVar6 = (ulonglong)uVar1;
        FUN_1400017de(local_60);
      }
    }
  }
  return uVar6 & 0xffffffff;
}

