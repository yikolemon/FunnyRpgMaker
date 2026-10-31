/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140022754 */

undefined8 *
FUN_140022754(undefined8 *param_1,undefined8 param_2,byte param_3,uint *param_4,undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 *local_50;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  if ((byte)(((byte)uVar2 & 7) - 2) < 5) {
    uVar2 = *param_4;
    if ((uVar2 >> 0xe & 1) != 0) {
      local_40 = (uint)param_3;
      local_30 = 2;
      cVar1 = FUN_14001b4bd(param_2,&local_40,param_4,param_5);
      if (cVar1 != '\0') {
        *param_1 = param_2;
        goto LAB_14002284d;
      }
      uVar2 = *param_4;
    }
    FUN_14001b6a3(param_1,param_2,
                  (ulonglong)param_3 |
                  (ulonglong)*(uint *)((longlong)&DAT_1401c8050 + (ulonglong)(uVar2 >> 8 & 0xc)) <<
                  0x20,param_4);
  }
  else {
    if ((uVar2 & 0x38) == 0x20 || (uVar2 & 0x2c00) != 0) {
      local_41 = 1;
      FUN_14001b296(&local_40,"invalid format specifier for char");
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(&local_40,&DAT_140ee3c60);
    }
    local_50 = &local_40;
    local_40._0_2_ = CONCAT11(param_3,(*param_4 & 7) == 1);
    local_58 = 1;
    FUN_14001d4d3(param_1,param_2,param_4,1);
  }
LAB_14002284d:
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

