/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401842c8 */

int FUN_1401842c8(undefined8 *param_1,longlong param_2)

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
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_1 == (undefined8 *)0x0 || param_2 == 0) {
    local_3c = 0x28;
    goto LAB_14018445a;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_3c = FUN_14018448e(param_2);
  if (local_3c != 0) goto LAB_14018445a;
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
  uVar4 = FUN_14012afda(uVar1,0x2088,&local_3c);
  if (local_3c == 0) {
    local_3c = FUN_14018460f(uVar4,param_1,param_2);
    if (local_3c != 0) {
      FUN_140128b39(uVar1,uVar4);
      goto LAB_14018445a;
    }
    param_1[2] = uVar4;
  }
  iVar2 = FUN_1401846c1(param_2);
  if (iVar2 - 1U < 0x9fff) {
    uVar5 = FUN_14012afda(uVar1,iVar2,&local_3c);
    if (local_3c != 0) {
LAB_14018442b:
      local_3c = 0;
      iVar3 = iVar2;
      goto LAB_140184433;
    }
    iVar3 = FUN_140184741(uVar4,0,uVar5,iVar2);
    if (iVar3 != iVar2) {
      FUN_140184741(uVar4,0,0,0);
      FUN_140128b39(uVar1,uVar5);
      goto LAB_14018442b;
    }
    FUN_1401847eb(uVar4);
    FUN_140128b39(uVar1,uVar4);
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
LAB_140184433:
    *(int *)(param_1 + 1) = iVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *param_1 = 0;
    puVar6 = &LAB_140184873;
  }
  param_1[4] = puVar6;
  param_1[5] = FUN_140184820;
LAB_14018445a:
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
  }
  return local_3c;
}

