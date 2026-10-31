/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140039be6 */

undefined8 * FUN_140039be6(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_58;
  longlong local_50;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar6 = *(longlong *)(param_1 + 0x280);
  local_40 = param_2;
  for (lVar4 = *(longlong *)(param_1 + 0x278); lVar4 != lVar6; lVar4 = lVar4 + 0x28) {
    FUN_14000d086(local_40,lVar4 + 8);
  }
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x48) == '\0') {
      plVar2 = *(longlong **)(param_1 + 0x308);
      for (plVar5 = *(longlong **)(param_1 + 0x300); plVar5 != plVar2; plVar5 = plVar5 + 2) {
        lVar4 = *plVar5;
        if (*(longlong *)(lVar4 + 0x18) == 0) {
          lVar6 = *(longlong *)(lVar4 + 0x278);
          lVar4 = *(longlong *)(lVar4 + 0x280);
          if (lVar6 != lVar4) {
            for (; lVar6 != lVar4; lVar6 = lVar6 + 0x28) {
              FUN_14000d086(local_40,lVar6 + 8);
            }
          }
        }
      }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x2b0);
    for (puVar3 = *(undefined8 **)(param_1 + 0x2a8); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      FUN_140039be6(*puVar3,&local_58,1);
      lVar6 = local_50;
      for (lVar4 = local_58; lVar4 != lVar6; lVar4 = lVar4 + 0x20) {
        FUN_14000d086(local_40,lVar4);
      }
      FUN_14000eeca(&local_58);
    }
  }
  return local_40;
}

