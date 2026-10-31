/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e4edc */

int FUN_1801e4edc(uint *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  uint *local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_3c = 0;
  uVar2 = *param_1;
  if (uVar2 < 0x12) {
    if (*(longlong *)(param_1 + 2) == 0) {
      *(uint **)(param_1 + 2) = param_1 + 10;
      param_1[1] = 0x12;
    }
  }
  else {
    uVar1 = param_1[1];
    if (uVar1 <= uVar2) {
      if (0x1c71c70 < uVar1) {
        iVar4 = 0x40;
LAB_1801e4fc9:
        lVar6 = 0;
        goto LAB_1801e4f43;
      }
      uVar3 = (uVar1 >> 2) + uVar1 + 4;
      uVar2 = 0x1c71c71;
      if (uVar3 < 0x1c71c71) {
        uVar2 = uVar3;
      }
      local_58 = *(uint **)(param_1 + 2);
      if (local_58 == param_1 + 10) {
        local_50 = &local_3c;
        local_58 = (uint *)0x0;
        lVar6 = 0;
        uVar5 = FUN_1801c9c3f(param_2,0x48,0,uVar2);
        *(undefined8 *)(param_1 + 2) = uVar5;
        iVar4 = local_3c;
        if (local_3c != 0) goto LAB_1801e4f43;
        FUN_1802a82f0(uVar5,param_1 + 10,0x510);
      }
      else {
        local_50 = &local_3c;
        uVar5 = FUN_1801c9c3f(param_2,0x48,uVar1,uVar2);
        *(undefined8 *)(param_1 + 2) = uVar5;
        iVar4 = local_3c;
        if (local_3c != 0) goto LAB_1801e4fc9;
      }
      param_1[1] = uVar2;
      uVar2 = *param_1;
    }
  }
  *param_1 = uVar2 + 1;
  lVar6 = (ulonglong)uVar2 * 0x48 + *(longlong *)(param_1 + 2);
  iVar4 = 0;
LAB_1801e4f43:
  *param_3 = lVar6;
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
}

