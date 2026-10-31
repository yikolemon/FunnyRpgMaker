/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c5ee6 */

undefined8 FUN_1400c5ee6(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) != '\0') {
    return 0;
  }
  uVar2 = FUN_140080066(*(longlong *)(lVar1 + 0x1608),param_1,0);
  uVar3 = FUN_1400c524f(uVar2,param_2,param_1,0);
  return uVar3;
}

