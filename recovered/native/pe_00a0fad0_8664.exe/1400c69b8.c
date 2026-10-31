/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c69b8 */

void FUN_1400c69b8(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_268 [88];
  undefined1 local_210 [296];
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d0 [32];
  uint *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_d0[0] = 1;
  FUN_1400a023e(local_268,local_d0,param_1 + 0x4c);
  FUN_1400a03e4(param_2,&DAT_1401d4850);
  puVar1 = param_2 + 0x58;
  local_50 = (uint *)(param_1 + 0x58);
  FUN_14009e652(puVar1);
  FUN_14008cb80(puVar1,param_1 + 0x5c);
  puVar4 = puVar1;
  if ((100 < *(uint *)(param_1 + 0x58)) &&
     (puVar4 = local_210, param_2 = local_268, 0x66 < *(uint *)(param_1 + 0x58))) {
    DAT_1401cc8c4 = 1;
  }
  FUN_1400a0a20(param_2,param_1 + 0x60);
  FUN_14009e652(puVar4,param_1 + 0x88);
  FUN_14009e652(puVar4,param_1 + 0x8c);
  FUN_14009e652(puVar4,param_1 + 0x90);
  local_d0[0] = (undefined4)
                ((ulonglong)(*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0)) >> 7);
  FUN_14009e652(puVar4);
  if (0x66 < *(uint *)(param_1 + 0x58)) {
    FUN_14009e652(puVar4,param_1 + 0x80);
    FUN_14009e652(puVar4,param_1 + 0x84);
  }
  if ((DAT_1401cc8c6 == '\x01') && (*(longlong *)(param_1 + 0x98) == *(longlong *)(param_1 + 0xa0)))
  {
    local_d0[0] = 0xffffffff;
    FUN_14009e652(puVar4);
  }
  else {
    local_d0[0] = 0xffffffff;
    FUN_14009e716(puVar4,param_1 + 0x98);
  }
  lVar2 = *(longlong *)(param_1 + 0xb8);
  for (lVar3 = *(longlong *)(param_1 + 0xb0); lVar3 != lVar2; lVar3 = lVar3 + 0x80) {
    FUN_1400c9136(local_d0,lVar3);
    FUN_14008cb80(puVar4,&DAT_140165ebc);
    FUN_1400c982a(local_d0,param_2);
    FUN_1400c6eba(local_d0);
  }
  FUN_14008cb80(puVar4,&DAT_140165ebd);
  if (100 < *local_50) {
    FUN_1400a07d2(local_268);
    for (; local_e8 != local_e0; local_e8 = local_e8 + 1) {
      FUN_14008cb80(puVar1,local_e8);
    }
  }
  FUN_140088af0(local_268);
  return;
}

