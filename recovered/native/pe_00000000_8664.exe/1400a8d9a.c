/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a8d9a */

void FUN_1400a8d9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar1;
  lVar2 = *(longlong *)(param_2 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 0x18) = param_1;
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x18) = param_1;
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}

