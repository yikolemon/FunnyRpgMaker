/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b67c2 */

ulonglong FUN_1800b67c2(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)*param_1;
  if (param_4 < (ulonglong)(((longlong *)*param_1)[1] - (longlong)plVar1 >> 5)) {
    uVar3 = *(longlong *)plVar1[param_4 * 4] + param_3;
    uVar5 = *(ulonglong *)*plVar1;
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    uVar6 = param_3 + ((longlong *)plVar1[param_4 * 4])[1];
    uVar5 = ((ulonglong *)*plVar1)[1];
    if (uVar5 <= uVar6) {
      uVar6 = uVar5;
    }
    FUN_1800b66ce(&local_48,uVar3,uVar6);
    if (param_4 == (((longlong *)*param_1)[1] - *(longlong *)*param_1 >> 5) - 1U) {
      uVar5 = CONCAT71((int7)(param_4 >> 8),(longlong)local_40 - (longlong)local_48 == 8);
    }
    else {
      puVar4 = local_48;
      do {
        if (puVar4 == local_40) {
          uVar5 = 0;
          goto LAB_1800b6899;
        }
        cVar2 = FUN_1800b67c2(param_2,param_2,*puVar4,param_4 + 1);
        puVar4 = puVar4 + 1;
      } while (cVar2 == '\0');
      uVar5 = CONCAT71((int7)(param_4 + 1 >> 8),1);
    }
LAB_1800b6899:
    FUN_180004cea(&local_48);
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}

