/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005e4d9 */

int FUN_14005e4d9(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  local_38 = 0;
  pauVar1 = FUN_14001c423(param_2,0x48,&local_38);
  if (local_38 == 0) {
    *(undefined4 *)*pauVar1 = 0x5000;
    *(undefined2 *)(*pauVar1 + 0xc) = 0x7fff;
    *(int *)pauVar1[2] = (int)param_1[1];
    *(longlong *)(pauVar1[1] + 0x18) = param_2;
    local_38 = FUN_14005e8e8(param_1,pauVar1,&local_34);
    if (local_38 == 0) {
      lVar2 = *(longlong *)(pauVar1[1] + 0x10);
      if (((lVar2 != 0) && (((*pauVar1)[1] & 0x10) != 0)) &&
         (*(int *)(lVar2 + 0x44) != 0 || *(int *)(lVar2 + 0x34) != 0)) {
        sVar3 = *(short *)(*pauVar1 + 0xc);
        uVar4 = (int)*(short *)(*pauVar1 + 0x10) - (int)sVar3;
        if (uVar4 != *(ushort *)(lVar2 + 8)) {
          *(short *)(lVar2 + 8) = (short)uVar4;
          lVar2 = *(longlong *)(pauVar1[1] + 0x10);
          sVar3 = *(short *)(*pauVar1 + 0xc);
        }
        if (*(short *)(lVar2 + 0xc) != sVar3) {
          *(short *)(lVar2 + 0xc) = sVar3;
          lVar2 = *(longlong *)(pauVar1[1] + 0x10);
        }
        if (*(short *)(lVar2 + 0x10) != *(short *)(*pauVar1 + 0x12)) {
          *(short *)(lVar2 + 0x10) = *(short *)(*pauVar1 + 0x12);
          lVar2 = *(longlong *)(pauVar1[1] + 0x10);
        }
        sVar3 = *(short *)(lVar2 + 0x12);
        if (sVar3 != *(short *)(*pauVar1 + 0x14)) {
          *(short *)(lVar2 + 0x12) = *(short *)(*pauVar1 + 0x14);
          *(short *)(*(longlong *)(pauVar1[1] + 0x10) + 0xe) = -*(short *)(*pauVar1 + 0x14);
          sVar3 = *(short *)(*pauVar1 + 0x14);
          lVar2 = *(longlong *)(pauVar1[1] + 0x10);
        }
        uVar4 = (int)sVar3 + (int)*(short *)(*pauVar1 + 0x12);
        if (uVar4 != *(ushort *)(lVar2 + 10)) {
          *(short *)(lVar2 + 10) = (short)uVar4;
        }
      }
      if ((*(uint *)*pauVar1 & 1) == 0) {
        if (*(longlong *)(pauVar1[1] + 0x10) == 0) {
          local_38 = 3;
        }
        *param_3 = *(longlong *)(pauVar1[1] + 0x10);
        goto LAB_14005e649;
      }
      local_38 = 0xba - (uint)((*(uint *)*pauVar1 & 0x20) == 0);
    }
    FUN_14005eac5(*(longlong **)(pauVar1[1] + 0x10));
    FUN_14001c53d(param_2,*(longlong *)(pauVar1[1] + 0x10));
    *(undefined8 *)(pauVar1[1] + 0x10) = 0;
  }
  else if (pauVar1 == (undefined1 (*) [32])0x0) goto LAB_14005e66c;
LAB_14005e649:
  FUN_14001c53d(param_2,*(longlong *)(*pauVar1 + 0x18));
  *(undefined8 *)(*pauVar1 + 0x18) = 0;
  FUN_14001c53d(param_2,(longlong)pauVar1);
LAB_14005e66c:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_58);
  }
  return local_38;
}

