/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c73d9 */

bool FUN_1801c73d9(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_20 = (longlong *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_48 = 0;
    uStack_40 = 0;
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar1 == 0) {
      bVar2 = false;
      iVar1 = (**(code **)(*param_1 + 0x40))(param_1,0,&local_48);
      if (iVar1 == 0) {
        local_58 = 0x20;
        local_60 = 3;
        local_68 = 0xa0200;
        iVar1 = (**(code **)(*local_20 + 0x50))
                          (local_20,local_38 & 0xffffffff,local_38._4_4_,uStack_40._4_4_);
        bVar2 = iVar1 == 0;
      }
    }
    else {
      bVar2 = false;
    }
    (**(code **)(*local_20 + 0x10))();
  }
  else {
    bVar2 = false;
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_88)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_88);
}

