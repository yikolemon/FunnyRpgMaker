/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e71f2 */

void FUN_1400e71f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  fVar2 = (float)param_3;
  fVar3 = (float)((ulonglong)param_3 >> 0x20);
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  fVar1 = (float)param_2;
  local_10 = param_2;
  switch(param_4) {
  case 0:
    local_14 = fVar4 + fVar3;
    local_18 = fVar1 + fVar2;
    local_1c = fVar4 - fVar3;
    local_20 = local_18;
    break;
  case 1:
    local_14 = fVar4 - fVar3;
    local_18 = fVar1 - fVar2;
    local_1c = fVar4 + fVar3;
    local_20 = local_18;
    break;
  case 2:
    local_14 = fVar4 + fVar3;
    local_18 = fVar1 - fVar2;
    local_20 = fVar1 + fVar2;
    local_1c = local_14;
    break;
  case 3:
    local_14 = fVar4 - fVar3;
    local_18 = fVar1 + fVar2;
    local_20 = fVar1 - fVar2;
    local_1c = local_14;
    break;
  default:
    goto switchD_1400e7247_default;
  }
  local_28 = param_5;
  FUN_1400de908();
switchD_1400e7247_default:
  if (DAT_140f17b40 != (local_8 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_8 ^ (ulonglong)auStack_48);
  }
  return;
}

