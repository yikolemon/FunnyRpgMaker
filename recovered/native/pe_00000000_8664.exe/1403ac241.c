/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ac241 */

longlong FUN_1403ac241(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = FUN_1403ac1e6(*(undefined4 *)(param_2 + 0x18),param_3,param_4);
  plVar2 = (longlong *)FUN_140310d5e(*(longlong *)(param_1 + 0x2b0) + 0xd8,uVar1,0);
  if (*plVar2 != 0) {
    return *plVar2;
  }
  if (((*(byte *)(param_2 + 0x10) & 8) != 0) || (*(char *)(param_1 + 0x50) == '\x01')) {
    lVar3 = FUN_1403a9f7e(param_1,param_2,param_3,param_4);
    if (lVar3 != 0) {
      return lVar3;
    }
    if (*(char *)(param_1 + 0x50) != '\0') {
      return 0;
    }
  }
  lVar3 = FUN_1403a9a21(param_1,param_2,param_3,param_4,uVar1);
  *plVar2 = lVar3;
  return lVar3;
}

