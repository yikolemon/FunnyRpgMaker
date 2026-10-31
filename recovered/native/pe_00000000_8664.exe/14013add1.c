/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013add1 */

undefined8 FUN_14013add1(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar1 = *param_3;
  local_34 = 0;
  uVar4 = 0;
  local_48 = (code *)&local_34;
  iVar2 = FUN_14012bc0d(uVar1,param_2,0,0);
  if (iVar2 == 0) {
    lVar3 = _malloc_base(local_34);
    if (lVar3 != 0) {
      local_48 = (code *)&local_34;
      iVar2 = FUN_14012bc0d(uVar1,param_2 & 0xffffffff,0,lVar3);
      if (iVar2 == 0) {
        local_48 = thunk_FUN_1401aea30;
        uVar4 = (*(code *)**(undefined8 **)(param_3[99] + 0x48))(lVar3,local_34,2,lVar3);
        goto LAB_14013ae7c;
      }
      thunk_FUN_1401aea30(lVar3);
    }
    uVar4 = 0;
  }
LAB_14013ae7c:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

