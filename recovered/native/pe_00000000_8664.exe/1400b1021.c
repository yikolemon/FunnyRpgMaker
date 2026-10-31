/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b1021 */

void FUN_1400b1021(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) != '\0') {
    return;
  }
  uVar2 = FUN_14007b050(param_1,0);
  FUN_1400b0c38(0,param_1,uVar2,0);
  return;
}

