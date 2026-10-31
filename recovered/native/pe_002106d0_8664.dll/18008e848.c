/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008e848 */

void FUN_18008e848(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 local_1e0 [88];
  undefined1 local_188 [296];
  longlong local_60;
  longlong local_58;
  int local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_44 = 1;
  FUN_18009e9f0(local_1e0,&local_44,param_1 + 0x4c);
  FUN_18008c4ce(param_2,&DAT_180417bd0);
  puVar1 = param_2 + 0x58;
  FUN_18007f392(puVar1,param_1 + 0x78);
  puVar3 = puVar1;
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    DAT_180417ca0 = 1;
    param_2 = local_1e0;
    puVar3 = local_188;
  }
  local_44 = (int)((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60)) >> 5)
             * -0x24e6a171;
  FUN_18008ca8a(puVar3);
  lVar2 = *(longlong *)(param_1 + 0x68);
  for (lVar4 = *(longlong *)(param_1 + 0x60); lVar4 != lVar2; lVar4 = lVar4 + 0xde0) {
    FUN_18009eba2(lVar4,param_2);
  }
  FUN_18007f392(puVar3,param_1 + 0x79);
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    FUN_18009eef8(local_1e0);
    for (; local_60 != local_58; local_60 = local_60 + 1) {
      FUN_18007f392(puVar1,local_60);
    }
  }
  FUN_18007306c(local_1e0);
  return;
}

