/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180216ab8 */

undefined4 FUN_180216ab8(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 *local_60;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  local_54 = 0;
  local_50 = *(undefined8 *)(param_3 + 0x10);
  FUN_180216e0c(param_1,param_3);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 0x134) = 0;
    cVar2 = *(char *)(param_1 + 0x101);
    lVar1 = param_1 + 0xb0;
    FUN_180217161(lVar1);
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_60 = &local_54;
    FUN_180217175(param_1,param_2,lVar1,&local_50);
    if (*(int *)(param_1 + 8) == 0) {
      if ((cVar2 != '\0') && (*(int *)(param_1 + 0xd0) < 0)) {
        *(undefined1 *)(param_1 + 0x134) = 1;
        FUN_180217161(lVar1);
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_60 = &local_54;
        FUN_180217175(param_1,param_2,lVar1,&local_50);
        if (*(int *)(param_1 + 8) != 0) goto LAB_180216b6b;
      }
      FUN_180219abd(lVar1);
    }
  }
LAB_180216b6b:
  *param_4 = local_54;
  FUN_180219adc((undefined4 *)(param_1 + 8),0);
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return *(undefined4 *)(param_1 + 8);
}

