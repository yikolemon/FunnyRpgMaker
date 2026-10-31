/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012f2d9 */

int FUN_14012f2d9(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 longlong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  uint local_70 [8];
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  uVar1 = *param_1;
  local_48 = 0;
  local_70[0] = 0;
  if (param_5 != 0) {
    local_48 = FUN_1401299f6(param_1);
    if (local_48 == 0) {
      FUN_140128b39(uVar1,param_2);
      iVar2 = 0xb;
      goto LAB_14012f393;
    }
    local_70[0] = 8;
  }
  iVar2 = FUN_14012f3c2(param_1,param_2,param_3,local_50);
  if (iVar2 == 0) {
    local_70[0] = local_70[0] | 2;
    local_78 = 0;
    iVar2 = FUN_14012a7be(param_1,local_70,param_4,param_6);
  }
  else {
    FUN_140128b39(uVar1,param_2);
  }
LAB_14012f393:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_98)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_98);
}

