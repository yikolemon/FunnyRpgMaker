/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015714b */

void FUN_14015714b(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (*(uint *)(param_2 + 0xb8) < *(uint *)(param_1 + 0x1b0)) {
    lVar1 = *(longlong *)(param_1 + 0x1b8);
    lVar3 = (ulonglong)*(uint *)(param_2 + 0xb8) * 0xfc;
    uVar2 = (**(code **)(param_2 + 0x50))(param_2,0);
    *(undefined4 *)(lVar1 + 0xd0 + lVar3) = uVar2;
    *(undefined4 *)(lVar1 + 0xb4 + lVar3) = uVar2;
  }
  return;
}

