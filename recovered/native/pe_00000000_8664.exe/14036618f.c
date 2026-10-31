/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14036618f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14036618f(undefined4 *param_1,undefined4 param_2,char param_3)

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
  
  lVar3 = DAT_14062a630;
  local_50 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  local_68 = 0xbf800000;
  FUN_14031389a(&local_58,param_2,0,1);
  fVar1 = *(float *)(lVar3 + 0xdf4);
  fVar2 = *(float *)(lVar3 + 0xdf8);
  fVar5 = DAT_1404bda40;
  if (param_3 != '\0') {
    fVar5 = *(float *)(lVar3 + 0xe0c) + *(float *)(lVar3 + 0x1320);
  }
  uVar4 = FUN_140366b78();
  uVar4 = FUN_1403000b2(local_58 + fVar1 + fVar5 + fVar1,uVar4);
  *param_1 = uVar4;
  param_1[1] = fVar2 + fVar2 + local_54;
  if (ram0x000140613b10 != (local_50 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_50 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

