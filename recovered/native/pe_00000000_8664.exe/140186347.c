/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140186347 */

undefined8 FUN_140186347(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(longlong *)(param_1 + 0x2078) = param_1 + 0x1074;
  *(longlong *)(param_1 + 0x28) = param_1 + 0x1074;
  *(undefined4 *)(param_1 + 0x30) = 0x1000;
  while( true ) {
    if ((*(int *)(param_1 + 0x20) == 0) && (uVar2 = FUN_1401864d6(param_1), (int)uVar2 != 0)) {
      return uVar2;
    }
    iVar1 = FUN_140184a5e(param_1 + 0x18,0);
    if (iVar1 != 0) break;
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
  }
  if (iVar1 != 1) {
    *(undefined8 *)(param_1 + 0x2080) = *(undefined8 *)(param_1 + 0x2078);
    return 0x55;
  }
  *(longlong *)(param_1 + 0x2080) = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x2078)) {
    return 0x55;
  }
  return 0;
}

