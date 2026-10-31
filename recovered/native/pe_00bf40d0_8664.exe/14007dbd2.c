/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007dbd2 */

int FUN_14007dbd2(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStackY_108 [32];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined5 uStack_5d;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_108;
  local_4c = 0;
  FUN_1400813a8((undefined8 *)&local_78);
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar3 = 0x12;
  if (((*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) && (iVar3 = 0x13, param_3 == 5)) &&
     (iVar3 = 7, param_4 == 0)) {
    iVar4 = 0;
    if ((*(int *)(param_2 + 0x68) == 0) || (iVar4 = 0, *(int *)(param_2 + 0x70) == 0)) {
LAB_14007dd63:
      if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
        FUN_14001c53d(lVar2,*(longlong *)(param_2 + 0x78));
      }
      *(undefined8 *)(param_2 + 0x88) = local_58;
      *(longlong *)(param_2 + 0x78) = local_68;
      *(ulonglong *)(param_2 + 0x80) = CONCAT53(uStack_5d,CONCAT12(uStack_5e,uStack_60));
      *(ulonglong *)(param_2 + 0x68) = CONCAT44(uStack_74,local_78);
      *(ulonglong *)(param_2 + 0x70) = CONCAT44(uStack_6c,uStack_70);
      *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + iVar4;
      *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) - iVar4;
      if (local_68 != 0) {
        puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
        *puVar1 = *puVar1 | 1;
      }
      goto LAB_14007dc5c;
    }
    iVar3 = 6;
    if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
      FUN_1400813a8((undefined8 *)&local_78);
      iVar4 = *(int *)(param_1 + 0x78);
      local_78 = *(int *)(param_2 + 0x68) + iVar4 * 2;
      uStack_74 = iVar4 * 2 + *(int *)(param_2 + 0x6c);
      uStack_5e = 2;
      uStack_60 = 0xff;
      uStack_70 = uStack_74;
      local_68 = FUN_14001c617(lVar2,uStack_74,0,local_78,0,&local_4c);
      iVar3 = local_4c;
      if ((local_4c == 0) &&
         (local_4c = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60)),
         iVar3 = local_4c, local_4c == 0)) goto LAB_14007dd63;
    }
  }
  local_4c = iVar3;
  if (local_68 != 0) {
    FUN_14001c53d(lVar2,local_68);
  }
LAB_14007dc5c:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_108);
  }
  return local_4c;
}

