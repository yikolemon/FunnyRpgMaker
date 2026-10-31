/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011852d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011852d(undefined4 *param_1)

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
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  local_68 = *param_1;
  uStack_64 = param_1[1];
  uStack_60 = param_1[2];
  uStack_5c = param_1[3];
  local_58 = *(undefined8 *)(param_1 + 4);
  FUN_140119d49(local_48,&local_68,&DAT_140e8d840);
  dVar1 = (double)FUN_1401184c7(local_48[0]);
  dVar2 = (double)FUN_1401184c7(local_40);
  dVar3 = (double)FUN_1401184c7(local_38);
  FUN_1401a09f0(SUB84(((dVar1 + dVar2) - (dVar3 + dVar3)) / _DAT_140e8e148,0),
                (dVar1 * DAT_140e8e140 + DAT_140e8e138 * dVar2 + dVar3) / DAT_140e8e140);
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_88);
}

