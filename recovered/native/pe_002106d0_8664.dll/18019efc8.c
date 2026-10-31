/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019efc8 */

undefined8
FUN_18019efc8(undefined8 param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  double dVar1;
  undefined4 uVar2;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [48];
  undefined1 local_158 [48];
  undefined1 local_128 [48];
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_208;
  local_68 = 0;
  uVar2 = FUN_18019efb4(param_2);
  FUN_1801d32da(local_c8,uVar2,DAT_180328058);
  uVar2 = FUN_18019efb4(param_2);
  FUN_1801d32da(local_f8,uVar2,DAT_180328060);
  dVar1 = (double)FUN_18019efb4(param_2);
  uVar2 = FUN_1801d2f67(SUB84(dVar1 + DAT_180328068,0));
  FUN_1801d32da(local_128,uVar2,DAT_180328070);
  uVar2 = FUN_18019efb4(param_2);
  FUN_1801d32da(local_158,uVar2,DAT_180328078);
  uVar2 = FUN_18019efb4(param_2);
  FUN_1801d32da(local_188,uVar2,DAT_180328080);
  local_1a8 = *param_2;
  uStack_1a4 = param_2[1];
  uStack_1a0 = param_2[2];
  uStack_19c = param_2[3];
  local_198 = param_2[4];
  uStack_194 = param_2[5];
  uStack_190 = param_2[6];
  uStack_18c = param_2[7];
  local_1b8 = local_98;
  local_1e8 = param_3;
  local_1e0 = local_188;
  local_1d8 = local_158;
  local_1d0 = local_128;
  local_1c8 = local_f8;
  local_1c0 = local_c8;
  FUN_18019f164(param_1,&local_1a8,2,param_4);
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_208)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_208);
}

