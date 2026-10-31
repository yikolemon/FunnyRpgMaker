/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140009ca6 */

undefined8 FUN_140009ca6(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

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
  FUN_1400027d2(param_2,"syntax error ");
  if (*(longlong *)(param_4 + 0x10) != 0) {
    local_80[0] = CONCAT71(local_80[0]._1_7_,0x20);
    FUN_14000cc81(local_60,"while parsing ",param_4);
    pppuVar1 = local_60;
    if (0xf < local_48) {
      pppuVar1 = (undefined8 ***)local_60[0];
    }
    FUN_140003816(local_40,pppuVar1,local_50);
    FUN_14000109c(local_60);
  }
  FUN_140003816(local_40,&DAT_140edae85,2);
  if (*(int *)(param_1 + 0x40) == 0xe) {
    local_31 = 0x27;
    FUN_140009f7a(param_1 + 0x48,local_80);
    local_88 = *(undefined8 *)(param_1 + 0xb8);
    FUN_140011698(local_60,&local_88,"; last read: \'",local_80,&local_31);
    pppuVar1 = local_60;
    if (0xf < local_48) {
      pppuVar1 = (undefined8 ***)local_60[0];
    }
    FUN_140003816(local_40,pppuVar1,local_50);
    FUN_14000109c(local_60);
    FUN_14000109c(local_80);
  }
  else {
    local_80[0] = FUN_1400117ba();
    FUN_14000e963(local_60,"unexpected ");
    pppuVar1 = local_60;
    if (0xf < local_48) {
      pppuVar1 = (undefined8 ***)local_60[0];
    }
    FUN_140003816(local_40,pppuVar1,local_50);
    FUN_14000109c(local_60);
  }
  if (param_3 != 0) {
    local_80[0] = FUN_1400117ba(param_3);
    FUN_14000e963(local_60,"; expected ");
    pppuVar1 = local_60;
    if (0xf < local_48) {
      pppuVar1 = (undefined8 ***)local_60[0];
    }
    FUN_140003816(local_40,pppuVar1,local_50);
    FUN_14000109c(local_60);
  }
  return local_40;
}

