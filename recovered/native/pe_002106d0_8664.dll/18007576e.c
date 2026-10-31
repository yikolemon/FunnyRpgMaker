/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007576e */

byte FUN_18007576e(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  undefined1 local_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_78;
  bVar1 = 1;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) != '\x01')) goto LAB_180075813;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (iVar2 == -1) {
LAB_180075811:
    bVar1 = 0;
  }
  else {
    local_58 = &local_50;
    iVar2 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                      ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_48,local_28);
    if (iVar2 == 3) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 0;
      bVar1 = 1;
      goto LAB_180075813;
    }
    if (iVar2 != 1) {
      if (iVar2 != 0) goto LAB_180075811;
      *(undefined1 *)((longlong)param_1 + 0x71) = 0;
    }
    lVar4 = local_50 - (longlong)local_48;
    if (lVar4 != 0) {
      lVar3 = FUN_180286a64(local_48,1,lVar4,param_1[0x10]);
      if (lVar4 != lVar3) goto LAB_180075811;
    }
    bVar1 = *(byte *)((longlong)param_1 + 0x71) ^ 1;
  }
LAB_180075813:
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_78);
}

