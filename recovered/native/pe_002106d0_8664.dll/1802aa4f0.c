/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa4f0 */

undefined4 FUN_1802aa4f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar2 = FUN_18028cfc0();
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  lVar2 = *(longlong *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar3 = FUN_18028cfc0();
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_18028cfc0();
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  FUN_18028eb10(**(undefined8 **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x88),
                *(undefined8 *)(param_2 + 0x90),lVar2,*(undefined8 *)(param_2 + 0xa0),0,0,1);
  lVar2 = FUN_18028cfc0();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}

