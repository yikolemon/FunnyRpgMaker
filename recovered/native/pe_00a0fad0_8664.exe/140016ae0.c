/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140016ae0 */

undefined8 * FUN_140016ae0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong local_38;
  longlong *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x140);
  lVar2 = *(longlong *)(param_1 + 0x138);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_30 = param_3;
  local_28 = param_2;
  FUN_140016d7a(param_2,lVar1 - lVar2 >> 3);
  puVar5 = *(undefined8 **)(param_1 + 0x138);
  puVar3 = *(undefined8 **)(param_1 + 0x140);
  if (puVar5 != puVar3) {
    puVar7 = (undefined8 *)*local_28;
    do {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar3);
  }
  if (local_30[7] != 0) {
    lVar1 = local_28[1];
    FUN_140016cbb(&local_38,*local_28,lVar1,local_30);
    puVar5 = local_28;
    if (local_38 != lVar1) {
      uVar6 = thunk_FUN_140016eb4(lVar1,local_28[1]);
      puVar5[1] = uVar6;
    }
  }
  plVar4 = (longlong *)local_30[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != local_30);
  }
  return local_28;
}

