/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180154cbf */

undefined4 * FUN_180154cbf(undefined4 *param_1,undefined4 param_2,char param_3)

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
  
  lVar3 = DAT_180419160;
  local_50 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_68 = 0xbf800000;
  FUN_1801023ca(&local_58,param_2,0,1);
  fVar1 = *(float *)(lVar3 + 0xdf4);
  fVar2 = *(float *)(lVar3 + 0xdf8);
  fVar5 = DAT_1802ac570;
  if (param_3 != '\0') {
    fVar5 = *(float *)(lVar3 + 0xe0c) + *(float *)(lVar3 + 0x1320);
  }
  uVar4 = FUN_1801556a8();
  uVar4 = FUN_1800eebe2(local_58 + fVar1 + fVar5 + fVar1,uVar4);
  *param_1 = uVar4;
  param_1[1] = fVar2 + fVar2 + local_54;
  if (DAT_180402640 != (local_50 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_50 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

