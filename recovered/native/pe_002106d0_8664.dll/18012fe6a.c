/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012fe6a */

void FUN_18012fe6a(longlong param_1,longlong param_2)

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

