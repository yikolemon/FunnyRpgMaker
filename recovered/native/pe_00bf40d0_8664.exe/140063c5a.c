/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140063c5a */

ulonglong FUN_140063c5a(undefined8 *param_1,byte *param_2,int param_3,longlong param_4,int param_5)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  local_50 = (byte *)*param_1;
  uVar5 = 0;
  pbVar4 = local_50;
  if (param_2 <= local_50) goto LAB_140063d45;
  if (*local_50 == 0x5b) {
    bVar6 = 0x5d;
LAB_140063cb2:
    local_50 = local_50 + 1;
    bVar1 = false;
  }
  else {
    if (*local_50 == 0x7b) {
      bVar6 = 0x7d;
      goto LAB_140063cb2;
    }
    bVar6 = 0;
    bVar1 = true;
  }
  uVar5 = 0;
  local_58 = param_1;
  do {
    pbVar4 = local_50;
    param_1 = local_58;
    if ((param_2 <= local_50) ||
       (FUN_1400638f2(&local_50,param_2), pbVar2 = local_50, pbVar4 = local_50, param_1 = local_58,
       param_2 <= local_50)) break;
    if (bVar6 == *local_50) {
      pbVar4 = local_50 + 1;
      break;
    }
    if ((longlong)param_3 <= (longlong)uVar5 && param_4 != 0) break;
    uVar3 = FUN_140062ae9((ulonglong *)&local_50,param_2,param_5);
    if (param_4 != 0) {
      *(uint *)(param_4 + uVar5 * 4) = uVar3;
    }
    pbVar4 = local_50;
    param_1 = local_58;
    if (pbVar2 == local_50) {
      uVar5 = 0xffffffff;
      break;
    }
    uVar5 = uVar5 + 1;
  } while (!bVar1);
LAB_140063d45:
  *param_1 = pbVar4;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar5 & 0xffffffff;
}

