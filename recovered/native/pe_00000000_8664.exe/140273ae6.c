/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140273ae6 */

undefined8 * FUN_140273ae6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 **local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  char local_49 [9];
  
  local_49[1] = -2;
  local_49[2] = -1;
  local_49[3] = -1;
  local_49[4] = -1;
  local_49[5] = -1;
  local_49[6] = -1;
  local_49[7] = -1;
  local_49[8] = -1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_78 = (undefined8 ***)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 3;
  local_49[0] = '\0';
  local_58 = param_1;
  for (uVar8 = 0; cVar5 = local_49[0], uVar8 < (ulonglong)param_2[2]; uVar8 = uVar8 + uVar7) {
    puVar6 = (undefined8 *)*param_2;
    uVar4 = param_2[3];
    puVar2 = param_2;
    if (3 < uVar4) {
      puVar2 = puVar6;
    }
    uVar1 = FUN_140274678((longlong)puVar2 + uVar8 * 4);
    if ((int)uVar1 < 1) {
      if (cVar5 == '\0' && local_68 != 0) {
        FUN_14027477a(local_58,local_49,&local_78);
        local_68 = 0;
        pppuVar3 = &local_78;
        if (3 < local_60) {
          pppuVar3 = (undefined8 ***)local_78;
        }
        *(undefined4 *)pppuVar3 = 0;
        puVar6 = (undefined8 *)*param_2;
        uVar4 = param_2[3];
      }
      if (uVar4 < 4) {
        puVar6 = param_2;
      }
      uVar7 = 1;
      cVar5 = '\x01';
      FUN_140274cdc(&local_78,uVar8 * 4 + (longlong)puVar6,1);
    }
    else {
      if ((cVar5 != '\0') && (local_68 != 0)) {
        FUN_14027477a(local_58,local_49,&local_78);
        local_68 = 0;
        pppuVar3 = &local_78;
        if (3 < local_60) {
          pppuVar3 = (undefined8 ***)local_78;
        }
        *(undefined4 *)pppuVar3 = 0;
        puVar6 = (undefined8 *)*param_2;
        uVar4 = param_2[3];
      }
      uVar7 = (ulonglong)uVar1;
      if (uVar4 < 4) {
        puVar6 = param_2;
      }
      FUN_140274cdc(&local_78,uVar8 * 4 + (longlong)puVar6,uVar7);
      cVar5 = '\0';
    }
    local_49[0] = cVar5;
  }
  if (local_68 != 0) {
    FUN_14027477a(local_58,local_49,&local_78);
    local_68 = 0;
    pppuVar3 = &local_78;
    if (3 < local_60) {
      pppuVar3 = (undefined8 ***)local_78;
    }
    *(undefined4 *)pppuVar3 = 0;
  }
  if (3 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140274cdc(&local_78,param_2,0);
  FUN_140272f88(&local_78);
  return local_58;
}

