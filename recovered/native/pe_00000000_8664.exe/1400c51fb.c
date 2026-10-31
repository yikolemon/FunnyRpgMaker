/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c51fb */

undefined8 FUN_1400c51fb(undefined8 param_1)

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
  uVar3 = FUN_1400c524f(uVar2,0,param_1,0);
  return uVar3;
}

