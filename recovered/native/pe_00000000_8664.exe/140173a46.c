/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140173a46 */

int FUN_140173a46(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = 0;
  local_44 = (**(code **)(param_1 + 0x2a0))(param_1,0x67617370,param_2,0);
  if (local_44 != 0) goto LAB_140173add;
  local_44 = FUN_14012dc34(param_2,4);
  if (local_44 == 0) {
    uVar2 = FUN_14012dd9f(param_2);
    *(undefined2 *)(param_1 + 0x300) = uVar2;
    uVar3 = FUN_14012dd9f(param_2);
    FUN_14012dd58(param_2);
    if (*(ushort *)(param_1 + 0x300) < 2) {
      local_50 = &local_44;
      local_58 = 0;
      lVar4 = FUN_14012b8aa(uVar1,4,0,(ulonglong)uVar3);
      if (local_44 != 0) goto LAB_140173add;
      local_44 = FUN_14012dc34(param_2,(uint)uVar3 * 4);
      if (local_44 != 0) goto LAB_140173add;
      if (uVar3 != 0) {
        uVar5 = 0;
        do {
          uVar2 = FUN_14012dd9f(param_2);
          *(undefined2 *)(lVar4 + uVar5 * 4) = uVar2;
          uVar2 = FUN_14012dd9f(param_2);
          *(undefined2 *)(lVar4 + 2 + uVar5 * 4) = uVar2;
          uVar5 = uVar5 + 1;
        } while (uVar3 != uVar5);
      }
      *(longlong *)(param_1 + 0x308) = lVar4;
      *(ushort *)(param_1 + 0x302) = uVar3;
      FUN_14012dd58(param_2);
    }
    else {
      *(undefined2 *)(param_1 + 0x302) = 0;
      local_44 = 8;
    }
  }
  lVar4 = 0;
LAB_140173add:
  FUN_140128b39(uVar1,lVar4);
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_78);
}

