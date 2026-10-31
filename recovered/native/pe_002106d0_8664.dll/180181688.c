/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180181688 */

undefined8 * FUN_180181688(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 local_2c;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = param_1;
  uVar1 = FUN_1800136a6(param_2,&DAT_180360b27);
  local_3c = 0;
  FUN_1800e5e62(&DAT_1802b0ea8,uVar1);
  *(undefined4 *)local_28 = local_3c;
  uVar1 = FUN_1800136a6(param_2,"dy");
  local_3c = 0;
  FUN_1800e5e62(&DAT_1802b0ea8,uVar1);
  *(undefined4 *)((longlong)local_28 + 4) = local_3c;
  FUN_180181766(&local_3c,param_2);
  *(undefined4 *)(local_28 + 3) = local_2c;
  local_28[1] = CONCAT44(uStack_38,local_3c);
  local_28[2] = uStack_34;
  return local_28;
}

