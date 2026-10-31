/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016b25b */

undefined8 FUN_14016b25b(undefined8 *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  local_2c = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1[2];
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffff)) / auVar1,0) < param_2) {
LAB_14016b2c9:
    FUN_1401691c8(param_1[1],0x40);
  }
  else {
    uVar3 = param_1[2] * param_2;
    local_48 = param_1[6];
    local_40 = &local_2c;
    uVar2 = FUN_14012b8aa(*param_1,1,*(undefined4 *)(param_1 + 5),uVar3 & 0xffffffff);
    param_1[6] = uVar2;
    if (local_2c != 0) goto LAB_14016b2c9;
    param_1[3] = param_2;
    param_1[5] = uVar3;
    uVar2 = 1;
    if ((ulonglong)param_1[4] <= param_2) goto LAB_14016b2d9;
    FUN_1401691c8(param_1[1],0x82);
    param_1[4] = param_2;
  }
  uVar2 = 0;
LAB_14016b2d9:
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_68)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_68);
}

