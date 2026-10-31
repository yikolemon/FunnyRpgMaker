/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021bb6f */

undefined8 FUN_18021bb6f(undefined8 *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_2c = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1[2];
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffff)) / auVar1,0) < param_2) {
LAB_18021bbdd:
    FUN_180219adc(param_1[1],0x40);
  }
  else {
    uVar3 = param_1[2] * param_2;
    local_48 = param_1[6];
    local_40 = &local_2c;
    uVar2 = FUN_1801cc8d6(*param_1,1,*(undefined4 *)(param_1 + 5),uVar3 & 0xffffffff);
    param_1[6] = uVar2;
    if (local_2c != 0) goto LAB_18021bbdd;
    param_1[3] = param_2;
    param_1[5] = uVar3;
    uVar2 = 1;
    if ((ulonglong)param_1[4] <= param_2) goto LAB_18021bbed;
    FUN_180219adc(param_1[1],0x82);
    param_1[4] = param_2;
  }
  uVar2 = 0;
LAB_18021bbed:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

