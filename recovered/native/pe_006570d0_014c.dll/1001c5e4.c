/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c5e4 */

undefined4 FUN_1001c5e4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 ***pppuVar2;
  undefined4 **local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)local_34;
  local_10 = 0xffffffff;
  local_14 = &LAB_10059370;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_1001c512(local_34,param_1,param_2);
  local_10 = 0;
  pppuVar2 = local_34;
  if (0xf < local_20) {
    pppuVar2 = (undefined4 ***)local_34[0];
  }
  uVar1 = FUN_1001c721(pppuVar2,local_24);
  local_10 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_18;
  return uVar1;
}

