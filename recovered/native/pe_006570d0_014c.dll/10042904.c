/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042904 */

undefined4 * __thiscall FUN_10042904(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_1005a4c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[10] = 0xffffffff;
  *param_1 = 2;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_28 = param_1 + 0xd;
  local_14 = 1;
  local_24 = param_1;
  FUN_100446d6();
  puVar5 = local_24;
  local_14 = 2;
  pbVar6 = (byte *)FUN_10018d26(param_2 + 0xc);
  bVar1 = *pbVar6;
  pbVar6 = (byte *)FUN_10018d26(puVar5 + 0xc);
  LOCK();
  *pbVar6 = bVar1 & 1;
  UNLOCK();
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  uVar4 = param_2[0x10];
  *local_28 = param_2[0xd];
  local_28[1] = uVar2;
  local_28[2] = uVar3;
  local_28[3] = uVar4;
  if (puVar5 != param_2) {
    FUN_10042a4e(param_2[0x11],((int)(param_2[0x12] - param_2[0x11]) >> 3) * -0x3e7063e7);
  }
  local_14 = 0xffffffff;
  FUN_1022c200(param_2);
  ExceptionList = local_1c;
  return local_24;
}

