/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007c175 */

int FUN_14007c175(longlong param_1,longlong *param_2,int param_3,uint *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_c8 [32];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  local_44 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar4 = 6;
  if ((int)param_2[0xc] != *(int *)(param_1 + 0x20)) {
LAB_14007c21d:
    iVar5 = 0;
    iVar6 = 0;
    local_44 = iVar4;
    goto LAB_14007c229;
  }
  iVar4 = 0x13;
  if (param_3 != 2) goto LAB_14007c276;
  if ((*(byte *)(param_2[0x1e] + 8) & 1) != 0) {
    FUN_14001c53d(lVar1,param_2[0xf]);
    param_2[0xf] = 0;
    *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) & 0xfffffffe;
  }
  cVar2 = FUN_14001d0e5(param_2,2,param_4);
  iVar4 = 0x62;
  if (cVar2 != '\0') goto LAB_14007c21d;
  iVar5 = 0;
  lVar3 = FUN_14001c617(lVar1,*(uint *)(param_2 + 0xe),0,*(uint *)(param_2 + 0xd),0,&local_44);
  param_2[0xf] = lVar3;
  iVar6 = 0;
  if (local_44 == 0) {
    *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) | 1;
    iVar6 = (int)param_2[0x12] * -0x40;
    iVar5 = ((int)param_2[0xd] - *(int *)((longlong)param_2 + 0x94)) * 0x40;
    if (param_4 != (uint *)0x0) {
      iVar6 = iVar6 + *param_4;
      iVar5 = iVar5 + param_4[1];
    }
    if (iVar6 != 0 || iVar5 != 0) {
      FUN_14001df78((longlong)(param_2 + 0x13),iVar6,iVar5);
    }
    local_44 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60));
    if (local_44 != 0) goto LAB_14007c229;
    *(undefined4 *)(param_2 + 0xc) = 0x62697473;
  }
  else {
LAB_14007c229:
    if ((*(byte *)(param_2[0x1e] + 8) & 1) != 0) {
      FUN_14001c53d(lVar1,param_2[0xf]);
      param_2[0xf] = 0;
      *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) & 0xfffffffe;
    }
  }
  iVar4 = local_44;
  if (iVar6 != 0 || iVar5 != 0) {
    FUN_14001df78((longlong)(param_2 + 0x13),-iVar6,-iVar5);
    iVar4 = local_44;
  }
LAB_14007c276:
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStackY_c8);
  }
  return iVar4;
}

