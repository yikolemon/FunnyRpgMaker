/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185655 */

void Unwind_180185655(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  for (lVar3 = *(longlong *)(param_2 + 0x48); lVar3 != lVar1; lVar3 = lVar3 + 0x40) {
    FUN_18017fc5e(uVar2,lVar3);
  }
  return;
}

