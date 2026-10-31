/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014c2cb */

undefined8 FUN_18014c2cb(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) != '\0') {
    return 0;
  }
  uVar2 = FUN_180106d4e(*(longlong *)(lVar1 + 0x1608),param_1,0);
  uVar3 = FUN_18014c31f(uVar2,0,param_1,0);
  return uVar3;
}

