/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180141f85 */

undefined4
FUN_180141f85(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  lVar4 = DAT_180419160;
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(DAT_180419160 + 0x1608);
  iVar6 = *(int *)(DAT_180419160 + 0x27c8);
  if (iVar6 != param_2) {
    FUN_180107456();
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x158);
  *(undefined8 *)(lVar2 + 0x158) = *param_1;
  *(byte *)(lVar4 + 0x1fe4) = *(byte *)(lVar4 + 0x1fe4) | 0x20;
  local_70 = param_6 | 0x8001000;
  local_50 = CONCAT44((float)((ulonglong)param_1[1] >> 0x20) - (float)((ulonglong)*param_1 >> 0x20),
                      (float)param_1[1] - (float)*param_1);
  local_78 = &local_50;
  local_60 = param_8;
  local_68 = param_7;
  uVar5 = FUN_1801420c6(param_3,0,param_4,param_5);
  FUN_1801088af(param_2);
  iVar1 = *(int *)(lVar4 + 0x167c);
  if (iVar1 != param_2 || iVar6 != param_2) {
    iVar6 = 0;
    if (iVar1 == param_2) {
      iVar6 = iVar1;
    }
    *(int *)(lVar4 + 0x27c8) = iVar6;
  }
  *(undefined8 *)(lVar2 + 0x158) = uVar3;
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_98)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
}

