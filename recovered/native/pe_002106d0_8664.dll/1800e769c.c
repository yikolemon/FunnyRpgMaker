/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e769c */

undefined8 FUN_1800e769c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_98 [8];
  char local_90;
  undefined8 local_88;
  undefined8 auStack_80 [2];
  undefined1 local_70 [40];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = param_1 + 0xb8;
  FUN_180044980();
  local_88 = 0;
  auStack_80[0] = 0;
  FUN_18008d278(param_2,&local_88,0,1);
  local_40 = param_2;
  uVar2 = FUN_1800eadb0(param_2);
  FUN_180060822(&local_88);
  plVar3 = (longlong *)FUN_1800b8fe8(param_1,0);
  lVar1 = plVar3[1];
  for (lVar4 = *plVar3; lVar4 != lVar1; lVar4 = lVar4 + 0x40) {
    FUN_1800eac44(&local_88,local_98,lVar4);
    if (local_90 == '\x01') {
      FUN_1800eb42e(uVar2,lVar4,lVar4 + 0x20);
    }
  }
  FUN_180004cea(local_70);
  FUN_1800609dc(auStack_80);
  uVar2 = local_40;
  FUN_18023d6e0(local_48);
  return uVar2;
}

