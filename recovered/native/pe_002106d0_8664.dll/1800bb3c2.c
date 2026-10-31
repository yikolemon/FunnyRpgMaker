/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb3c2 */

void FUN_1800bb3c2(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_58;
  longlong local_50;
  longlong *plStack_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      local_50 = 0;
      plStack_48 = (longlong *)0x0;
      local_40 = 0;
      local_58 = param_1;
      FUN_1800bb560(&local_58,param_2,param_3);
      if (local_50 != 0) {
        lVar3 = *param_1;
        plVar4 = *(longlong **)(lVar3 + 8);
        *(longlong **)(local_40 + 8) = plVar4;
        *plVar4 = local_40;
        *plStack_48 = lVar3;
        *(longlong **)(lVar3 + 8) = plStack_48;
        param_1[1] = param_1[1] + local_50;
        local_50 = 0;
      }
      FUN_1800bb670(&local_58);
      return;
    }
    if (param_2 == param_3) break;
    FUN_1800bb71e(puVar2 + 2,param_2 + 2);
    param_2 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)*puVar2;
  }
  FUN_1800bb6c0(param_1,puVar2,puVar1);
  return;
}

