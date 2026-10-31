/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110d11 */

void FUN_180110d11(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  uVar2 = FUN_180106d4e(*(undefined8 *)(lVar1 + 0x1608),param_1,0);
  FUN_180110d6c(param_1,uVar2,param_2,param_3,param_4);
  return;
}

