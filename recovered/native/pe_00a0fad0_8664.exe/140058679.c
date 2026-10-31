/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058679 */

longlong FUN_140058679(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_140006874();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_14005872a(param_1 + 0x38,*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38),
                param_2 + 0x38,param_2 + 0x40,param_1 + 0x38,param_1,uVar2);
  return param_1;
}

