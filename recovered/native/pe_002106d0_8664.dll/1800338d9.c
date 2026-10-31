/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800338d9 */

longlong *
FUN_1800338d9(longlong *param_1,longlong param_2,uint *param_3,longlong param_4,ulonglong param_5,
             char *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar1 = 0;
  if (param_5 <= param_3[2]) {
    uVar1 = param_3[2] - param_5;
  }
  uVar3 = uVar1 >> ((&DAT_180385fa9)[*param_3 >> 3 & 7] & 0x3f);
  uVar2 = param_4 + *(longlong *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVar1;
  if (*(ulonglong *)(param_2 + 0x10) < uVar2) {
    (**(code **)(param_2 + 0x18))(param_2,uVar2);
  }
  if (uVar3 != 0) {
    FUN_180027adf(local_50,param_2,uVar3,param_3);
    param_2 = local_50[0];
  }
  if (*param_6 == '\x01') {
    local_68 = *(undefined4 *)(param_6 + 0x10);
    uStack_64 = *(undefined4 *)(param_6 + 0x14);
    uStack_60 = *(undefined4 *)(param_6 + 0x18);
    uStack_5c = *(undefined4 *)(param_6 + 0x1c);
    local_70 = *(undefined8 *)(param_6 + 8);
    local_78 = param_2;
    FUN_180033ee8(local_50);
    param_2 = local_50[0];
  }
  else {
    FUN_180018bde(param_2,*(longlong *)(param_6 + 0x10),
                  *(longlong *)(param_6 + 8) + *(longlong *)(param_6 + 0x10));
  }
  if (uVar1 != uVar3) {
    FUN_180027adf(local_50,param_2,uVar1 - uVar3,param_3);
    param_2 = local_50[0];
  }
  *param_1 = param_2;
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_98);
}

