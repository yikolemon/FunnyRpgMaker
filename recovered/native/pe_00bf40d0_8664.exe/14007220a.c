/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007220a */

int FUN_14007220a(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar3 = 0x766d7478;
  if (param_3 == '\0') {
    uVar3 = 0x686d7478;
  }
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,uVar3,param_2,&local_34);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x430 + (ulonglong)(param_3 != '\0') * 4) = local_34;
    uVar2 = FUN_140020f72(param_2);
    *(undefined4 *)(param_1 + 0x4c8 + (ulonglong)(param_3 != '\0') * 4) = uVar2;
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

