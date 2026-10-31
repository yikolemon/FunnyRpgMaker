/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180028d3e */

undefined8
FUN_180028d3e(undefined8 param_1,undefined8 param_2,char param_3,uint *param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int *local_30;
  int local_20 [2];
  undefined *local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar1 = *param_4;
  if (((uVar1 & 0x38000) == 0x8000) && ((char)param_4[1] == '0')) {
    *(undefined1 *)(param_4 + 1) = 0x20;
    *param_4 = uVar1;
  }
  bVar3 = (uVar1 >> 0xc & 1) == 0;
  puVar2 = &DAT_18036c50b;
  if (bVar3) {
    puVar2 = &DAT_180366371;
  }
  local_18 = &DAT_18036c7fa;
  if (bVar3) {
    local_18 = &DAT_180368223;
  }
  if (param_3 != '\0') {
    local_18 = puVar2;
  }
  local_38 = 4 - (ulonglong)(param_5 == 0);
  local_30 = local_20;
  local_20[0] = param_5;
  FUN_1800294aa(param_1,param_2,param_4);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_58);
}

