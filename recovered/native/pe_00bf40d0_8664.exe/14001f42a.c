/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f42a */

uint FUN_14001f42a(longlong param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x88), lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      local_2c = param_2;
      do {
        uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))(lVar1,&local_2c);
      } while (*(uint *)(param_1 + 0x10) <= uVar2);
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = local_2c;
      }
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

