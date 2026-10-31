/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c61e8 */

bool FUN_1801c61e8(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_98;
  DAT_180420d18 = (longlong *)Direct3DCreate9(0x20);
  if (DAT_180420d18 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    local_70 = &local_58;
    local_38 = 0;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_30 = 0x100000001;
    uStack_40 = 1;
    local_28 = 0x50;
    uStack_20 = 0x100000000;
    local_68 = &DAT_180420d20;
    local_78 = 0x40;
    iVar1 = (**(code **)(*DAT_180420d18 + 0x80))(DAT_180420d18,0,1,param_1);
    bVar2 = -1 < iVar1;
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_98)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_98);
}

