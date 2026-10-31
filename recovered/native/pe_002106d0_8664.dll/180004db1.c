/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180004db1 */

undefined4
FUN_180004db1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 **local_68 [3];
  ulonglong local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_180004ffe(local_c8);
  local_41 = 1;
  FUN_180001e92(local_68,"FunnyGameXLL-x64.dll");
  local_42 = 0;
  FUN_1800cc381(local_a8,local_68,local_c8);
  local_42 = 0;
  FUN_180001ef2(local_68);
  uVar1 = DAT_1804174b8;
  local_41 = 0;
  FUN_18000358a(local_88,local_a8);
  FUN_1800c8f69(local_68,local_88);
  pppuVar3 = local_68;
  if (0xf < local_50) {
    pppuVar3 = (undefined8 ***)local_68[0];
  }
  uVar2 = FUN_1800d3fce(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,pppuVar3,uVar1);
  FUN_180001ef2(local_68);
  FUN_1800010ec(local_88);
  FUN_180001e4c(local_a8);
  return uVar2;
}

