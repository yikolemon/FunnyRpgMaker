/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400744a8 */

int FUN_1400744a8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 (*pauVar4) [32];
  ushort uVar5;
  undefined1 auStack_68 [40];
  ushort *local_40;
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x98);
  local_40 = (ushort *)0x0;
  local_34 = (**(code **)(param_1 + 0x2a0))(param_1,0x53564720,param_2,&local_38);
  if (local_34 == 0) {
    if (local_38 < 0x18) {
      pauVar4 = (undefined1 (*) [32])0x0;
LAB_140074504:
      local_34 = 8;
    }
    else {
      local_34 = FUN_140021039(param_2,local_38,(longlong *)&local_40);
      if (local_34 != 0) goto LAB_1400744f3;
      pauVar4 = FUN_14001c423(lVar1,0x20,&local_34);
      if (local_34 == 0) {
        *(ushort *)*pauVar4 = *local_40 << 8 | *local_40 >> 8;
        uVar2 = *(uint *)(local_40 + 1);
        uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        if ((9 < uVar2) && (uVar2 <= local_38 - 0xe)) {
          *(ulonglong *)(*pauVar4 + 8) = (longlong)local_40 + (ulonglong)uVar2;
          uVar5 = *(ushort *)((longlong)local_40 + (ulonglong)uVar2);
          uVar5 = uVar5 << 8 | uVar5 >> 8;
          *(ushort *)(*pauVar4 + 2) = uVar5;
          if (uVar2 + ((uint)uVar5 + (uint)uVar5 * 2) * 4 + 2 <= local_38) {
            *(ushort **)(*pauVar4 + 0x10) = local_40;
            *(uint *)(*pauVar4 + 0x18) = local_38;
            *(undefined1 (**) [32])(param_1 + 0x4e8) = pauVar4;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
            iVar3 = 0;
            goto LAB_140074533;
          }
        }
        goto LAB_140074504;
      }
    }
  }
  else {
LAB_1400744f3:
    pauVar4 = (undefined1 (*) [32])0x0;
  }
  FUN_14002115a((longlong)param_2,(longlong *)&local_40);
  FUN_14001c53d(lVar1,(longlong)pauVar4);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  iVar3 = local_34;
LAB_140074533:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_68)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_68);
}

