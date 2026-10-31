/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093710 */

undefined4 FUN_180093710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_180093634(param_1,local_38,param_2,param_3);
  ppppuVar2 = local_38;
  if (7 < local_20) {
    ppppuVar2 = (undefined8 ****)local_38[0];
  }
  uVar1 = FUN_18009380d(ppppuVar2,local_28);
  FUN_1800010ec(local_38);
  return uVar1;
}

