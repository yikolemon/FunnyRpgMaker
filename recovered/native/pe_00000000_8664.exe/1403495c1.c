/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403495c1 */

void FUN_1403495c1(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_14062a630;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) != '\0') {
    return;
  }
  uVar2 = FUN_140313264(param_1,0);
  FUN_1403491d8(0,param_1,uVar2,0);
  return;
}

