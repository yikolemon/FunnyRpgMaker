/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d5a4 */

int FUN_14001d5a4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [32];
  ulonglong uVar4;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    local_34 = 0x23;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x90);
    if (lVar1 == 0) {
      local_34 = 6;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x10);
      pauVar3 = FUN_14001c423(lVar2,*(uint *)(*(longlong *)(lVar1 + 0x18) + 0x40),&local_34);
      if (local_34 == 0) {
        *(longlong *)(*pauVar3 + 8) = param_1;
        uVar4 = FUN_14001d682((longlong *)pauVar3);
        local_34 = (int)uVar4;
        if (local_34 == 0) {
          *(undefined8 *)(*pauVar3 + 0x10) = *(undefined8 *)(param_1 + 0x78);
          *(undefined1 (**) [32])(param_1 + 0x78) = pauVar3;
          local_34 = 0;
          if (param_2 != (undefined8 *)0x0) {
            *param_2 = pauVar3;
          }
        }
        else {
          FUN_14001d764((longlong)pauVar3);
          FUN_14001c53d(lVar2,(longlong)pauVar3);
        }
      }
      else if (param_2 != (undefined8 *)0x0) {
        *param_2 = 0;
      }
    }
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

