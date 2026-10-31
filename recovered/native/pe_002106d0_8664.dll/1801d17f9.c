/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d17f9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801d17f9(undefined4 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_68 = *param_1;
  uStack_64 = param_1[1];
  uStack_60 = param_1[2];
  uStack_5c = param_1[3];
  local_58 = *(undefined8 *)(param_1 + 4);
  FUN_1801d3015(local_48,&local_68,&DAT_180329850);
  dVar1 = (double)FUN_1801d1793(local_48[0]);
  dVar2 = (double)FUN_1801d1793(local_40);
  dVar3 = (double)FUN_1801d1793(local_38);
  FUN_180282710(SUB84(((dVar1 + dVar2) - (dVar3 + dVar3)) / _DAT_18032a158,0),
                (dVar1 * DAT_18032a150 + DAT_18032a148 * dVar2 + dVar3) / DAT_18032a150);
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_88);
}

