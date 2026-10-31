/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038d19 */

undefined8 FUN_140038d19(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  code *local_48;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  lVar1 = *param_3;
  local_34 = 0;
  uVar4 = 0;
  local_48 = (code *)&local_34;
  uVar2 = FUN_14001f594(lVar1,param_2,0,0);
  if ((int)uVar2 == 0) {
    pvVar3 = _malloc_base((ulonglong)local_34);
    if (pvVar3 != (LPVOID)0x0) {
      local_48 = (code *)&local_34;
      uVar2 = FUN_14001f594(lVar1,param_2,0,pvVar3);
      if ((int)uVar2 == 0) {
        local_48 = thunk_FUN_1400a1290;
        uVar4 = (*(code *)**(undefined8 **)(param_3[99] + 0x48))(pvVar3,local_34,2,pvVar3);
        goto LAB_140038dc4;
      }
      thunk_FUN_1400a1290(pvVar3);
    }
    uVar4 = 0;
  }
LAB_140038dc4:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_68);
}

