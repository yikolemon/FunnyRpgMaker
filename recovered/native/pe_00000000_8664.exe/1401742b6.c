/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401742b6 */

int FUN_1401742b6(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar3 = 0x766d7478;
  if (param_3 == '\0') {
    uVar3 = 0x686d7478;
  }
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,uVar3,param_2,&local_34);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x430 + (ulonglong)(param_3 != '\0') * 4) = local_34;
    uVar2 = FUN_14012db43(param_2);
    *(undefined4 *)(param_1 + 0x4c8 + (ulonglong)(param_3 != '\0') * 4) = uVar2;
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

