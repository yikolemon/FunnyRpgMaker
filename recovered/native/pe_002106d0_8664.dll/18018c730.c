/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018c730 */

void FUN_18018c730(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  local_58 = param_5;
  local_70 = param_3 - 1;
  uVar5 = (longlong)local_70 >> 1;
  local_78 = param_2;
  local_68 = param_3;
  local_60 = param_4;
  if ((longlong)param_2 < (longlong)uVar5) {
    uVar3 = param_2;
    do {
      puVar4 = (undefined8 *)(param_1 + uVar3 * 0x10 + 0x10);
      puVar1 = (undefined8 *)(param_1 + 8 + uVar3 * 0x10);
      cVar2 = FUN_18018c6bd(&local_58,puVar4,puVar1);
      param_2 = uVar3 * 2 + 1;
      if (cVar2 == '\0') {
        param_2 = uVar3 * 2 + 2;
        puVar1 = puVar4;
      }
      *(undefined8 *)(param_1 + uVar3 * 8) = *puVar1;
      uVar3 = param_2;
    } while ((longlong)param_2 < (longlong)uVar5);
  }
  puVar1 = local_60;
  uVar3 = local_78;
  if (((local_68 & 1) == 0) && (param_2 == uVar5)) {
    *(undefined8 *)(param_1 + uVar5 * 8) = *(undefined8 *)(param_1 + -8 + local_68 * 8);
    param_2 = local_70;
  }
  local_50 = param_5;
  if ((longlong)local_78 < (longlong)param_2) {
    do {
      uVar5 = param_2 - 1 >> 1;
      cVar2 = FUN_18018c6bd(&local_50,param_1 + uVar5 * 8,puVar1);
      if (cVar2 == '\0') break;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + uVar5 * 8);
      param_2 = uVar5;
    } while (uVar3 < uVar5);
  }
  *(undefined8 *)(param_1 + param_2 * 8) = *puVar1;
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
}

