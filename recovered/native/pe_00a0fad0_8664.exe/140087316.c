/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140087316 */

void FUN_140087316(longlong param_1,undefined1 *param_2)

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
  FUN_1400a023e(local_1e0,&local_44,param_1 + 0x4c);
  FUN_1400a03e4(param_2,&DAT_1401cc7d8);
  puVar1 = param_2 + 0x58;
  FUN_14008cb80(puVar1,param_1 + 0x78);
  puVar3 = puVar1;
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    DAT_1401cc8c4 = 1;
    param_2 = local_1e0;
    puVar3 = local_188;
  }
  local_44 = (int)((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60)) >> 5)
             * -0x24e6a171;
  FUN_14009e652(puVar3);
  lVar2 = *(longlong *)(param_1 + 0x68);
  for (lVar4 = *(longlong *)(param_1 + 0x60); lVar4 != lVar2; lVar4 = lVar4 + 0xde0) {
    FUN_1400a047c(lVar4,param_2);
  }
  FUN_14008cb80(puVar3,param_1 + 0x79);
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    FUN_1400a07d2(local_1e0);
    for (; local_60 != local_58; local_60 = local_60 + 1) {
      FUN_14008cb80(puVar1,local_60);
    }
  }
  FUN_140088af0(local_1e0);
  return;
}

