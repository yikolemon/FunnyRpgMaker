/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003c7ce */

void FUN_18003c7ce(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_68 [24];
  longlong local_50;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18003ae98(local_48,10,param_1 + 8);
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar3 = lVar1 / 10000000;
  lVar2 = -lVar3;
  if (-1 < lVar2) {
    lVar3 = lVar2;
  }
  lVar3 = FUN_180025acd(local_68,lVar3,0x15);
  local_50 = lVar3;
  if (lVar1 < -9999999) {
    local_50 = lVar3 + -1;
    *(undefined1 *)(lVar3 + -1) = 0x2d;
  }
  FUN_180018bde(param_4,local_50);
  FUN_18003af0c(local_48);
  return;
}

