/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cb4d2 */

undefined8 FUN_1400cb4d2(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  lVar3 = DAT_140f2a910;
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar4 = FUN_140080066(lVar1,param_1,0);
    lVar5 = FUN_1400cb5e8(lVar3 + 0x2568,uVar4);
    local_30 = *(float *)(lVar1 + 0x2a0);
    local_38 = *(undefined8 *)(lVar1 + 0x158);
    local_2c = *(float *)(lVar3 + 0xdf8) + *(float *)(lVar3 + 0xdf8) +
               (float)((ulonglong)local_38 >> 0x20) + *(float *)(lVar3 + 0x1320);
    *(undefined4 *)(lVar5 + 0x1c) = uVar4;
    fVar2 = DAT_1401c86a0;
    *(float *)(lVar5 + 0x74) =
         (float)local_38 - (float)(int)(*(float *)(lVar1 + 0x90) * DAT_1401c86a0);
    *(float *)(lVar5 + 0x78) = (float)(int)(fVar2 * *(float *)(lVar1 + 0x90)) + local_30;
    uVar6 = FUN_1400cb62b(lVar5,&local_38,param_2 | 0x200000);
  }
  else {
    uVar6 = 0;
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

