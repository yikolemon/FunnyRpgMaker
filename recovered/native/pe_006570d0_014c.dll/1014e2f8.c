/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014e2f8 */

undefined4 FUN_1014e2f8(undefined4 param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_24;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(char *)(iVar2 + 0xfe) == '\0') {
    uVar4 = FUN_101021d4(param_1,0);
    iVar5 = FUN_1014e3f8(uVar4);
    fVar1 = *(float *)(iVar3 + 0xd10);
    local_1c = *(float *)(iVar2 + 0x274);
    local_24 = *(undefined8 *)(iVar2 + 0x144);
    local_18 = fVar1 + fVar1 + (float)((ulonglong)local_24 >> 0x20) + *(float *)(iVar3 + 0x1228);
    *(undefined4 *)(iVar5 + 0x14) = uVar4;
    fVar1 = DAT_102b70e0;
    *(float *)(iVar5 + 0x6c) =
         (float)local_24 - (float)(int)(*(float *)(iVar2 + 0x80) * DAT_102b70e0);
    *(float *)(iVar5 + 0x70) = (float)(int)(fVar1 * *(float *)(iVar2 + 0x80)) + local_1c;
    uVar4 = FUN_1014e42d(iVar5,&local_24,param_2 | 0x200000);
  }
  else {
    uVar4 = 0;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

