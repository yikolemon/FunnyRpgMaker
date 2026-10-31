/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140044459 */

void FUN_140044459(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStackY_78 [32];
  ushort local_50;
  ushort local_4e;
  short local_4c;
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar1 = *param_1;
  lVar2 = param_1[5];
  local_4a = 0;
  local_4c = 0;
  local_4e = 0;
  local_50 = 0;
  uVar3 = FUN_140020f72(lVar2);
  FUN_140043488(lVar1,param_2,&local_4a,&local_4e);
  FUN_1400434b0(lVar1,param_2,(short)*(undefined4 *)((longlong)param_1 + 0x44),&local_4c,
                (short *)&local_50);
  uVar4 = FUN_140020a41(lVar2,uVar3);
  if ((int)uVar4 == 0) {
    *(int *)(param_1 + 9) = (int)local_4a;
    *(uint *)((longlong)param_1 + 0x4c) = (uint)local_4e;
    *(int *)(param_1 + 0x1e) = (int)local_4c;
    *(uint *)((longlong)param_1 + 0xf4) = (uint)local_50;
    if ((*(longlong *)(*(longlong *)(lVar1 + 0xd0) + 0x50) == 0) &&
       (*(char *)((longlong)param_1 + 0x54) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x54) = 1;
      *(uint *)(param_1 + 10) = (uint)local_4e;
    }
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_78);
}

