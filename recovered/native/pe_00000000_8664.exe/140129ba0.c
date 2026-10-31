/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129ba0 */

int FUN_140129ba0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
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
      lVar2 = FUN_140128a1f(uVar1,*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x40),&local_34);
      if (local_34 == 0) {
        *(longlong *)(lVar2 + 8) = param_1;
        local_34 = FUN_140129c7e(lVar2);
        if (local_34 == 0) {
          *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x78);
          *(longlong *)(param_1 + 0x78) = lVar2;
          local_34 = 0;
          if (param_2 != (longlong *)0x0) {
            *param_2 = lVar2;
          }
        }
        else {
          FUN_140129d60(lVar2);
          FUN_140128b39(uVar1,lVar2);
        }
      }
      else if (param_2 != (longlong *)0x0) {
        *param_2 = 0;
      }
    }
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

