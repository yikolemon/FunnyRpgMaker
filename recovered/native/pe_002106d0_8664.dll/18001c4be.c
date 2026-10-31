/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001c4be */

undefined4 FUN_18001c4be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_18001c3e6(param_1,local_38,param_2,param_3);
  ppppuVar2 = local_38;
  if (0xf < local_20) {
    ppppuVar2 = (undefined8 ****)local_38[0];
  }
  uVar1 = FUN_18001c5bb(ppppuVar2,local_28);
  FUN_180001ef2(local_38);
  return uVar1;
}

