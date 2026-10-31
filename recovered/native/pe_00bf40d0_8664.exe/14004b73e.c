/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004b73e */

void FUN_14004b73e(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  iVar2 = (**(code **)(param_2 + 0x68))(param_2,6,&local_48,3);
  if (5 < iVar2) {
    uVar1 = -local_3c;
    if ((int)-local_3c < 0) {
      uVar1 = local_3c;
    }
    if (local_3c != 0) {
      if (uVar1 != 0x10000) {
        iVar2 = FUN_14001ecff(1000,uVar1);
        *(short *)(param_1 + 0x68) = (short)iVar2;
        local_48 = FUN_14001ecff(local_48,uVar1);
        local_44 = FUN_14001ecff(local_44,uVar1);
        local_40 = FUN_14001ecff(local_40,uVar1);
        local_38 = FUN_14001ecff(local_38,uVar1);
        uStack_34 = FUN_14001ecff(uStack_34,uVar1);
        local_3c = (~local_3c >> 0xe & 0x20000) - 0x10000;
      }
      *(uint *)(param_1 + 0x26c) = local_44;
      *(ulonglong *)(param_1 + 0x264) = CONCAT44(local_40,local_48);
      *(uint *)(param_1 + 0x270) = local_3c;
      uVar3 = FUN_140021bbb((uint *)(param_1 + 0x264));
      if ((char)uVar3 != '\0') {
        *(ulonglong *)(param_1 + 0x274) = CONCAT44((int)uStack_34 >> 0x10,(int)local_38 >> 0x10);
        goto LAB_14004b853;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x18) = 3;
LAB_14004b853:
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_68);
}

