/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a5749 */

void FUN_1400a5749(longlong param_1)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  float local_60;
  undefined4 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  lVar5 = DAT_140f2a910;
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  fVar1 = *(float *)(param_1 + 0x9c);
  uVar6 = FUN_14007a557(5);
  if (0.0 < fVar1) {
    if ((*(byte *)(param_1 + 0x14) & 0x80) == 0) {
      local_68 = *(undefined4 *)(param_1 + 0x98);
      local_60 = *(float *)(param_1 + 0x9c);
      local_48 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20),
                          (float)*(undefined8 *)(param_1 + 0x68) +
                          (float)*(undefined8 *)(param_1 + 0x60));
      local_58 = 0;
      FUN_1400de17e(*(undefined8 *)(param_1 + 800),param_1 + 0x60,&local_48,uVar6);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x1c);
      if ((uVar4 & 4) != 0) {
        FUN_1400a5920(param_1,1,uVar6,fVar1);
        uVar4 = *(uint *)(param_1 + 0x1c);
      }
      if ((uVar4 & 8) != 0) {
        FUN_1400a5920(param_1,3,uVar6,fVar1);
      }
    }
  }
  bVar2 = *(byte *)(param_1 + 0x116);
  if ((*(byte *)(param_1 + 0x115) & bVar2) != 0xff) {
    bVar3 = bVar2;
    if (bVar2 == 0xff) {
      bVar3 = *(byte *)(param_1 + 0x115);
    }
    uVar7 = FUN_14007a557((bVar2 != 0xff) + '\x1d',DAT_1401c86c8);
    uVar8 = FUN_14007b71f(DAT_1402113a0);
    FUN_1400a5920(param_1,(int)(char)bVar3,uVar7,uVar8);
  }
  if (((0.0 < *(float *)(lVar5 + 0xe00)) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x495) & 1) == 0)) {
    local_68 = uVar6;
    local_60 = *(float *)(lVar5 + 0xe00);
    FUN_1400dde72(*(undefined8 *)(param_1 + 800),fVar1 * DAT_1401c86a0 + *(float *)(param_1 + 0x60),
                  (*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x60)) - fVar1 * DAT_1401c86a0,
                  *(float *)(param_1 + 100) + *(float *)(param_1 + 0xa0) + DAT_1401c86a4);
  }
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_88);
}

