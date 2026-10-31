/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eb6e5 */

undefined8 FUN_1801eb6e5(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = *param_3;
  local_34 = 0;
  uVar4 = 0;
  local_48 = (code *)&local_34;
  iVar2 = FUN_1801ccc39(uVar1,param_2,0,0);
  if (iVar2 == 0) {
    lVar3 = _malloc_base(local_34);
    if (lVar3 != 0) {
      local_48 = (code *)&local_34;
      iVar2 = FUN_1801ccc39(uVar1,param_2 & 0xffffffff,0,lVar3);
      if (iVar2 == 0) {
        local_48 = thunk_FUN_180290e40;
        uVar4 = (*(code *)**(undefined8 **)(param_3[99] + 0x48))(lVar3,local_34,2,lVar3);
        goto LAB_1801eb790;
      }
      thunk_FUN_180290e40(lVar3);
    }
    uVar4 = 0;
  }
LAB_1801eb790:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

