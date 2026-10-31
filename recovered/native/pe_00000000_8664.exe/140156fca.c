/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140156fca */

void FUN_140156fca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_2 + 0xb8);
  if (uVar2 < *(uint *)(param_1 + 0x1b0)) {
    lVar3 = *(longlong *)(param_1 + 0x1b8);
    iVar7 = (**(code **)(param_2 + 0x68))(param_2,6,&local_58,3);
    if (5 < iVar7) {
      uVar4 = -local_4c;
      if ((int)-local_4c < 0) {
        uVar4 = local_4c;
      }
      if (local_4c != 0) {
        lVar8 = (ulonglong)uVar2 * 0xfc;
        lVar1 = lVar3 + lVar8;
        if (uVar4 != 0x10000) {
          uVar6 = FUN_14012b378(1000,uVar4);
          *(undefined2 *)(param_1 + 0x68) = uVar6;
          local_58 = FUN_14012b378(local_58,uVar4);
          local_54 = FUN_14012b378(local_54,uVar4);
          local_50 = FUN_14012b378(local_50,uVar4);
          local_48 = FUN_14012b378(local_48,uVar4);
          local_44 = FUN_14012b378(local_44,uVar4);
          local_4c = (~local_4c >> 0xe & 0x20000) - 0x10000;
        }
        *(undefined4 *)(lVar1 + 0xd8) = local_58;
        *(undefined4 *)(lVar1 + 0xe0) = local_54;
        *(undefined4 *)(lVar1 + 0xdc) = local_50;
        *(uint *)(lVar1 + 0xe4) = local_4c;
        cVar5 = FUN_14012e78c(lVar3 + lVar8 + 0xd8);
        if (cVar5 == '\0') {
          *(undefined4 *)(param_2 + 0x18) = 3;
        }
        else {
          *(int *)(lVar1 + 0xe8) = (int)local_48._2_2_;
          *(int *)(lVar1 + 0xec) = (int)local_44._2_2_;
        }
      }
    }
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

