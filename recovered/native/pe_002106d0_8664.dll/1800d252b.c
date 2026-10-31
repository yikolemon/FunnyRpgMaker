/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d252b */

undefined8 FUN_1800d252b(HANDLE param_1,undefined8 param_2,undefined4 param_3)

{
  BOOL BVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  BOOL local_130 [5];
  ushort local_11a;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_158;
  lVar2 = 0;
  lVar5 = 0;
  do {
    lVar4 = lVar5;
    lVar2 = FUN_1800d23dc(param_1,lVar2,local_130,0);
    lVar5 = lVar4;
    if ((local_11a >> 0xd & 1) == 0) {
      lVar5 = lVar2;
    }
  } while (lVar2 != 0);
  if (lVar4 == 0) {
    SetLastError(0x10dd);
  }
  else {
    BVar1 = IsWow64Process(param_1,local_130);
    if (BVar1 != 0) {
      local_138 = param_3;
      uVar3 = FUN_1800d25ff(param_1,lVar4,local_130[0],param_2);
      goto LAB_1800d25c1;
    }
  }
  uVar3 = 0;
LAB_1800d25c1:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_158)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_158);
}

