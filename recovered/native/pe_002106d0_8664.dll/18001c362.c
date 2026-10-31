/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001c362 */

undefined8 * FUN_18001c362(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  else {
    lVar2 = lVar1 + 0x30;
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x28);
    }
    FUN_180001e92(param_2,lVar2);
  }
  return param_2;
}

