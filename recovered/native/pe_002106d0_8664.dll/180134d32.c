/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180134d32 */

void FUN_180134d32(int param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  lVar3 = DAT_180419160;
  local_38 = DAT_180402640 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(DAT_180419160 + 0x1608);
  uVar4 = FUN_180134b09(lVar2,param_1);
  FUN_180134b25(local_48,lVar2,param_1);
  lVar5 = lVar2;
  if ((*(byte *)(lVar2 + 0x495) & 1) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x4c0) + 0x90);
  }
  local_58 = *(float *)(lVar5 + 0x60);
  fStack_54 = *(float *)(lVar5 + 100);
  fStack_50 = (float)*(undefined8 *)(lVar5 + 0x68) + local_58;
  fStack_4c = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x68) >> 0x20) + fStack_54;
  local_68 = FUN_18019c9e3(local_48,&local_58,*(undefined4 *)(lVar3 + 0xdc8));
  lVar5 = (longlong)param_1;
  fVar1 = *(float *)(lVar2 + 0x90 + lVar5 * 4);
  local_60 = (longlong)*(float *)(lVar2 + 0xd4 + lVar5 * 4);
  local_70 = (longlong)(fVar1 + fVar1 + *(float *)(lVar2 + 0x78 + lVar5 * 4));
  local_78 = (longlong)
             (*(float *)(lVar2 + 0x280 + lVar5 * 4) - *(float *)(lVar2 + 0x278 + lVar5 * 4));
  FUN_180134e6a(local_48,uVar4,param_1,&local_60);
  *(float *)(lVar2 + 0xd4 + lVar5 * 4) = (float)local_60;
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_98);
}

