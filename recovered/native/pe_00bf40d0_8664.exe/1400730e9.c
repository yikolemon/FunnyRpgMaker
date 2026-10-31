/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400730e9 */

void FUN_1400730e9(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar4 = *(longlong *)(param_1 + 0x2e0);
    (**(code **)(lVar4 + 0x80))(param_1,lVar1 + 0x68);
    (**(code **)(lVar4 + 0x78))(param_1,lVar1 + 0x48);
    FUN_14002115a(lVar3,(longlong *)(lVar1 + 0x80));
    FUN_14001c53d(lVar2,lVar1);
    return;
  }
  return;
}

