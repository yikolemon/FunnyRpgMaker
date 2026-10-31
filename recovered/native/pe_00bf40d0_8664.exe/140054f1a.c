/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140054f1a */

void FUN_140054f1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_2 + 0xb8);
  if (uVar2 < *(uint *)(param_1 + 0x1b0)) {
    lVar3 = *(longlong *)(param_1 + 0x1b8);
    iVar5 = (**(code **)(param_2 + 0x68))(param_2,6,&local_58,3);
    if (5 < iVar5) {
      uVar4 = -local_4c;
      if ((int)-local_4c < 0) {
        uVar4 = local_4c;
      }
      if (local_4c != 0) {
        lVar7 = (ulonglong)uVar2 * 0xfc;
        lVar1 = lVar3 + lVar7;
        if (uVar4 != 0x10000) {
          iVar5 = FUN_14001ecff(1000,uVar4);
          *(short *)(param_1 + 0x68) = (short)iVar5;
          local_58 = FUN_14001ecff(local_58,uVar4);
          local_54 = FUN_14001ecff(local_54,uVar4);
          local_50 = FUN_14001ecff(local_50,uVar4);
          local_48 = FUN_14001ecff(local_48,uVar4);
          local_44 = FUN_14001ecff(local_44,uVar4);
          local_4c = (~local_4c >> 0xe & 0x20000) - 0x10000;
        }
        *(uint *)(lVar1 + 0xd8) = local_58;
        *(uint *)(lVar1 + 0xe0) = local_54;
        *(uint *)(lVar1 + 0xdc) = local_50;
        *(uint *)(lVar1 + 0xe4) = local_4c;
        uVar6 = FUN_140021bbb((uint *)(lVar3 + lVar7 + 0xd8));
        if ((char)uVar6 == '\0') {
          *(undefined4 *)(param_2 + 0x18) = 3;
        }
        else {
          *(int *)(lVar1 + 0xe8) = (int)local_48._2_2_;
          *(int *)(lVar1 + 0xec) = (int)local_44._2_2_;
        }
      }
    }
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_78);
}

