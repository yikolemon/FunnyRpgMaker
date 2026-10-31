/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cabcc */

int FUN_1801cabcc(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    local_34 = 0x23;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x90);
    if (lVar2 == 0) {
      local_34 = 6;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = FUN_1801c9a4b(uVar1,*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x40),&local_34);
      if (local_34 == 0) {
        *(longlong *)(lVar2 + 8) = param_1;
        local_34 = FUN_1801cacaa(lVar2);
        if (local_34 == 0) {
          *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x78);
          *(longlong *)(param_1 + 0x78) = lVar2;
          local_34 = 0;
          if (param_2 != (longlong *)0x0) {
            *param_2 = lVar2;
          }
        }
        else {
          FUN_1801cad8c(lVar2);
          FUN_1801c9b65(uVar1,lVar2);
        }
      }
      else if (param_2 != (longlong *)0x0) {
        *param_2 = 0;
      }
    }
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

