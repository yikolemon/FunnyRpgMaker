/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020c502 */

void FUN_18020c502(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  int iStack_34;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  iVar3 = (**(code **)(param_2 + 0x68))(param_2,6,&local_48,0);
  if (5 < iVar3) {
    uVar1 = -local_3c;
    if ((int)-local_3c < 0) {
      uVar1 = local_3c;
    }
    if (local_3c != 0) {
      if (uVar1 != 0x10000) {
        local_48 = FUN_1801cc3a4(local_48,uVar1);
        local_44 = FUN_1801cc3a4(local_44,uVar1);
        local_40 = FUN_1801cc3a4(local_40,uVar1);
        local_38 = FUN_1801cc3a4(local_38,uVar1);
        iStack_34 = FUN_1801cc3a4(iStack_34,uVar1);
        local_3c = (~local_3c >> 0xe & 0x20000) - 0x10000;
      }
      *(undefined4 *)(param_1 + 0x26c) = local_44;
      *(ulonglong *)(param_1 + 0x264) = CONCAT44(local_40,local_48);
      *(uint *)(param_1 + 0x270) = local_3c;
      cVar2 = FUN_1801cf7b8(param_1 + 0x264);
      if (cVar2 != '\0') {
        *(ulonglong *)(param_1 + 0x274) = CONCAT44(iStack_34 >> 0x10,local_38 >> 0x10);
        goto LAB_18020c604;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x18) = 3;
LAB_18020c604:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

