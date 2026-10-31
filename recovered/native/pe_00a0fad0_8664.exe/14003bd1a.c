/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003bd1a */

undefined8 * FUN_14003bd1a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x308);
  lVar2 = *(longlong *)(param_1 + 0x300);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_28 = param_2;
  FUN_140016d7a(param_2,lVar1 - lVar2 >> 4);
  puVar4 = *(undefined8 **)(param_1 + 0x300);
  puVar3 = *(undefined8 **)(param_1 + 0x308);
  if (puVar4 != puVar3) {
    puVar6 = (undefined8 *)*local_28;
    do {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 2;
      puVar6 = puVar6 + 1;
    } while (puVar4 != puVar3);
  }
  if (*(longlong *)(param_3 + 0x38) != 0) {
    lVar1 = local_28[1];
    FUN_140016cbb(&local_30,*local_28,lVar1,param_3);
    puVar4 = local_28;
    if (local_30 != lVar1) {
      uVar5 = thunk_FUN_140016eb4(lVar1,local_28[1]);
      puVar4[1] = uVar5;
    }
  }
  return local_28;
}

