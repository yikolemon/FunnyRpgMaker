/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180025d67 */

undefined8 * FUN_180025d67(undefined8 *param_1,undefined8 param_2,byte param_3,uint *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  char **local_50;
  char *local_40;
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar3 = *param_4;
  if ((uVar3 & 5) == 0) {
    pcVar1 = "Set to false";
    if (param_3 != 0) {
      pcVar1 = "Set to true";
    }
    local_40 = pcVar1 + 7;
    local_58 = (ulonglong)param_3 ^ 5;
    local_50 = &local_40;
    local_38 = local_58;
    FUN_1800287cf(param_1,param_2,param_4);
  }
  else {
    if ((uVar3 >> 0xe & 1) != 0) {
      local_40 = (char *)CONCAT44(local_40._4_4_,(uint)param_3);
      local_30 = 1;
      cVar2 = FUN_180025e5b(param_2,&local_40,param_4,0);
      if (cVar2 != '\0') {
        *param_1 = param_2;
        goto LAB_180025e2c;
      }
      uVar3 = *param_4;
    }
    FUN_180026041(param_1,param_2,
                  (ulonglong)param_3 |
                  (ulonglong)*(uint *)((longlong)&DAT_1802b07c0 + (ulonglong)(uVar3 >> 8 & 0xc)) <<
                  0x20,param_4);
  }
LAB_180025e2c:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_78);
}

