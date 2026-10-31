/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180234ff0 */

int FUN_180234ff0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (param_1 == (undefined8 *)0x0 || param_2 == 0) {
    local_3c = 0x28;
    goto LAB_180235182;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_3c = FUN_1802351b6(param_2);
  if (local_3c != 0) goto LAB_180235182;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[6] = uVar1;
  uVar4 = FUN_1801cc006(uVar1,0x2088,&local_3c);
  if (local_3c == 0) {
    local_3c = FUN_180235337(uVar4,param_1,param_2);
    if (local_3c != 0) {
      FUN_1801c9b65(uVar1,uVar4);
      goto LAB_180235182;
    }
    param_1[2] = uVar4;
  }
  iVar2 = FUN_1802353e9(param_2);
  if (iVar2 - 1U < 0x9fff) {
    uVar5 = FUN_1801cc006(uVar1,iVar2,&local_3c);
    if (local_3c != 0) {
LAB_180235153:
      local_3c = 0;
      iVar3 = iVar2;
      goto LAB_18023515b;
    }
    iVar3 = FUN_180235469(uVar4,0,uVar5,iVar2);
    if (iVar3 != iVar2) {
      FUN_180235469(uVar4,0,0,0);
      FUN_1801c9b65(uVar1,uVar5);
      goto LAB_180235153;
    }
    FUN_180235513(uVar4);
    FUN_1801c9b65(uVar1,uVar4);
    puVar6 = (undefined1 *)0x0;
    param_1[2] = 0;
    *(int *)(param_1 + 1) = iVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *param_1 = uVar5;
  }
  else {
    iVar3 = 0x7fffffff;
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
LAB_18023515b:
    *(int *)(param_1 + 1) = iVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *param_1 = 0;
    puVar6 = &LAB_18023559b;
  }
  param_1[4] = puVar6;
  param_1[5] = FUN_180235548;
LAB_180235182:
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
  }
  return local_3c;
}

