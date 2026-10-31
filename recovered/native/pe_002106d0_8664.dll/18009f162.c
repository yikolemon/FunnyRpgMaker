/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009f162 */

void FUN_18009f162(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 local_60 [8];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_60[0] = CONCAT31(local_60[0]._1_3_,
                         (char)((uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) >> 2) +
                         '\x01');
  lVar3 = param_2 + 0x58;
  FUN_18007f392(lVar3,local_60);
  local_60[0] = *(undefined4 *)(param_1 + 0x20);
  FUN_18008ca8a(lVar3,local_60);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  for (puVar4 = *(undefined4 **)(param_1 + 8); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    local_60[0] = *puVar4;
    FUN_18008ca8a(lVar3,local_60);
  }
  FUN_18007f392(lVar3,param_1 + 0x40);
  local_60[0] = CONCAT31(local_60[0]._1_3_,
                         (char)((uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) >> 5));
  FUN_18007f392(lVar3);
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != lVar2) {
    do {
      FUN_18000358a(local_60,lVar3);
      FUN_18008c5f2(param_2,local_60);
      FUN_1800010ec(local_60);
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != lVar2);
  }
  return;
}

