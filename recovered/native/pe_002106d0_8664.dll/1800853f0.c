/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800853f0 */

undefined8 FUN_1800853f0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined8 ***pppuVar1;
  undefined8 local_88;
  undefined8 local_80 [4];
  undefined8 **local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_40 = param_2;
  FUN_180001e92(param_2,"syntax error ");
  if (*(longlong *)(param_4 + 0x10) != 0) {
    local_80[0] = CONCAT71(local_80[0]._1_7_,0x20);
    FUN_1800524ab(local_60,"while parsing ",param_4);
    pppuVar1 = local_60;
    if (0xf < local_48) {
      pppuVar1 = (undefined8 ***)local_60[0];
    }
    FUN_180003300(local_40,pppuVar1,local_50);
    FUN_180001ef2(local_60);
  }
  FUN_180003300(local_40,&DAT_18037bd60,2);
  if (*(int *)(param_1 + 0x40) == 0xe) {
    local_31 = 0x27;
    FUN_18004ffea(param_1 + 0x48,local_80);
    local_88 = *(undefined8 *)(param_1 + 0xb8);
    FUN_180055c00(local_60,&local_88,"; last read: \'",local_80,&local_31);
    pppuVar1 = local_60;
    if (0xf < local_48) {
      pppuVar1 = (undefined8 ***)local_60[0];
    }
    FUN_180003300(local_40,pppuVar1,local_50);
    FUN_180001ef2(local_60);
    FUN_180001ef2(local_80);
  }
  else {
    local_80[0] = FUN_18008a368();
    FUN_1800172c9(local_60,"unexpected ");
    pppuVar1 = local_60;
    if (0xf < local_48) {
      pppuVar1 = (undefined8 ***)local_60[0];
    }
    FUN_180003300(local_40,pppuVar1,local_50);
    FUN_180001ef2(local_60);
  }
  if (param_3 != 0) {
    local_80[0] = FUN_18008a368(param_3);
    FUN_1800172c9(local_60,"; expected ");
    pppuVar1 = local_60;
    if (0xf < local_48) {
      pppuVar1 = (undefined8 ***)local_60[0];
    }
    FUN_180003300(local_40,pppuVar1,local_50);
    FUN_180001ef2(local_60);
  }
  return local_40;
}

