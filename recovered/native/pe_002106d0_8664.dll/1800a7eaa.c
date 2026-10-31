/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a7eaa */

void FUN_1800a7eaa(longlong param_1,undefined1 *param_2)

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
  FUN_18009e9f0(local_268,local_d0,param_1 + 0x4c);
  FUN_18008c4ce(param_2,&DAT_180417c68);
  puVar1 = param_2 + 0x58;
  local_50 = (uint *)(param_1 + 0x58);
  FUN_18008ca8a(puVar1);
  FUN_18007f392(puVar1,param_1 + 0x5c);
  puVar4 = puVar1;
  if ((100 < *(uint *)(param_1 + 0x58)) &&
     (puVar4 = local_210, param_2 = local_268, 0x66 < *(uint *)(param_1 + 0x58))) {
    DAT_180417ca0 = 1;
  }
  FUN_18008c5f2(param_2,param_1 + 0x60);
  FUN_18008ca8a(puVar4,param_1 + 0x88);
  FUN_18008ca8a(puVar4,param_1 + 0x8c);
  FUN_18008ca8a(puVar4,param_1 + 0x90);
  local_d0[0] = (undefined4)
                ((ulonglong)(*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0)) >> 7);
  FUN_18008ca8a(puVar4);
  if (0x66 < *(uint *)(param_1 + 0x58)) {
    FUN_18008ca8a(puVar4,param_1 + 0x80);
    FUN_18008ca8a(puVar4,param_1 + 0x84);
  }
  if ((DAT_180417cb8 == '\x01') && (*(longlong *)(param_1 + 0x98) == *(longlong *)(param_1 + 0xa0)))
  {
    local_d0[0] = 0xffffffff;
    FUN_18008ca8a(puVar4);
  }
  else {
    local_d0[0] = 0xffffffff;
    FUN_18008cdc4(puVar4,param_1 + 0x98);
  }
  lVar2 = *(longlong *)(param_1 + 0xb8);
  for (lVar3 = *(longlong *)(param_1 + 0xb0); lVar3 != lVar2; lVar3 = lVar3 + 0x80) {
    FUN_1800aa3e4(local_d0,lVar3);
    FUN_18007f392(puVar4,&DAT_1802ba72d);
    FUN_1800aaad8(local_d0,param_2);
    FUN_1800a83ac(local_d0);
  }
  FUN_18007f392(puVar4,&DAT_1802ba72c);
  if (100 < *local_50) {
    FUN_18009eef8(local_268);
    for (; local_e8 != local_e0; local_e8 = local_e8 + 1) {
      FUN_18007f392(puVar1,local_e8);
    }
  }
  FUN_18007306c(local_268);
  return;
}

