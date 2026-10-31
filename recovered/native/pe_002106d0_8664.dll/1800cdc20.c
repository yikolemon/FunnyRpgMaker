/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cdc20 */

void FUN_1800cdc20(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 *local_180;
  longlong local_178;
  undefined8 local_170;
  code *local_168;
  undefined1 local_160 [256];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_180 = local_160;
  local_178 = 0;
  local_168 = FUN_180018c5c;
  local_170 = 0xfa;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
            (*(longlong **)(param_1 + 0x10),param_2,&local_180);
  lVar3 = local_178;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar4 = FUN_180286a64(local_180,1,local_178);
    if (lVar4 != lVar3) {
      puVar5 = (undefined4 *)FUN_18027e66c();
      uVar1 = *puVar5;
      FUN_180003216(local_40,param_1 + 0x78);
      FUN_180012917(local_60,"Failed writing to file ",local_40);
      FUN_1800ce2bc(local_60,uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_180 != local_160) {
    thunk_FUN_180290e40();
  }
  return;
}

