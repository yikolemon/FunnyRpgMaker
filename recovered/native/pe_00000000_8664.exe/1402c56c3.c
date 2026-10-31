/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c56c3 */

undefined8
FUN_1402c56c3(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong local_140;
  undefined1 local_138 [40];
  longlong local_110;
  undefined1 local_108 [40];
  longlong local_e0;
  undefined1 local_d8 [40];
  undefined8 **local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 **local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_140 = *param_2;
  plVar1 = param_2 + 1;
  local_70 = param_3;
  local_58 = param_4;
  local_50 = param_2;
  FUN_1402c5cd6(&local_e0,&local_140,plVar1,param_2[5]);
  local_a0 = *local_70;
  plVar2 = local_70 + 1;
  FUN_1402c5cd6(&local_140,&local_a0,plVar2,local_70[5]);
  local_110 = *local_58;
  plVar3 = local_58 + 1;
  FUN_1402c5cd6(&local_a0,&local_110,plVar3,local_58[5]);
  local_b0 = (undefined8 **)*param_5;
  local_68 = param_5 + 1;
  FUN_1402c5cd6(&local_110,&local_b0,local_68,param_5[5]);
  while ((local_e0 != local_140 && (local_a0 != local_110))) {
    local_b0 = local_98;
    if (7 < local_80) {
      local_b0 = local_98[0];
    }
    local_a8 = local_88;
    iVar4 = FUN_14027e61a(local_d8,&local_b0);
    if (iVar4 != 0) break;
    FUN_1402c43c4(&local_e0);
    FUN_1402c43c4(&local_a0);
  }
  FUN_1402c5d3c(local_58,&local_a0);
  FUN_1402c5d3c(local_50,&local_e0);
  FUN_1402c5c4e(param_1,local_50,local_58);
  FUN_14021331c(local_108);
  FUN_14021331c(local_98);
  FUN_14021331c(local_138);
  FUN_14021331c(local_d8);
  local_60 = plVar2;
  local_50 = plVar1;
  FUN_14021331c(plVar1);
  local_50 = plVar3;
  FUN_14021331c(local_60);
  FUN_14021331c(local_50);
  FUN_14021331c(local_68);
  return param_1;
}

