/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180226e68 */

int FUN_180226e68(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  undefined1 auStack_68 [40];
  ushort *local_40;
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  local_40 = (ushort *)0x0;
  local_34 = (**(code **)(param_1 + 0x2a0))(param_1,0x53564720,param_2,&local_38);
  if (local_34 == 0) {
    if (local_38 < 0x18) {
      puVar4 = (ushort *)0x0;
LAB_180226ec4:
      local_34 = 8;
    }
    else {
      local_34 = FUN_1801cec36(param_2,local_38,&local_40);
      if (local_34 != 0) goto LAB_180226eb3;
      puVar4 = (ushort *)FUN_1801c9a4b(uVar1,0x20,&local_34);
      if (local_34 == 0) {
        *puVar4 = *local_40 << 8 | *local_40 >> 8;
        uVar2 = *(uint *)(local_40 + 1);
        uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        if ((9 < uVar2) && (uVar2 <= local_38 - 0xe)) {
          *(ulonglong *)(puVar4 + 4) = (longlong)local_40 + (ulonglong)uVar2;
          uVar5 = *(ushort *)((longlong)local_40 + (ulonglong)uVar2);
          uVar5 = uVar5 << 8 | uVar5 >> 8;
          puVar4[1] = uVar5;
          if (uVar2 + ((uint)uVar5 + (uint)uVar5 * 2) * 4 + 2 <= local_38) {
            *(ushort **)(puVar4 + 8) = local_40;
            *(uint *)(puVar4 + 0xc) = local_38;
            *(ushort **)(param_1 + 0x4e8) = puVar4;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
            iVar3 = 0;
            goto LAB_180226ef3;
          }
        }
        goto LAB_180226ec4;
      }
    }
  }
  else {
LAB_180226eb3:
    puVar4 = (ushort *)0x0;
  }
  FUN_1801ced57(param_2,&local_40);
  FUN_1801c9b65(uVar1,puVar4);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  iVar3 = local_34;
LAB_180226ef3:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

