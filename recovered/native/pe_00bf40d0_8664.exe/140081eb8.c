/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140081eb8 */

int FUN_140081eb8(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  if (param_1 == (undefined8 *)0x0 || param_2 == (longlong *)0x0) {
    local_3c = 0x28;
    goto LAB_14008204a;
  }
  lVar1 = param_2[6];
  uVar4 = FUN_14008207e(param_2);
  local_3c = (int)uVar4;
  if (local_3c != 0) goto LAB_14008204a;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[6] = lVar1;
  plVar5 = (longlong *)FUN_14001e961(lVar1,0x2088,&local_3c);
  if (local_3c == 0) {
    uVar4 = FUN_1400821ff(plVar5,(longlong)param_1,param_2);
    local_3c = (int)uVar4;
    if (local_3c != 0) {
      FUN_14001c53d(lVar1,(longlong)plVar5);
      goto LAB_14008204a;
    }
    param_1[2] = plVar5;
  }
  uVar2 = FUN_1400822b1(param_2);
  if (uVar2 - 1 < 0x9fff) {
    puVar6 = (undefined8 *)FUN_14001e961(lVar1,uVar2,&local_3c);
    if (local_3c != 0) {
LAB_14008201b:
      local_3c = 0;
      uVar3 = uVar2;
      goto LAB_140082023;
    }
    uVar3 = FUN_140082331(plVar5,0,puVar6,uVar2);
    if (uVar3 != uVar2) {
      FUN_140082331(plVar5,0,(undefined8 *)0x0,0);
      FUN_14001c53d(lVar1,(longlong)puVar6);
      goto LAB_14008201b;
    }
    FUN_1400823db(plVar5);
    FUN_14001c53d(lVar1,(longlong)plVar5);
    puVar7 = (undefined1 *)0x0;
    param_1[2] = 0;
    *(uint *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *param_1 = puVar6;
  }
  else {
    uVar3 = 0x7fffffff;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
LAB_140082023:
    *(uint *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *param_1 = 0;
    puVar7 = &LAB_140082463;
  }
  param_1[4] = puVar7;
  param_1[5] = FUN_140082410;
LAB_14008204a:
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStack_68);
  }
  return local_3c;
}

