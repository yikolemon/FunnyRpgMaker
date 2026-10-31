/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008dbe2 */

void FUN_18008dbe2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 local_1f8 [264];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [16];
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x68);
  local_50 = param_2;
  for (lVar2 = *(longlong *)(param_1 + 0x60); lVar2 != lVar1; lVar2 = lVar2 + 0xde0) {
    FUN_18008f076(lVar2,local_70);
    FUN_18000358a(local_90,lVar2 + 0x28);
    FUN_18008f640(local_1f8,local_90);
    local_60 = L"{}_{}";
    local_58 = 5;
    FUN_18008f5c1(local_f0,&local_60,lVar2 + 4,local_1f8);
    FUN_1800010ec(local_1f8);
    FUN_18006a842(local_1f8,local_f0,0);
    FUN_180001c90(local_d0,local_50,local_1f8);
    FUN_180001e4c(local_1f8);
    FUN_18007e6e6(local_d0,".json");
    uVar3 = 0;
    FUN_18007f878(local_1f8,local_d0,2,0x40,1);
    FUN_18007fd5c(local_70,local_b0,4,0x20,uVar3 & 0xffffff00,0);
    FUN_18007fd45(local_1f8,local_b0);
    FUN_180001ef2(local_b0);
    FUN_18007ffc0(local_1f8);
    FUN_18007f8d0(local_1f8);
    FUN_180001e4c(local_d0);
    FUN_1800010ec(local_f0);
    FUN_18007ff6e(local_70);
  }
  return;
}

