/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002be73 */

void FUN_14002be73(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_39;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  for (lVar1 = FUN_14000e108(param_1,0x7b,2); lVar1 != -1;
      lVar1 = FUN_14000e108(param_1,0x7b,lVar1 + 1)) {
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    local_48 = 2;
    lVar2 = FUN_14000d806(puVar5,param_1[2],lVar1 + 1,&DAT_140171469);
    if (lVar2 != -1) {
      puVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      if (*(char *)((longlong)puVar5 + lVar2) == '}') {
        uVar3 = (lVar2 - lVar1) + 1;
        uVar6 = param_1[2] - lVar1;
        if (uVar3 <= uVar6) {
          uVar6 = uVar3;
        }
        lVar2 = param_1[2] - uVar6;
        FUN_140135ff0((longlong)puVar5 + lVar1,uVar6 + (longlong)puVar5 + lVar1,(lVar2 - lVar1) + 1)
        ;
        param_1[2] = lVar2;
      }
    }
  }
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  lVar1 = param_1[2];
  local_39 = 0x21;
  FUN_14000d6fa(&local_38,puVar5,lVar1 + (longlong)puVar5);
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  uVar3 = (lVar1 + (longlong)puVar5) - local_38;
  uVar6 = param_1[2] - (local_38 - (longlong)puVar4);
  if (uVar3 <= uVar6) {
    uVar6 = uVar3;
  }
  lVar1 = param_1[2] - uVar6;
  FUN_140135ff0(local_38,uVar6 + local_38,(lVar1 - (local_38 - (longlong)puVar4)) + 1);
  param_1[2] = lVar1;
  if (DAT_1401c9640 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_30 ^ (ulonglong)auStack_68);
}

