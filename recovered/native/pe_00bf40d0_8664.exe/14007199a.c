/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007199a */

int FUN_14007199a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStackY_78 [32];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar1 = param_2[6];
  lVar4 = 0;
  local_44 = (**(code **)(param_1 + 0x2a0))(param_1,0x67617370,param_2,0);
  if (local_44 != 0) goto LAB_140071a31;
  local_44 = FUN_140021063(param_2,4);
  if (local_44 == 0) {
    uVar2 = FUN_1400211ce((longlong)param_2);
    *(ushort *)(param_1 + 0x300) = uVar2;
    uVar2 = FUN_1400211ce((longlong)param_2);
    FUN_140021187(param_2);
    if (*(ushort *)(param_1 + 0x300) < 2) {
      lVar4 = FUN_14001f231(lVar1,4,0,(uint)uVar2,0,&local_44);
      if (local_44 != 0) goto LAB_140071a31;
      local_44 = FUN_140021063(param_2,(uint)uVar2 * 4);
      if (local_44 != 0) goto LAB_140071a31;
      if (uVar2 != 0) {
        uVar5 = 0;
        do {
          uVar3 = FUN_1400211ce((longlong)param_2);
          *(ushort *)(lVar4 + uVar5 * 4) = uVar3;
          uVar3 = FUN_1400211ce((longlong)param_2);
          *(ushort *)(lVar4 + 2 + uVar5 * 4) = uVar3;
          uVar5 = uVar5 + 1;
        } while (uVar2 != uVar5);
      }
      *(longlong *)(param_1 + 0x308) = lVar4;
      *(ushort *)(param_1 + 0x302) = uVar2;
      FUN_140021187(param_2);
    }
    else {
      *(undefined2 *)(param_1 + 0x302) = 0;
      local_44 = 8;
    }
  }
  lVar4 = 0;
LAB_140071a31:
  FUN_14001c53d(lVar1,lVar4);
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_78)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_78);
}

