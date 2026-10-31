/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180076c54 */

undefined1
FUN_180076c54(longlong param_1,undefined8 *param_2,longlong param_3,undefined2 *param_4,
             longlong *param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  undefined8 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  undefined1 auStack_78 [43];
  undefined1 local_4d [5];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  *param_5 = param_3;
  *param_8 = param_6;
  puVar3 = (undefined2 *)*param_5;
  puVar4 = param_4;
  if (puVar3 != param_4) {
    do {
      puVar4 = puVar3;
      if (param_6 == param_7) break;
      if (param_7 - param_6 < 5) {
        uVar1 = *param_2;
        uVar2 = FUN_18023d480(local_4d,*puVar3,param_2,param_1 + 0x10);
        if ((int)uVar2 < 0) goto LAB_180076d41;
        uVar5 = (ulonglong)uVar2;
        if (param_7 - *param_8 < (longlong)uVar5) {
          *param_2 = uVar1;
          puVar4 = (undefined2 *)*param_5;
          break;
        }
        FUN_1802a82f0(*param_8,local_4d,uVar5);
        *param_5 = *param_5 + 2;
      }
      else {
        uVar2 = FUN_18023d480(param_6,*puVar3,param_2,param_1 + 0x10);
        if ((int)uVar2 < 0) {
LAB_180076d41:
          uVar6 = 2;
          goto LAB_180076d57;
        }
        *param_5 = *param_5 + 2;
        uVar5 = (ulonglong)uVar2;
      }
      param_6 = uVar5 + *param_8;
      *param_8 = param_6;
      puVar3 = (undefined2 *)*param_5;
      puVar4 = param_4;
    } while (puVar3 != param_4);
  }
  uVar6 = puVar4 != param_4;
LAB_180076d57:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar6;
}

