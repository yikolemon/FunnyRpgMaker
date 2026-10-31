/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cdbef */

undefined4 * FUN_1400cdbef(undefined4 *param_1,undefined4 param_2,char param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  lVar3 = DAT_140f2a910;
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  local_68 = 0xbf800000;
  FUN_14007b686(&local_58,param_2,0,1);
  fVar1 = *(float *)(lVar3 + 0xdf4);
  fVar2 = *(float *)(lVar3 + 0xdf8);
  fVar5 = DAT_1401c86c8;
  if (param_3 != '\0') {
    fVar5 = *(float *)(lVar3 + 0xe0c) + *(float *)(lVar3 + 0x1320);
  }
  uVar4 = FUN_1400ce5d8();
  uVar4 = FUN_14004863e(local_58 + fVar1 + fVar5 + fVar1,uVar4);
  *param_1 = uVar4;
  param_1[1] = fVar2 + fVar2 + local_54;
  if (DAT_140f17b40 != (local_50 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_50 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

