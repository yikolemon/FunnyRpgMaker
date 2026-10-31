/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012ecef */

void FUN_1012ecef(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  uint local_18;
  
  iVar3 = DAT_1039d74c;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  uVar4 = FUN_1012ea9f(iVar2,param_1);
  FUN_1012eabe(local_28,iVar2,param_1);
  iVar5 = iVar2;
  if ((*(byte *)(iVar2 + 0x409) & 1) != 0) {
    iVar5 = *(int *)(*(int *)(iVar2 + 0x430) + 0x78);
  }
  local_38 = *(float *)(iVar5 + 0x50);
  fStack_34 = *(float *)(iVar5 + 0x54);
  fStack_30 = (float)*(undefined8 *)(iVar5 + 0x58) + local_38;
  fStack_2c = (float)((ulonglong)*(undefined8 *)(iVar5 + 0x58) >> 0x20) + fStack_34;
  uVar6 = FUN_10194f0c(local_28,&local_38,*(undefined4 *)(iVar3 + 0xce0));
  fVar1 = *(float *)(iVar2 + 0x80 + param_1 * 4);
  local_40 = (longlong)ROUND(*(float *)(iVar2 + 0xc4 + param_1 * 4));
  FUN_1012eea2(local_28,uVar4,param_1,&local_40,
               (longlong)
               ROUND(*(float *)(iVar2 + 0x254 + param_1 * 4) -
                     *(float *)(iVar2 + 0x24c + param_1 * 4)),
               (longlong)ROUND(fVar1 + fVar1 + *(float *)(iVar2 + 0x68 + param_1 * 4)),uVar6);
  *(float *)(iVar2 + 0xc4 + param_1 * 4) = (float)local_40;
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

