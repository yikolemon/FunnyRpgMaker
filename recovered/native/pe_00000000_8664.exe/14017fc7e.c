/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017fc7e */

int FUN_14017fc7e(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int *local_e0;
  int *local_d0;
  int *local_c8;
  undefined4 local_c0;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined5 uStack_5d;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  local_4c = 0;
  FUN_140183454(&local_78);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  iVar4 = 0x12;
  if (((*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) && (iVar4 = 0x13, param_3 == 5)) &&
     (iVar4 = 7, param_4 == 0)) {
    piVar1 = (int *)(param_2 + 0x68);
    iVar5 = 0;
    if ((*piVar1 == 0) || (iVar5 = 0, *(int *)(param_2 + 0x70) == 0)) {
LAB_14017fe0f:
      if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
        FUN_140128b39(uVar3,*(undefined8 *)(param_2 + 0x78));
      }
      *(undefined8 *)(param_2 + 0x88) = local_58;
      *(longlong *)(param_2 + 0x78) = local_68;
      *(ulonglong *)(param_2 + 0x80) = CONCAT53(uStack_5d,CONCAT12(uStack_5e,uStack_60));
      *piVar1 = local_78;
      *(int *)(param_2 + 0x6c) = iStack_74;
      *(int *)(param_2 + 0x70) = iStack_70;
      *(undefined4 *)(param_2 + 0x74) = uStack_6c;
      *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + iVar5;
      *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) - iVar5;
      if (local_68 != 0) {
        puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
        *puVar2 = *puVar2 | 1;
      }
      goto LAB_14017fd08;
    }
    iVar4 = 6;
    if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
      FUN_140183454(&local_78);
      iVar5 = *(int *)(param_1 + 0x78);
      local_78 = *(int *)(param_2 + 0x68) + iVar5 * 2;
      iStack_74 = iVar5 * 2 + *(int *)(param_2 + 0x6c);
      uStack_5e = 2;
      uStack_60 = 0xff;
      local_e0 = &local_4c;
      local_e8 = 0;
      iStack_70 = iStack_74;
      local_68 = FUN_140128c13(uVar3,iStack_74,0);
      iVar4 = local_4c;
      if (local_4c == 0) {
        local_c0 = 8;
        local_80 = *(undefined4 *)(param_1 + 0x78);
        local_7c = *(undefined1 *)(param_1 + 0x7c);
        local_7b = *(undefined1 *)(param_1 + 0x7d);
        local_d0 = &local_78;
        local_c8 = piVar1;
        local_4c = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60));
        iVar4 = local_4c;
        if (local_4c == 0) goto LAB_14017fe0f;
      }
    }
  }
  local_4c = iVar4;
  if (local_68 != 0) {
    FUN_140128b39(uVar3);
  }
LAB_14017fd08:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_108);
  }
  return local_4c;
}

