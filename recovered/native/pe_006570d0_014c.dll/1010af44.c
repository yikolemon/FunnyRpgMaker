/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010af44 */

void FUN_1010af44(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float *local_4c;
  float *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  iVar4 = *(int *)(param_1 + 0x269c);
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x26a4) + 4 + iVar5 * 8);
      if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x90) == *(int *)(param_1 + 4))) &&
          ((*(byte *)(iVar1 + 0xac) & 1) != 0)) &&
         (((iVar2 = *(int *)(iVar1 + 0x78), iVar2 != 0 && ((*(byte *)(iVar1 + 0xac) & 4) == 0)) &&
          (*(int *)(iVar1 + 0x1c) == 0)))) {
        fVar6 = (float10)FUN_101155f9();
        local_38 = (float)fVar6;
        fStack_1c = (float)*(undefined8 *)(iVar1 + 0x34);
        local_24 = fStack_1c + 0.0;
        fStack_18 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x34) >> 0x20);
        fStack_20 = local_38 + fStack_18;
        fStack_1c = (float)*(undefined8 *)(iVar1 + 0x3c) + fStack_1c;
        fStack_18 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x3c) >> 0x20) + fStack_18;
        local_44 = *(undefined4 *)(param_1 + 0xdec);
        local_34 = *(float *)(iVar2 + 0x50);
        fStack_30 = *(float *)(iVar2 + 0x54);
        fStack_2c = (float)*(undefined8 *)(iVar2 + 0x58) + local_34;
        fStack_28 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x58) >> 0x20) + fStack_30;
        local_48 = &local_34;
        local_4c = &local_24;
        uVar3 = FUN_10194f0c();
        local_4c = *(float **)(*(int *)(iVar1 + 0x78) + 0x2e8);
        local_48 = (float *)0x0;
        FUN_1018de6c();
        local_44 = *(undefined4 *)(iVar1 + 0x50);
        local_40 = *(undefined4 *)(*(int *)(iVar1 + 0x78) + 0x88);
        local_48 = &fStack_1c;
        local_4c = &local_24;
        local_3c = uVar3;
        FUN_1018b85a();
        iVar4 = *(int *)(param_1 + 0x269c);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_4c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

